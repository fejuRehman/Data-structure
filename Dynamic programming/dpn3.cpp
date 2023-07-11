// maximum no of balanced binary trees
  /* iska approah ye h k balanced binary tree use kehte h jisme 
     left binary tree aur right binary tree ki height ka maximun difference
     one hona chahiye to isme 3 combination bn jaayega 
     1. left bhi h-1 ho aur right bhi h-1 ho
     2. left h-1 ho aur right h-2 ho
     3. left h-2 ho aur right h-1 ho.
   */
#include<bits/stdc++.h>
using namespace std ;
// recursive case
int No_balanced_binary_tree1(int h){
    // base case
    if(h<=1){
        return 1;
    }
    int x=No_balanced_binary_tree1(h-1);
    int y=No_balanced_binary_tree1(h-2);
    int total_comb=x*x+2*x*y;
    return total_comb;
}
// memoization approach
int No_balanced_binary_tree2(int h,vector<int>&dp){
    // base case 
    if(h<=1) return 1;
    // check if we already calculated answer
    if(dp[h]!=-1) return dp[h];
    // recursive case
    // calculate answer 
    int x=No_balanced_binary_tree2(h-1,dp);
    int y=No_balanced_binary_tree2(h-2,dp);
    //int total_comb=x*x+2*x*y;
    // store answer for future use
    dp[h]=x*x+2*x*y;
    return dp[h];

}// dynamic approach
int No_balanced_binary_tree3(int h){
    vector<int>v(h+1,-1);
    v[0]=1;
    v[1]=1;
    for(int i=2;i<=h;i++){
        int x=v[i-1];
        int y=v[i-2];
        int sum=x*x+2*x*y;
        v[i]=sum;
    }
    return v[h];
}
int main(){
int h=3;
//cin>>h;
cout<<No_balanced_binary_tree1(h)<<endl;
vector<int>v(h+1,-1);
cout<<No_balanced_binary_tree2(h,v)<<endl;
cout<<No_balanced_binary_tree3(h)<<endl;

return 0;
}