#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,q;
    int a ,b;
    
    cin>>n;
   
    cin>>q;

    vector<vector<int>> vect1;
    vector<vector<int>> vect2;
    int i,j;
    int temp;
    int g;
    vector<int> size;
    
    for(i=0;i<n;++i)
    {  
        cin>>temp;
        size.push_back(temp);
        vector<int> temp1;
        
        
        for(int j=0;j<size[i];j++)

        
        {
            cin>>g;
            temp1.push_back(g);
           
        }
        vect1.push_back(temp1);
    }  
    for(i=0;i<q;i++)
    {   
       
        vector<int> temp2;
        for(j=0;j<2;j++)

        {
            cin>>g;
            temp2.push_back(g);
            

        }
        vect2.push_back(temp2);
        

    } 
    for(i=0;i<q;i++)
    { 
        for(j=0;j<vect1.size();j++)
        {
            for(int k=0;k<vect1[i].size();k++)
            {
              
               b=vect2[j].front();
               a=vect2[j].back();
               cout<<vect1[b][a]<<endl;
               break;



            }

        }break;

    
    }
    return 0; 
}