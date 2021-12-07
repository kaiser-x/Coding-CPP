
// // // // #include<iostream>
// // // // using namespace std;
// // // // long fib(long n){
// // // // 	if(n==0)
// // // // 		return 0;
// // // // 	if(n==1||n==2)
// // // // 		return 1;

// // // // 	return fib(n-1)+fib(n-3);
// // // // }
// // // // int main()
// // // // {

// // // // 	// int numRay[] = { 0, 4, 3, 2, 7, 8, 2, 3, 1 };
// // // // 	// int arr_size = sizeof(numRay) / sizeof(numRay[0]);

// // // // 	// for (int i = 0; i < arr_size; i++) {
// // // // 	// 	numRay[numRay[i] % arr_size]
// // // // 	// 		= numRay[numRay[i] % arr_size] + arr_size;
// // // // 	// }
// // // // 	// cout << "The repeating elements are : " << endl;
// // // // 	// for (int i = 0; i < arr_size; i++) {
// // // // 	// 	if (numRay[i] >= arr_size * 2) {
// // // // 	// 		cout << i << " " << endl;
// // // // 	// 	}
// // // // 	// }
// // // // 	cout<<fib(70);
// // // // 	return 0;
// // // // }

// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // int main(){
// // // 	string s1,s2,s3;
// // // 	cin>>s1>>s2>>s3;
// // // 	int mx=max({s1.length(),s2.length(),s3.length()});
// // // 	for(int i=0;i<mx;i++){
// // // 		if(i<s1.length()){
// // // 			if(
// // // 				s1[i]=='a'||
// // // 				s1[i]=='e'||
// // // 				s1[i]=='i'||
// // // 				s1[i]=='o'||
// // // 				s1[i]=='u'
// // // 				){
// // // 					s1[i]='$';
// // // 				}
// // // 		}
// // // 		if(i<s2.length()){
// // // 			if(
// // // 				!(s2[i]=='a'||
// // // 				s2[i]=='e'||
// // // 				s2[i]=='i'||
// // // 				s2[i]=='o'||
// // // 				s2[i]=='u'
// // // 			)){
// // // 					s2[i]='#';
// // // 				}
// // // 		}
// // // 		if(i<s3.length()){
// // // 			if(
// // // 				s3[i]>='a'&&s3[i]<='z'
// // // 			){
// // // 				s3[i]=((char)s3[i]-'a'+'A');
// // // 			}
// // // 		}
// // // 	}
// // // 	cout<<s1<<s2<<s3;
// // // }

// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     string s;
// //     cin>>s;
// //     int start=0,j,end;
// //     for(start=end=0;end<s.length();end++){
        
// //         if(s[end]==' '){
// //             j=end;
// //             while(!(s[j]>='a'&&s[j]<='z'||s[j]>='A'&&s[j]<='Z'))
// //                 j--;
// //             s[j]=s[start];
// //             start=end+1;
// //         }
// //     }
// //     cout<<endl<<s;
// // }

// // // int main(){
// // //     int n,m;
// // //     scanf("%d%d",&n,&m);
// // //     int arr[m][n];
// // //     for(int i=0;i<n;i++){
// // //         for(int j=0;j<m;j++)
// // //             scanf("%d",&arr[i][j]);
// // //     }
// // //     int target;
// // //     scanf("%d",&target);
// // //     int f=0,posi,posj;
// // //     for(int i=0;i<n;i++){
// // //         for(int j=0;j<m;j++){
// // //             if(arr[i][j]==target){
// // //                 f=1;
// // //                 posi=i;posj=j;
// // //                 break;
// // //             }
// // //         }
// // //     }
// // //     if(f!=0){
// // //         printf("(%d,%d)",posi,posj);
// // //     }

// // //     else
// // //         printf("-1");
// // // }

// // #include<bits/stdc++.h>
// // using namespace std;

// // int findpath(int n,int m){
// //     if(n==m)
// //         return 1;
// //     if(n<=2)    
// //         return n;
// //     if(n>m)
// //         return 0;
// //     int left=findpath(n+1,m);
// //     int right=findpath((n+m/2)%m,m);
// //     return left+right;
// // }

