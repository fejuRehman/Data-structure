// 2-d dynamic programming
// ninja training problem
#include<bits/stdc++.h>
using namespace std ;
int max_point_ninja1(int arr[][3],int day,int last_day){
    // base case
    if(day==0){
        int maxi=0;
        for(int task=0;task<3;task++){
            if(task!=last_day){
                maxi=max(maxi,arr[day][task]);
            }
        }
        return maxi;
    }
    // recursive case
    int maxi=0;
    for(int task=0;task<3;task++){
        if(task!=last_day){
            int points=arr[day][task]+max_point_ninja1(arr,day-1,task);
            maxi=max(maxi,points);
        }
    }
    return maxi;
}  
// momoization 
int max_point_ninja2(int arr[][3],int day,int last_day,vector<vector<int>>v){
    // base case
    if(day==0){
        int maxi=0;
        for(int task=0;task<3;task++){
            if(task!=last_day){
                maxi=max(day,arr[day][task]);
            }
            if(v[day][task]!=-1) return v[day][task];
        }
        return maxi;
    }

    // recursive case
    int maxi=0;
    for(int task=0;task<3;task++){
        if(task!=last_day){
            int points=arr[day][task]+max_point_ninja2(arr,day-1,task,v);
            maxi=max(maxi,points);
        }
    }
    return v[day][last_day]= maxi;
}
// tabulation method or dynamic programming
int max_point_ninja3(int arr[][3],int n){
    vector<vector<int>>dp(3,vector<int>(4,-1));
    dp[0][0]=max(arr[0][1],arr[0][2]);
    dp[0][1]=max(arr[0][0],arr[0][2]);
    dp[0][2]=max(arr[0][1],arr[0][3]);
    dp[0][3]=max(arr[0][0],max(arr[0][2],arr[0][3]));

    for(int day=1;day<3;day++){
        
     for(int last=0;last<4;last++){
        dp[day][last]=0;
        for(int task=0;task<3;task++){
             if(task!=last){
            int points=arr[day][task]+ dp[day-1][task];
            dp[day][last]=max(dp[day][last],points);
        }
        }
     }
    } 
    return dp[n-1][3];
}
// space optimization and most optimise approach

int max_point_ninja4(int arr[][3],int n){
 vector<int>prev(4);
    prev[0]=max(arr[0][1],arr[0][2]);
    prev[1]=max(arr[0][0],arr[0][2]);
    prev[2]=max(arr[0][1],arr[0][3]);
    prev[3]=max(arr[0][0],max(arr[0][2],arr[0][3]));

    for(int day=1;day<3;day++){
        vector<int>temp(4);
     for(int last=0;last<4;last++){
        temp[last]=0;
        for(int task=0;task<3;task++){
             if(task!=last){
            int points=arr[day][task]+ prev[task];
            temp[last]=max(temp[last],points);
        }
        }
     }
     prev=temp;
    } 
    return prev[3];
}
int main(){
int arr[3][3]={1,2,5,
               3,1,1,
               3,3,3,
               };
cout<<max_point_ninja1(arr,2,3)<<endl;  
vector<vector<int>>v(3,vector<int>(4,-1)); 
cout<<max_point_ninja2(arr,2,3,v)<<endl;                        
cout<<max_point_ninja3(arr,3)<<endl;                        
cout<<max_point_ninja4(arr,3)<<endl;                        
return 0;
}