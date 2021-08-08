
#include<iostream>
using namespace std;
long fib(long n){
	if(n==0)
		return 0;
	if(n==1||n==2)
		return 1;

	return fib(n-1)+fib(n-3);
}
int main()
{

	// int numRay[] = { 0, 4, 3, 2, 7, 8, 2, 3, 1 };
	// int arr_size = sizeof(numRay) / sizeof(numRay[0]);

	// for (int i = 0; i < arr_size; i++) {
	// 	numRay[numRay[i] % arr_size]
	// 		= numRay[numRay[i] % arr_size] + arr_size;
	// }
	// cout << "The repeating elements are : " << endl;
	// for (int i = 0; i < arr_size; i++) {
	// 	if (numRay[i] >= arr_size * 2) {
	// 		cout << i << " " << endl;
	// 	}
	// }
	cout<<fib(70);
	return 0;
}

