#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    }
    
    int t=0,l=0,b=m-1,r=n-1,dir=0;
    while(t<=b&&l<=r){
        if(dir==0){
            for(int i=l;i<=r;i++)
                cout<<a[t][i]<<" ";
            t++;
            dir=1;
        }
        else if(dir==1){
            for(int i=t;i<=b;i++)
                cout<<a[i][r]<<" ";
            r--;
            dir=2;
        }
        else if(dir==2){
            for(int i=r;i>=l;i--)
                cout<<a[b][i]<<" ";
            b--;
            dir=3;
        }
        else if(dir==3){
            for(int i=b;i>=t;i--)
                cout<<a[i][l]<<" ";
                l++;
                dir=0;
        }
    }
}