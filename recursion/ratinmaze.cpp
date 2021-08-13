//4 direction having a visited array along to store the visited array

// #include<bits/stdc++.h>
// using namespace std;
// char des[4]={'D','L','R','U'};
// int di[4]={1,0,0,-1};
// int dj[4]={0,-1,1,0};
// int n,m;
// void findpath(int i,int j,string s,vector<vector<int>>vis){
//     if(i>n-1||j>n-1||i<0||j<0||vis[i][j]==1)
//         return;
//     if(i==n-1&&j==n-1){
//         cout<<s<<endl;
//         return;
//     }
//     vis[i][j]=1;
//     // s.push_back('D');
//     // findpath(i+1,j,s,vis);
//     // s.pop_back();
//     // s.push_back('L');
//     // findpath(i,j-1,s,vis);
//     // s.pop_back();
//     // s.push_back('R');
//     // findpath(i,j+1,s,vis);
//     // s.pop_back();
//     // s.push_back('U');
//     // findpath(i-1,j,s,vis);
//     // s.pop_back();
    
//     //optimized code
//     for(int x=0;x<4;x++){
//         s.push_back(des[x]);
//         findpath(i+di[x],j+dj[x],s,vis);
//         s.pop_back();
//     }
//     vis[i][j]=0;
// }
// int main(){
//     cin>>n>>m;
//     vector<vector<int>> vis(n,vector<int>(m,0));
//     findpath(0,0,"",vis);
// }

// A file whose first line contains the size of the square maze 
// The next n lines contain n binary values separated by space. 0 denotes an open cell 
// while 1 denotes a blocked cell. You have to find paths which contain only cells 
// which are open, and finally print the total no of such unique paths. 
// Retracing the 1 or more cells back and forth is not considered a new path. 
// The set of all cells covered in a single path should be unique from other paths

// Output
// The output should be the total no of paths possible on the first line

// Example
// Input: 
// 7
// 0 0 1 0 0 1 0
// 1 0 1 1 0 0 0
// 0 0 0 0 1 0 1
// 1 0 1 0 0 0 0 
// 1 0 1 1 0 1 0
// 1 0 0 0 0 1 0
// 1 1 1 1 0 0 0

#include <iostream>
#include <vector>
using namespace std;
int n;
char dir[5]={'D','L','R','U'};
int di[4]={1,0,0,-1};
int dj[4]={0,-1,1,0};
int findpath(int i,int j,vector<vector<int>>&vec,vector<vector<int>>&vis){
    if(i>=n||j>=n||i<0||j<0||vec[i][j]==1||vis[i][j]==1)
        return 0;
    if(i==n-1&&j==n-1)
        return 1;
    vis[i][j]=1;
        
    // int right=findpath(i,j+1,vec,vis);
    // int down=findpath(i+1,j,vec,vis);
    // int up=findpath(i-1,j,vec,vis);
        //optimized code
            int count=0;
            for(int x=0;x<4;x++){
                count+=findpath(i+di[x],j+dj[x],vec,vis);
            }
    vis[i][j]=0;
    // int left=findpath(i,j-1,vec,vis);
    // return left+right+down+up;
    return count;
}

int main() {
	// your code goes here
	cin>>n;
	vector<vector<int>> vec(n,vector<int>(n));
	vector<vector<int>> vis(n,vector<int>(n,0));
	for(int i=0;i<n;i++){
	    for(int j=0;j<n;j++)
	        cin>>vec[i][j];
	}
	cout<<findpath(0,0,vec,vis);
	return 0;
}
