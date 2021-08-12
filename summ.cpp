
// #include<iostream>
// using namespace std;
// long fib(long n){
// 	if(n==0)
// 		return 0;
// 	if(n==1||n==2)
// 		return 1;

// 	return fib(n-1)+fib(n-3);
// }
// int main()
// {

// 	// int numRay[] = { 0, 4, 3, 2, 7, 8, 2, 3, 1 };
// 	// int arr_size = sizeof(numRay) / sizeof(numRay[0]);

// 	// for (int i = 0; i < arr_size; i++) {
// 	// 	numRay[numRay[i] % arr_size]
// 	// 		= numRay[numRay[i] % arr_size] + arr_size;
// 	// }
// 	// cout << "The repeating elements are : " << endl;
// 	// for (int i = 0; i < arr_size; i++) {
// 	// 	if (numRay[i] >= arr_size * 2) {
// 	// 		cout << i << " " << endl;
// 	// 	}
// 	// }
// 	cout<<fib(70);
// 	return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2,s3;
	cin>>s1>>s2>>s3;
	int mx=max({s1.length(),s2.length(),s3.length()});
	for(int i=0;i<mx;i++){
		if(i<s1.length()){
			if(
				s1[i]=='a'||
				s1[i]=='e'||
				s1[i]=='i'||
				s1[i]=='o'||
				s1[i]=='u'
				){
					s1[i]='$';
				}
		}
		if(i<s2.length()){
			if(
				!(s2[i]=='a'||
				s2[i]=='e'||
				s2[i]=='i'||
				s2[i]=='o'||
				s2[i]=='u'
			)){
					s2[i]='#';
				}
		}
		if(i<s3.length()){
			if(
				s3[i]>='a'&&s3[i]<='z'
			){
				s3[i]=((char)s3[i]-'a'+'A');
			}
		}
	}
	cout<<s1<<s2<<s3;
}