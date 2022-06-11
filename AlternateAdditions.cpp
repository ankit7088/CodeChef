#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int c=b-a;
	    if(c<3){
	        if(a+1==b)
	        cout<<"YES"<<endl;
	        else
	        cout<<"NO"<<endl;
	    }
	    else
	    {
	        if(c%3==0)
	        cout<<"YES"<<endl;
	        else{
	            if(((c/3)*3+1)==c)
	            cout<<"YES"<<endl;
	            else
	            cout<<"NO"<<endl;
	        }
	    }
	}
	return 0;
}
