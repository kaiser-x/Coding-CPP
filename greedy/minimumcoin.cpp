#include<bits/stdc++.h>
using namespace std;


int mincoins(int v){
    int den[]={1,2,5,10,20,50,100,500,1000};

    int number_of_coins;

    for(int i=9-1;i>=0;i--){
        while(den[i]<=v){
            
            number_of_coins++;

            v=v-den[i];
        }
    }
    return number_of_coins;
}

int main(){
    int v;
    cin>>v;
    int ans=mincoins(v);
    cout<<ans<<endl;
}