// // int main(){
// //     int n,m;
// //     cin>>n;
// //     cin>>m;
// //     cout<<findpath(n,m);
// // }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     int l=0,h=s.length()-1,f=1;
//     while(l<=h){
//         // cout<<s[l]<<" "<<s[h];
//         // swap(s[l++],s[h--]);
//         // cout<<endl;
//         if(s[l++]!=s[h--])
//             {
//                 f=0;break;
//             }
//     }
//     if(f!=1)
//         cout<<"no palindrome";
//         else
//         cout<<"palindrome";
//     // cout<<s;
//     // int n,rem;
//     // cin>>n;
//     // int op=0;
//     // while(n!=0){
//     //     rem=n%10;
//     //     op=op*10+rem;
//     //     n=n/10;
//     // }
//     // cout<<op;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//    int l=0,h=s.size()-1,f=1;
//    while(l<=h){
//        if(s[l]!=s[h]){
//            f=0;
//            break;
//        }
//        l++;
//        h--;
//    }
//     if(f==1)
//         cout<<"Strong";
//     else
//         cout<<"Not strong";
// }

// #include<bits/stdc++.h>
// using namespace std;
// int c=0;
// void getPerm(string str, int index) {
//   if(index>=str.length()){
//     c=c+1;
//     return;
//   }
//   for(int i=index;i<str.length();i++) {
//     swap(str[index],str[i]);
//     getPerm(str,index+1);
//     swap(str[index],str[i]);
//   }
// }
// int main() {
//   cout<<"Enter the String"<<endl;
//   string str;
//   cin>>str;
//   getPerm(str,0);
//   cout<<c;
// }
// #include<bits/stdc++h>
// using namespace std;
// const int MAX_CHAR = 26;
// int factorial(int n)
// {
// 	int fact = 1;

    
// 	for (int i = 2; i <= n; i++)
// 		fact = fact * i;
// 	return fact;
// }
// int countDistinctPermutations(string str)
// {
// 	int length = str.length();
// 	int freq[MAX_CHAR];
// 	memset(freq, 0, sizeof(freq));
// 	for (int i = 0; i < length; i++)
// 		if (str[i] >= 'a')
// 			freq[str[i] - 'a']++;
// 	int fact = 1;
// 	for (int i = 0; i < MAX_CHAR; i++)
// 		fact = fact * factorial(freq[i]);
// 	return factorial(length) / fact;
// }
// int main()
// {
// 	string str;
//     cin>>str;
// 	printf("%d", countDistinctPermutations(str));
// 	return 0;
// }


// C++ program for the above approach

// #include <bits/stdc++.h>
// using namespace std;
// bool isPalindrome(string x)
// {
// 	string y = x;
// 	reverse(y.begin(), y.end());
// 	if (x == y) {
// 		return true;
// 	}
// 	return false;
// }
// vector<string> threePalindromicSubstr(string S)
// {
//     int N=S.size();
// 	vector<int> startPal, lastPal;
//     vector<string> res;
// 	string start;
// 	for (int i = 0;
// 		i < S.length() - 2; i++) {
// 		start.push_back(S[i]);
// 		if (isPalindrome(start)) {
// 			startPal.push_back(i);
// 		}
// 	}

// 	string last;
// 	for (int j = S.length() - 1;
// 		j >= 2; j--) {
// 		last.push_back(S[j]);
// 		if (isPalindrome(last)) {
// 			lastPal.push_back(j);
// 		}
// 	}
// 	reverse(lastPal.begin(),
// 			lastPal.end());

// 	vector<pair<int, int> > middlePal;
// 	for (int i = 0;
// 		i < startPal.size(); i++) {
// 		for (int j = 0;
// 			j < lastPal.size(); j++) {
// 			if (startPal[i] < lastPal[j]) {
// 				middlePal.push_back(
// 					{ startPal[i],
// 					lastPal[j] });
// 			}
// 		}
// 	}
// 	string res1, res2, res3;
// 	int flag = 0;
// 	for (int i = 0;
// 		i < middlePal.size(); i++) {

