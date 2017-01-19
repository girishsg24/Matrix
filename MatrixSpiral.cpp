#include<iostream>
#include<vector>
using namespace std;

int main()
{
   vector<vector<int>>matrix={{1,2,3},{4,5,6},{7,8,9},{10,11,12}}; 
   int row=matrix.size();
   int col=matrix[0].size();
   int rStart=0;
   int rEnd=matrix.size();
   int cStart=0;
   int cEnd=matrix[0].size();
   
    while(rStart<rEnd && cStart<cEnd)  
    {
        //row to right
        for(int i=cStart;i<cEnd;i++)
        {
            cout<<matrix[rStart][i]<<" ";
        }
        //increment row start
        rStart++;
        cout<<endl;
        
        //decresing from up to down  
        for(int i=rStart;i<rEnd;i++)
        {
               cout<<matrix[i][cEnd-1]<<" ";
        }
        cout<<endl;
        //decrese column end
        cEnd--;  
        
        //checks to prevent printing redundancy at last 
        if(rStart<rEnd)
        {
            //go down right to left 
            for(int i=cEnd-1;i>=cStart;i--)
            {
                cout<<matrix[rEnd-1][i]<<" ";
            }
            cout<<endl;
            //decrease row end size
            rEnd--;
        }
        //checks to prevent printing redundancy at last        
        if(cStart<cEnd)
        {
            //go from down to up
            for(int i=rEnd;i>=rStart;i--)
            {
                cout<<matrix[i][cStart]<<" ";
            }
            cout<<endl;
            //increase column start
            cStart++;
        }
       
    }    
    
}
    


