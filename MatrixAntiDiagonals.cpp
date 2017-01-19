#include<iostream>
#include<vector>

using namespace std;

void printIndexOfAntiDiagonals(int row,int column,vector<vector<int>> matrix)
{
    //anti diagonal logic row=row-1 & col=col+1 until bounds
    for(int i=row,j=column;0<=i&&i<matrix[0].size()&&0<=j&&j<matrix.size();i=i-1,j=j+1)
        cout<<i<<"x"<<j<<" ";
    cout<<endl;    
}


int main()
{
    vector<vector<int>>matrix(10,vector<int>(10,-1));
   /*****
   first column diff rows
   x........
   x........
   x........
   x........
   print all antidiagonals for them
   *****/
    for(int i=0;i<matrix.size();i++)
        printIndexOfAntiDiagonals(i,0,matrix);
   /*****
   last row diff column starting from second column
   ......
   ......
   ......
   .x x x 
   print all antidiagonals for them
   *****/    
    for(int j=1;j<matrix[0].size();j++)
        printIndexOfAntiDiagonals(matrix.size()-1,j,matrix);   
        
}
