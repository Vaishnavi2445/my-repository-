#include<iostream>
#include<vector>
using namespace std;
void sortColors(vector<int>v)
{
    
    for(int i=0;i<v.size();i++)
    {    for(int j=i+1;j<v.size();j++)
        {    if(v[i]>v[j])
            {
                swap(v[i],v[j]);
            }
        }

    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
    int main()
    {    
      vector<int>v={2,0,2,1,1,0 };
        sortColors(v);
    }
