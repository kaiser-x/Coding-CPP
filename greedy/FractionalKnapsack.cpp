// Given weights and values of N items, we need to put these items in a 
// knapsack of capacity W to get the maximum total value in the knapsack.
// Note: Unlike 0/1 knapsack, you are allowed to break the item. 

// Example 1:

// Input:
// N = 3, W = 50
// values[] = {60,100,120}
// weight[] = {10,20,30}
// Output:
// 240.00
// Explanation:Total maximum value of item
// we can have is 240.00 from the given
// capacity of sack. 


#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


    static bool comparator(Item i1,Item i2){
        double value_per_unit_1=(double)i1.value/(double)i1.weight;
        double value_per_unit_2=(double)i2.value/(double)i2.weight;
        if(value_per_unit_1>value_per_unit_2)
            return true;
        else
            return false;
    }
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        //The basic idea of the greedy approach is to calculate the ratio 
        // value/weight for each item and sort the item on basis of this ratio.
        // Then take the item with the highest ratio and add them until we can’t 
        // add the next item as a whole and at the end add the next item as much as we can. 
        // This will always be the optimal solution to this problem.
        
        sort(arr,arr+n,comparator);
        
        double final_value=0;
        
        for(int i=0;i<n;i++){
            if(arr[i].weight<=W){
                final_value+=arr[i].value;
                W-=arr[i].weight;
            }
            else{
                //since its gonna be the last value added we break out of the loop
                final_value+=(double)arr[i].value/(double)arr[i].weight *W;
                break;
            }
        }
        return final_value;
    }        

int main()
{
	int t;
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		cout<<fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  