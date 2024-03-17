// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++)
//     {
//         cin>>v[i];
//     }
//     cout<<"Enter x: ";
//     int x;
//     cin>>x;
//     int o=-1;
//     // for(int i=o;i<n;i--)
//     // {
//     //     if(v[i]==x){
//     //         o=i;
//     //     }
//     // }

//     for(int i=n-1;i>=0;i--)
//     {
//         if(v[i]==x){
//             o=i
//             break;
//         }
//     }
//     cout<<o;

//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++)
//     {
//         cin>>v[i];
//     }
//     int sum=0,odd=0;
//     for(int i=0;i<n;i++)
//     {
//         if(i%2==0){
//              sum=sum+ v[i];
//         }
//         else{
//              sum=sum-v[i];
//         }
//     }
//    cout<<sum;

//     return 0;

   
// }  


   //TARGET SUM PROBLEM

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"Target sum: ";
//     int x,count=0;
//     cin>>x;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1; j<n;j++)
//         {
//             if(arr[i]+arr[j]==x){
//                 count++;
//             }
//         }
//     }
//     cout<<count;

//     return 0;
    
// }


#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
     int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Target sum: ";
    int count=0,x;
    cin>>x;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k]==x)
                {
                    count++;
                }
            }
        }
    }

    cout<<count;

    return 0;
}