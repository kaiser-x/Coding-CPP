#include<iostream>
#include<vector>
using namespace std;

// int t0t;

//print the subsets that are equal to the sum
void printSum(vector<int> ip,vector<int> op,int tot,int index,int sum){

if(index>=ip.size()){

    // for(int i=0;i<op.size();i++){
    //      tot+=op[i];
        //  }
         {
           if(tot==sum){
             for(int j=0;j<op.size();j++)
             cout<<op[j]<<" ";
           }
          //  tot=0;
         }
         cout<<endl;
         
         
         return;
}

     printSum(ip,op,tot,index+1,sum);

    op.push_back(ip[index]);

            tot+=ip[index];

    printSum(ip,op,tot,index+1,sum);

}




// print all the subsets
// void printSum(vector<int> ip,vector<int> op,int index){

// if(index>=ip.size()){

//     for(int i=0;i<op.size();i++){
//          cout<<op[i]<<" ";
//          }
         
//          cout<<endl;
         
//          return;
// }

//      printSum(ip,op,index+1);

//     op.push_back(ip[index]);

//     printSum(ip,op,index+1);

// }

int main(){
    vector<int> i;
    vector<int> o;

cout<<"Hiiiiiiii";

  i.push_back(1);

  i.push_back(2);
  i.push_back(3);
  int k;
  

  cout<<i[1];
  int sum;
  printf("enter sum:\n");
  scanf("%d",&sum);

  // printSum(i,o,0,sum);
  printSum(i,o,0,0,sum);


}