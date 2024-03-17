// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int> v;
    

//     cout<<"size: "<<v.size()<<endl;
    // cout<<"capacity: "<<v.capacity()<<endl;

//     v.push_back(1);
//     cout<<"size: "<<v.size()<<endl;
//     cout<<"capacity: "<<v.capacity()<<endl; 

//     v.push_back(2);
//     cout<<"size: "<<v.size()<<endl;
//     cout<<"capacity: "<<v.capacity()<<endl;

//     v.resize(10);
//     cout<<"size: "<<v.size()<<endl;
//     cout<<"capacity: "<<v.capacity()<<endl;

// }
      
    //   cin and cout using vector when size does not declare.

// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int> v;
//     for(int i=0;i<5;i++)
//     {
//         int element;
//         cin>>element;
//         v.push_back(element);
//     }
//     for(int i=0;i<v.size();i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     return 0;
// }

    // when size is declare.
    
    #include<iostream>
    #include<vector>
    using namespace std;
    int main()
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        return 0;   
    }

        //    by using foreach loop.

 