// 		int x = middlePal[i].first;
// 		int y = middlePal[i].second;

// 		string middle;

// 		for (int k = x + 1; k < y; k++) {
// 			middle.push_back(S[k]);
// 		}
// 		if (isPalindrome(middle)) {
// 			flag = 1;
// 			res1 = S.substr(0, x + 1);
// 			res2 = middle;
// 			res3 = S.substr(y, N - y);
// 			break;
// 		}
// 	}
// 	if (flag == 1) {
//         res.push_back(res1);
//         res.push_back(res2);
//         res.push_back(res3);
// 		cout << res1 << " "
// 			<< res2 << " "
// 			<< res3;
// 	}
// 	else
//         {
//              res.push_back("Impossible");
// 		cout << "-1";
//         }
//         return res;
// }
// int main()
// {
// 	string str;
//     cin>>str;
// 	int N = str.length();
// 	vector<string> c=threePalindromicSubstr(str);
//     for(int i=0;i<3;i++)
//     cout<<c[i]<<" ";
// 	return 0;
// }


// int main(){
//     string s;
//     cin>>s;
//     int count[26]={0};
//     for(int i=0;i<s.size();i++){
//         count[s[i]-'a']++;
//     }
//     int max=INT_MIN;
//     char p;
//     for(int i=0;i<26;i++){
//         if(count[i]!=0&&count[i]>max){
//             max=count[i];
//             p='a'+i;;

//         }
//     }
//     cout<<p;
// }

// int

// C++ program to check if a destination is reachable
// from source with two movements allowed

// bool checkAP(int arr[],int n){ 
// 	if(n==1)return true;
// 	int d=arr[1]-arr[0];
// 	for(int i=2;i<n;i++){
// 		if(arr[i]-arr[i-1]!=d)
// 			return false;
// 	}
// 	return true;
// }
// bool checkGP(int arr[],int n){
// 	if(n==1)return true;
// 	double d=arr[1]/arr[0];
// 	for(int i=2;i<n;i++){
// 		if(arr[i]-arr[i-1]!=d)
// 			return false;
// 	}
// 	return true;
// }
// bool checkFib(int arr[],int n){
// 	if(n==1)return true;
// 	for(int i=2;i<n;i++){
// 		if(arr[i]!=arr[i-1]+arr[i-2])
// 			return false;
// 	}
// 	return true;
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++)
// 		cin>>arr[i];
// 	bool ap=checkAP(arr,n);
// 	bool gp=checkGP(arr,n);
// 	bool fib=checkFib(arr,n);
// 	if(ap){
// 		cout<<(arr[n-1]-arr[n-2])+arr[n-1];
// 	}else if(gp){
// 		cout<<arr[0]*pow(arr[1]/arr[0],n);
// 	}
// 	else if(fib){
// 		cout<<arr[n-1]+arr[n-2];
// 	}else{
// 		cout<<"-999";
// 	}
// }
// int greatestSeriesElement(int input1,int input2[]){
// bool ap=checkAP(input2,input1);
// 	bool gp=checkGP(input2,input1);
// 	bool fib=checkFib(input2,input1);
// 	if(ap){
// 		return (input2[input1-1]-input2[input1-2])+input2[input1-1]);
// 	}else if(gp){
// 		return (input2[0]*pow(input2[1]/input2[0],input1));
// 	}
// 	else if(fib){
// 		return (input2[input1-1]+input2[input1-2]);
// 	}else{
// 		return -999;
// 	}
// }

// string lastletters(string word){
// 	int n=word.size();
// 	string res;
// 	res+=word[n-1];
// 	res+=' ';
// 	res+=word[n-2];
// 	return  res;
// }
// int main(){
// 	string s;
// 	cin>>s;
// 	cout<<lastletters(s);
// }

