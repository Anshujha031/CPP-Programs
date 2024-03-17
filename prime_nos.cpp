#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >>a;
    int n = 0;
    for (int i = 1; i <= a; i++)
    {
        if (a%i==0){
            n++;
            }
            
    }
    
            

    

        if (n == 2)
        {
            cout << "prime" << endl;
        }
        else
        {
            cout << "non prime" << endl;
        }
    return 0;
}