#include<iostream>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    // int sum=0;

    // for(int i=1;i<=n;i++)
    // {
    //     sum=sum+i;
    // }
    
    // cout<<sum<<endl;

    int n;
    cin>>n;
    int count=0;
    for(int i=2;i<=n;i++)
    {
        if(n%i==0){
            count++;
        }
        
    }
    if(count==2){
        cout<<"prime"<<endl;

    }
    else{
        cout<<"non prime"<<endl;
    }
    
    return 0;
}