// int main(){
// 	char arr[8];
// 	int count=0;
// 	for(int i=0;i<7;i++){
// 		cin>>arr[i];
// 	}
// 	for(int i=0;i<7;i++){
// 		if(i==0||i%2!=0||i==6){
// 			if(arr[i]=='W')
// 				count++;
// 		}else{
// 		count++;
// 		}
// 	}
// 	cout<<count+1;
// }

// int identifyTriangle(struct Triangle lst[],int m){
// 	int iso=0,sca=0,no=0;
// 	for (int i=0;i<m;i++){
// 	if(lst[i].s1==lst[i].s2||lst[i].s2==lst[i].s3||lst[i].s3==lst[i].s1)
// 			iso++;
// 	else if(lst[i].s1+lst[i].s2=lst[i].s3||lst[i].s2+lst[i].s3==lst[i].s1||lst[i].s3+lst[i].s1==lst[i].s2)
// 			sca++;
// 	else{
// 			no++;
// 		}
// 	}
// 	return 3*sca-(iso+no);
// }

// int main(){
// 	int n;
// 	cin>>n;
// 	   for (int i = 2;; i++) {
//         if (i > n){
//             cout<<"Yes";
// 			break;
// 		}
//         if (n % i == 0){
//             cout<<"No";
// 			break;
// 			}
//         n -= n / i;
//     }
// }

// int main(){
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++)
// 		cin>>arr[i];
// 	long sum = 0;
//     for (int i = 0; i < n; i++)
//         sum += arr[i];
//  	cout<<((sum / n) + 1);
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	int arr2[n];
// 	for(int i=0;i<n;i++)
// 		cin>>arr[i];
// 	for(int i=0;i<n;i++){
// 		if(i==0)
// 			arr2[i]=arr[i]-arr[i+1];
// 		else if(i==n-1)
// 			arr2[i]=arr[i]+arr[i-1];
// 		else
// 			arr2[i]=arr[i]-arr[i+1]+arr[i-1];
// 	}

// 	for(int i=0;i<n;i++)
// 		cout<<arr2[i]<<" ";
// }


// int maxProfit(int price[], int n, int k)
// {
// 	int profit[k + 1][n + 1];
// 	for (int i = 0; i <= k; i++)
// 		profit[i][0] = 0;
// 	for (int j = 0; j <= n; j++)
// 		profit[0][j] = 0;
// 	for (int i = 1; i <= k; i++) {
// 		for (int j = 1; j < n; j++) {
// 			int max_so_far = INT_MIN;
// 			for (int m = 0; m < j; m++)
// 				max_so_far=max(max_so_far,price[j]-price[m]+profit[i - 1][m]);

// 			profit[i][j]=max(profit[i][j - 1], max_so_far);
// 		}
// 	}
// 	return profit[k][n - 1];
// }

// int main()
// {
// 	int k,n;
// 	cin>>n;
// 	int price[n];
// 	for(int i=0;i<n;i++)
// 		cin>>price[i];
// 	cin>>k;
// 	cout<< maxProfit(price, n, k);
// 	return 0;
// }

// string compressedString(string message){
// 	string res;
// 	for(int i=0;i<message.size();i++){
// 		if(message[i]==message[i+1]&&i!=message.size()-1){
// 			int tot=1,j=i;
// 			while(message[j]==message[j+1]){
// 				tot++;
// 				j++;}
// 			res+=message[i]+to_string(tot);
// 			i=i+tot-1;
// 		}
// 		else{
// 			res+=message[i];
// 		}
// 	}
// 	return res;
// }

// int main(){
// 	string s;
// 	cin>>s;
// 	cout<<compressedString(s);
// }

// char maximumOccuringCharacter(string text){
// 	char ch;
// 	int max=INT_MIN;
// 	int cnt[26]={0};
// 	for(int i=0;i<text.size();i++)
// 		cnt[text[i]-'a']++;
// 	for(int i=0;i<text.size();i++){
// 		if(cnt[text[i]-'a']>max){
// 			max=cnt[text[i]-'a'];
// 			ch=text[i];
// 		}
// 	}
// 	return ch;
// }

