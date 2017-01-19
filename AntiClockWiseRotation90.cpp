#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<vector<int>> v={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    /*first we take care of outer concentric circle then we reduce accordingly
        This is taken care by outer loop.
        The inner for loop works on rotating the first element of first row with first element of last column
        first element of last column goes to last element  of last row
        the element of last row goes to first element of last row
        first element of last row goes to the first element of first row
        then we increment the positions 
        
        V[0][0]..............V[0][N-1]
        .                           .
        .                           .
        .                           .
        V[N-1][0]..........V[N-1][N-1]
        
        V[X][Y].............V[Y][N-1-X]
        V[N-1-Y][X].........V[N-1-Y][X]
    */
    int n=v.size();
    for(int x=0;x<n;x++)
    {
       for(int y=x;y<n-1-x;y++)
       {
         //Anti clock wise
         //store the xy value in temp
         int temp=v[x][y];
         
         //put right on top
         v[x][y]=v[y][n-1-x];
         //put bottom right to top right
         v[y][n-1-x]=v[n-1-x][n-1-y];
         //put bottom left to bottom right
         v[n-1-x][n-1-y]=v[n-1-y][x];
         //put the first value into bottom left
         v[n-1-y][x]=temp;
         //keep doing the same for all the lements in outer circle
       }
       //decrement the circle
    }

    cout<<"success";
}