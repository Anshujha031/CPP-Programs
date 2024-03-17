// #include<iostream>
// using namespace std;
// int addition(int x,int y)
// {
//     int add=x+y;
//     return add;
// }
// int main()
// {
//     cout<<addition(5,8);
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int square(int x)
// {
//     int t=x*x;
//     return t;
// }
// int main()
// {
//     cout<<square(5);
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int square(int x)
// {
//     int t=x*x;
//     return t;
// }
// int main()
// {
//     for(int i=1;i<=5;i++){
//         cout<<square(i)<<" ";
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
//  double cir( int x)
// {
//     double t=2*3.14*x;
//     return t;
// }
// int main()
// {
//     int x;
//     cin>>x;
//     cout<<cir(x);
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int age(int x)
// {

//     if(x<=19){
//         cout<<"yes"<<endl;
//     }
//     else{
//         cout<<"no"<<endl;
//     }
//     return x;
// }
// int main()
// {
//     cout<<age(50);
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int oddnos(int x,int y)
// {
//     for(int i=x;i<y;i++){
//         if(i%2!=0)
//         cout<<i<<" ";

//     }
// }
// int main()
// {
//     cout<<oddnos(10,20);
//     return 0;
// }
#include <iostream>
using namespace std;
void prime(int x)
{
    int count = 0;
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            count++;
        }
    }
   int z = count==2?"YES":"NO";
   return z;
}
int main()
{
    cout << prime(1);
    return 0;
}