// int main(){
// 	string s;
// 	cin>>s;
// 	cout<<maximumOccuringCharacter(s);
// }
// #include <bits/stdc++.h>
// using namespace std;
// int countDigit(long long n) {
//   return floor(log10(n) + 1);
// }
// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		long long n;
// 		cin>>n;
// 		long k=countDigit(n);
// 		int arr[k];
// 		int i=0;
// 		while (n != 0)
// 		{
// 			arr[i++] = n%10;


// 			n=n/10;
			
// 		}
// 		sort(arr,arr+k);
// 		long a=0,b=0;
// 		for(int i=0;i<k;i++){
// 			if(i&1)
// 				a=a*10+arr[i];
// 			else
// 				b=b*10+arr[i];
// 		}
// 		cout<<a+b<<endl;
	
// 	}
// }

#include <bits/stdc++.h>
using namespace std;

// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n,k,count=0;
// 		cin>>n;
// 		int arr[n];
// 		for(int i=0;i<n;i++)
// 			cin>>arr[i];
// 		cin>>k;
// 		for(int i=0;i<n-k;i++){
// 			if(arr[i]>arr[i+k]){
// 				count++;
// 				arr[i+k]=arr[i];
// 				}
// 		}
// 		cout<<count<<endl;
// 	}
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	int f=1;
// 	int vac[n];
// 	for(int i=0;i<n;i++)
// 		cin>>vac[i];
// 	int pat[n];
// 	for(int i=0;i<n;i++){
// 		cin>>pat[i];
// 		if(pat[i]<=vac[i])
// 			f=0;
// 	}
// 	if(f==1)
// 		cout<<"Yes";
// 	else
// 		cout<<"No";
// }

// int main(){
// 	int n;
// 	char arr1[n],arr2[n];
// 	for(int i=0;i<n;i++)
// 		cin>>arr1[i];
// 	for(int i=0;i<n;i++)
// 		cin>>arr2[i];
// 	for(int i=0;i<n;i++){
// 		int f=-1;
// 		for(int j=0;j<n;j++){
// 			if(arr1[i]==arr2[j])
// 				f=j;
// 		}
// 		if(f==-1)
// 			cout<<arr1[i]<<" - "<<"NA";
// 		else
// 			cout<<arr1[i]<<" - "<<f;
// 	}

// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	int n,k;
// 	cin>>n>>k;
// 	int arr[n];
// 	int count=0;
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 		if(arr[i]<=k)
// 			count++;
// 	}
// 	cout<<count<<endl;
// 	}
// }

// int main(){
//     int n,cnt=0;
//     cin>>n;
//     string s=to_string(num);
//     string res="";
//     for(int i=0;i<s.size();i++){
//         if(s[i]!='0')
//             res+='a'+(int)(s[i])-'0'-1;
//         else{
//             cnt++;
//         }
//     }
//     for(int i=0;i<cnt;i++)
//         res+="0";

//     cout<<res;
// }
#include <bits/stdc++.h>
using namespace std;
//  int BitsSum(int n)
//     {
//         int count = 0;
//         while (n > 0) {
//             count += n & 1;
//             n >>= 1;
//         }
//         return count;
//     }
// int bobAndNumber(int input1,int input2[]){
//     int sum[input1],count=0;
//     for(int i=0;i<input1;i++)
//         {
//             sum[i]=BitsSum(input2[i]);
//         }
//         for(int i=0;i<input1;i++){
//             for(int j=i+1;j<input1;j++)
//                 if(sum[i]==sum[j])
//                 count++;
//         }
//     return count;
// }
// int main(){
//     int n,count=0;
//     cin>>n;
//     int arr[n],sum[n];
//     for(int i=0;i<n;i++)
//         {
//             cin>>arr[i];
//             sum[i]=BitsSum(arr[i]);
//         }
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++)
//                 if(sum[i]==sum[j])
//                 count++;
//         }
//     cout<<count;
// }

// int checkConsecutive(int input1,int input2[]){
//     sort(input2,input2+1);
//     for(int i=0;i<n-1;i++){
//         if(input2[i]!=input2[i+1]) 
//             return 0;
//     }
//     return 1;
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//         cin>>arr[i];
//     cout<<checkConsecutive(n,arr);
// }

