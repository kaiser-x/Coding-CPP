//print he count of sum of subsets equal to sum
//rather than having a global count variable or passing it through as parameter,using this method will help you in
//dp

#include<iostream>
#include<vector>
using namespace std;

int countsubsets(int index,int arr[],int n,int tot,int sum){

    if(index>=n){
        if(tot==sum)
            return 1;
        else
            return 0;
    }
   int l= countsubsets(index+1,arr,n,tot,sum);
    tot+=arr[index];
   int r= countsubsets(index+1,arr,n,tot,sum);
    return l+r;
}

//same thing but here we are checking for subsets so it can contain duplicates if
//sim is 4 then {1,1,1,1} is also an answers.
int countsubsets(int index,int arr[],int n,int sum){

    if(index>=n){
        if(sum==0)
            return 1;
        else
            return 0;
    }

    int l,r;
      if(arr[index]<sum){
        sum -=arr[index];
    r= countsubsets(index,arr,n,sum);
   }
 
    l= countsubsets(index+1,arr,n,sum);
    return l+r;
}

int main(){
    int n;
    printf("enter size:\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements:\n");
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    printf("enter sum:\n");
    
    int sum;

    cin>>sum;
    
    printf("Count of sum of subsets:%d",countsubsets(0,arr,n,0,sum));

    
}