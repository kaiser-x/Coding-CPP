
#include <bits/stdc++.h>
using namespace std;

int knapsackprofit(int weight[],int profit[],int capacity,int n){
    if(capacity==0||n==0)
        return 0;
    if(weight[n-1]>capacity)
        return knapsackprofit(weight,profit,capacity,n-1);
    return max(knapsackprofit(weight,profit,capacity,n-1),profit[n-1]+knapsackprofit(weight,profit,capacity-weight[n-1],n-1));
}

int main(){
    int n;
    printf("enter sisze;\n");
    cin>>n;
    int weight[n];
    cout<<"enter weight"<<endl;
    for(int i=0;i<n;i++)
        cin>>weight[i];
    int profit[n];
    cout<<"enter profit"<<endl;
    for(int i=0;i<n;i++)
        cin>>profit[i];

    int capacity;
    cout<<"enter capacity"<<endl;
    cin>>capacity;

    cout<<"Max profit is:"<<knapsackprofit(weight,profit,capacity,n);
}