// char* maxElement(char *input1){
//     int count[26]={0},max=INT_MIN;
//     char ch[2];
//     for(int i=0;input1[i]!='\0';i++)
//         count[input1[i]-'a']++;
//     for(int i=0;i<26;i++){
//         if(count[i]!=0&&count[i]>max){
//             max=count[i];     
//             ch[0]='a'+i;
//         }
//     }
//     return ch;
// }

// int main(){
//     char arr[100];
//     cin>>arr;
//     cout<<maxElement(arr);
// }

// int* modifyArray(int arr[],int n){
//     if(arr==NULL) return NULL;
//     for(int k=0;k<n;k++){
//         if(arr[k]<0)
//             arr[k]=arr[k]*(n-k);
//         else
//             arr[k]=arr[k]*(n+k);
//     }
//     return arr;
// }
// void FrequentCharReplace(char *str,char x){
//     // if(str==NULL) return NULL;
//     int n=strlen(str);
//     char res[n+1];
//     int max=INT_MIN;
//     int count[26]={0};
//     char ch;
//     for(int i=0;str[i]!='\0';i++){
//         count[str[i]-'a']++;
//         if(count[str[i]-'a']>max){
//             max=count[str[i]-'a'];
//             ch=str[i];
//         }
//     }
//     for(int i=0;str[i]!='\0';i++){
//         if(str[i]==ch)
//             res[i]=ch;
//         else
//             res[i]=str[i];
//     }
//     // return res;
// //     for(char f:res)
// //     cout<<f;

// // }
// // int main(){
// //     int arr[]={-5,9,7,3,-4,7};
// //     // int res*[]=modifyArray(arr,7);
// //     char res* ="xyzxxxxhhhxxx";
// //     FrequentCharReplace("xyzxxxxhhhxxx",'k');
// // }

// #include <stdio.h>
// struct Result{
//     int* output1;  
// };
// struct Result encryptData(int input1[],int input2,int input3[],int input4[],int input5[],int input6){
//     int k=0;
//     struct Result result;
//     result.output1 = (int*) malloc(100 * sizeof(int));
//     for(int i=0;i<input6;i++){
//         if(input3[i]==1){
//             for(int j=0;j<input4[i];j++){
//                 input1[j]=input1[j]^input5[i];
//             }
//         }
//         else if(input3[i]==2){
//             for(int j=input2-1;j>=input2-input4[i];j--){
//                 input1[j]=input1[j]^input5[i];
//             }
//         }
//     }
//     for(int i=0;i<input2;i++)
//         result.output1[i]=input1[i];
//     result.output1 = (int *)realloc(result.output1, sizeof(int)*input2);
//     return result;
    
// }
// int main()
// {
//      struct Result result;
     

// }


#include <stdio.h>
#include<string.h>
char* lexographicallySmallest(int input1,char* input2){
    char res[input1+1];
    int count[26]={0};
    for(int i=0;input2[i]!='\0';i++){
        count[input2[i]-'a']++;
    }
    int k=0;
    for(int i=0;i<26;i++){
        if(count[i]!=0){
            for(int j=0;j<count[i];j++)
                res[k++]='a'+i;
        }
    }
    res[k]='\0';
    return res;
}
int main(){
char arr1[4]={'d','a','d','\0'};
char*res;
    res=lexographicallySmallest(3,arr1);
}

// struct Result encryptData(int input1[],int input2,int input3[],int input4[],int input5[],int input6){
//     struct Result result;
//     for(int i=0;i<input6;i++){
//         if(input3[i]==1){
//             for(int j=0;j<input4[i];j++){
//                 input1[j]=input1[j]^input5[i];
//             }
//         }
//         else if(input3[i]==2){
//             for(int j=input2-1;j>=input2-input4[i];j--){
//                 input1[j]=input1[j]^input5[i];
//             }
//         }
//     }
//     for(int i=0;i<input2;i++)
//         result.output1[i]=input1[i];
//     return result;
    
// }