#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;

void subseq(string ip,string op,int index){
    if(index>=ip.length()){
        cout<<op;
        cout<<endl;
        return;
    }
    
    return subseq(ip,op,index+1);
    op.push_back(ip[index]);
    return subseq(ip,op,index+1);
}
int main(){
    string s,o;
    cin>>s;

    subseq(s,o,0);
    return 0;
}