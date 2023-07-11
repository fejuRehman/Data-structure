#include<bits/stdc++.h>
using namespace std;
int cal_firstindex(int arr[],int n,int q){
	for(int i=0;i<n;i++){
		if(arr[i]==q){
			return i;
		}

}
return -1;
}
int last_index(int arr[],int n,int q){
	for(int i=n-1;i>=0;i--){
		if(arr[i]==q){
			return i;
		}
        	
}
return -1;
}
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
    int q;
	cin>>q;
	for(int i=0;i<q;i++){
		int m;
		cin>>m;
     cout<<   cal_firstindex(arr,n,m)<<" ";
     cout<<   last_index(arr,n,m)<<endl;
	
	}
	return 0;
}