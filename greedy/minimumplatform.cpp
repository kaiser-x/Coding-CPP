#include <bits/stdc++.h>
using namespace std;


    int findPlatform(int arr[], int dep[], int n)
    {
        
        sort(arr,arr+n);
        sort(dep,dep+n);

        int pf=1,max=1;
        int i=1,j=0;
        while(i<n&&j<n){
            if(arr[i]<=dep[j]){
                pf++;
                i++;
            }
            else if(arr[i]>dep[j]){
                pf--;
                j++;
            }
            if(pf>max)
                max=pf;
        }
        return max;

    }

int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        cout <<findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}