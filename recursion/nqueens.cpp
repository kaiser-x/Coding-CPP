#include<bits/stdc++.h>
using namespace std;
int n;

// bool isSafe(int row,int col,vector<vector<int>>&mat){
//     //queen can go in 8 directions, since we are going from left to right there will not be any queens in the
//     //right side of the spot where th contol is or col is,and as there would be only 1 queen in a
//     //column,therefore top and bootom is also not needed. So we only need to check 3 sides on left;

//     //row--col--
//     for(int i=row,j=col;i>=0&&j>=0;i--,j--){
//         if(mat[i][j]==1) return false;
//     }
//     //row col--
//     for(int i=row,j=col;i>=0&&j>=0;j--){
//         if(mat[i][j]==1) return false;
//     }
//     //row++col--
//     for(int i=row,j=col;i<n&&j>=0;i++,j--){
//         if(mat[i][j]==1) return false;
//     }
//     //if it never failed then the position is definently safe
//     return true;
    
// }
// //to print the first possible way
// bool nqueens(int col,vector<vector<int>>&mat){
//     if(col==n){
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++)
//                 cout<<mat[i][j]<<" ";
//                 cout<<endl;
//         }
//         return true;
//     }
//     for(int row=0;row<n;row++){
//         if(isSafe(row,col,mat)){
//             mat[row][col]=1;
//             if(nqueens(col+1,mat)==true){
//                 return true;
//             }
//             mat[row][col]=0;
//         }
//     }
//     return false;
// }


// //to print all the posiible ways
// // void nqueens(int col,vector<vector<int>>&mat){
// //     if(col==n){
// //         for(int i=0;i<n;i++){
// //             for(int j=0;j<n;j++)
// //                 cout<<mat[i][j]<<" ";
// //                 cout<<endl;
// //         }
// //         return;
// //     }
// //     for(int row=0;row<n;row++){
// //         if(isSafe(row,col,mat)){
// //             mat[row][col]=1;
// //             nqueens(col+1,mat);
// //             // if(nqueens(col+1,mat)==true){
// //             //     return true;
// //             // }
// //             mat[row][col]=0;
// //         }
// //     }
    
// // }

// int main(){
//     cin>>n;
//     vector<vector<int>>mat(n,vector<int>(n,0));
//     nqueens(0,mat);
// }
//now thw abpve solution takes O(n^n) for nqueens part and O(n) for is safe part



//to optimize it we can use hashing method.which will make TC fro isSafe part to be O(1)
/* in the three direction the left direction can just simply be hashed using an array of n size,
if there is an queen at any specific row then that index will have 1 in lefthash array.
the problem is for the leftupdiagonal and leftdowndiagonal, for left down diagonal if we sum the row and col value we would 
get the pattern where each left down diagonal is same number,and the lddhash will be of (2*n-1),
adn we would get the value of sum with row+col(its obvious).
now for leftup diagonal its a preety tricky, if we just subtract row and col(in any order) it will sometimes give
negative number, and if we take absolute value of difference between row and col,then there will be same values for
unecessary places or cell ,so we would use formula (n-1)+(row-col),now this will produce the same result as left down 
diagonal with same values foe left up diagonal,and same as above the ludhash will be of size (2*n-1);
indecies will start from 0 only.
*/
bool isSafe(int row,int col,vector<vector<int>>&mat,vector<int>&ludHash,vector<int>&leftHash,vector<int>&lddHash){
    //queen can go in 8 directions, since we are going from left to right there will not be any queens in the
    //right side of the spot where th contol is or col is,and as there would be only 1 queen in a
    //column,therefore top and bootom is also not needed. So we only need to check 3 sides on left;

    //row--col--
    if(ludHash[(n-1)+(row-col)]==1)
        return false;
    //row col--
        if(leftHash[row]==1) return false;
    
    //row++col--
        if(lddHash[row+col]==1) return false;
    
    //if it never failed then the position is definently safe
    return true;
    
}
//to print the first possible way
bool nqueens(int col,vector<vector<int>>&mat,vector<int>&ludHash,vector<int>&leftHash,vector<int>&lddHash){
    if(col==n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
                cout<<mat[i][j]<<" ";
                cout<<endl;
        }
        return true;
    }
    for(int row=0;row<n;row++){
        if(isSafe(row,col,mat,ludHash,leftHash,lddHash)){
            mat[row][col]=1;
            ludHash[(n-1)+(row-col)]=1;
            leftHash[row]=1;
            lddHash[row+col]=1;
            if(nqueens(col+1,mat,ludHash,leftHash,lddHash)==true){
                return true;
            }
            mat[row][col]=0;
            ludHash[(n-1)+(row-col)]=0;
            leftHash[row]=0;
            lddHash[row+col]=0;
        }
    }
    return false;
}
int main(){
    cin>>n;
    vector<vector<int>>mat(n,vector<int>(n,0));
    //lefthash
    vector<int> leftHash(n,0);
    //left down diagonal
    vector<int> lddHash(2*n-1,0);
    //left up diagonal
    vector<int> ludHash(2*n-1,0);
    nqueens(0,mat,ludHash,leftHash,lddHash);
}

