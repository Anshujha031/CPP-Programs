#include<iostream>
using namespace std;
int main()
{
     int n;
     cin >> n;
     int P;
     while(n !=0)
     {

          P = n % 2;
          n =n/2;
          cout << P << endl;
     }

     return 0;
}