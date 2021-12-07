#include<bits/stdc++.h>
using namespace std;

void subseq(string ip,string op,int index){
    if(index>=ip.length()){
        cout<<op;
        cout<<endl;
        return;
    }
    
    subseq(ip,op,index+1);
    op.push_back(ip[index]);
    subseq(ip,op,index+1);
}
int main(){
    string s,o;
    cin>>s;

    subseq(s,o,0);
    return 0;
}

 static int vowelCount(String s)
    {
        int n = s.length();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            if (i == 0)
                arr[i] = n;
            else
                arr[i] = (n - i) + arr[i - 1] - i;
        }

        int sum = 0;
        for (int i = 0; i < n; i++) {
            char ch = s.charAt(i);
            if (ch == 'a' || ch == 'e' || ch == 'i'
                || ch == 'o' || ch == 'u')
                sum += arr[i];
        }
        return sum;
    }