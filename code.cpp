#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int x,y;
	    cin>>x>>y;
        int z=(x/y)*100;
	    
	    if(z>=50){
	
	
	        cout<<"YES"<<endl;
	    }
	    else if(z<50){
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
