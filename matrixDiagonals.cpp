#include<iostream>
#include<vector>

using namespace std;

void printIndexOfAntiDiagonals(int row,int column,vector<vector<int>> matrix)
{
    //diagonal logic row=row+1 & col=col+1 until bounds
    for(int i=row,j=column;0<=i&&i<matrix[0].size()&&0<=j&&j<matrix.size();i=i+1,j=j+1)
        cout<<i<<"x"<<j<<" ";
    cout<<endl;    
}


int main()
{
    vector<vector<int>>matrix(10,vector<int>(10,-1));
   /*****
   first column diff rows start from below moving upwards//only for display purpose
   x........
   x........
   x........
   x........
   
   print all diagonals for them
   *****/
    //for(int i=0;i<matrix.size();i++)
    for(int i=matrix.size()-1;i>-1;i--)
        printIndexOfAntiDiagonals(i,0,matrix);
   /*****
   first row diff column starting from second column
   .x x x
   ......
   ......
   ......
   print all diagonals for them
   *****/    
    for(int j=1;j<matrix[0].size();j++)
        printIndexOfAntiDiagonals(0,j,matrix);   
        
}
