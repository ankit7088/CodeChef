#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    if(n%6==0)
	    cout<<x*(n/6)<<endl;
	    else
	    cout<<x*((n/6)+1)<<endl;
	}
	return 0;
}
