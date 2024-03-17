#include<iostream>
using namespace std;
int main(){

    int arr[3];
    for(int &elm:arr)
    {
      cin>>elm;

    }
    for(int elm:arr)
    {
      cout<<elm<<" ";
    }
    

  return 0;

}