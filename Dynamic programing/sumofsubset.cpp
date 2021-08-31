#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> findSubs(int n,int arr[],int target){
     vector<vector<int>>dp(0,vector<int>(0,0));
        for(int c=0;c<n;c++){
            for(int i=c;i<target+1;i++){
                if(i==c){
                    dp[i].push_back()
                }
            }
        }
    return dp[dp.size()-1];
}
int main(){
    int n,target;
    cout<<"enter size"<<endl;
    int arr[n];
    cout<<"enter array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter target"<<endl;
    cin>>target;
    vector<vector<int>>dp(0,vector<int>(0,0));
   dp= findSubs(n,arr,target);
}
