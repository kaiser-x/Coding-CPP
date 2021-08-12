#include<bits/stdc++.h>
using namespace std;
int n,m;
void findpath(int i,int j,string s){
    //boundary check
    if(i>=n||j>=m)
        return;
        //last index then print;
    if(i==n-1&&j==m-1){
        cout<< s <<endl;
        return;
    }

    s.push_back('D');
    findpath(i+1,j,s);
    s.pop_back();
    s.push_back('R');
    findpath(i,j+1,s);
    s.pop_back();
}
int main(){
    
    cin>>n>>m;
    findpath(0,0,"");
}
// #include <iostream>
// using namespace std;

// int findpath(int i,int j,int n,int arr[][7]){
//     if(i>n-1||j>n-1||i<0||j<0||arr[i][j]==1)
//         return 0;
//     if(i==n-1&&j==n-1)
//         return 1;
//     int left=findpath(i,j-1,n,arr);
//     int right=findpath(i,j+1,n,arr);
//     int down=findpath(i+1,j,n,arr);
//     int up=findpath(i-1,j,n,arr);
    
//     return left+right+down+up;
// }
// int main() {
// 	// your code goes here
// 	int n;
// 	cin>>n;
// 	int arr[n][7];
// 	for(int i=0;i<n;i++){
// 	    for(int j=0;j<7;j++)
// 	        cin>>arr[i][j];
// 	}
// 	cout<<findpath(0,0,n,arr);
// 	return 0;
// }
