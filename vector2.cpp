#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int e;
        cin>>e;
        v.push_back(e);
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
        
    }
    cout<<endl;
    v.pop_back();
    v.push_back(100);
    v.insert(v.begin()+3,100);
    v.erase(v.begin()+5);
    v.erase(v.end()-2);
    
    for(int e:v)
    {
        cout<<e<<" ";
    }


   
    return 0;
}