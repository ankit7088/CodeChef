#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long int x,y;
	    cin>>x>>y;
	    if(x>y) swap(x,y);
	    
	    if(x==y)
	    cout<<x<<endl;
	    else if(x==0)
	    cout<<-1<<endl;
	    else{
	        long long int ans=0;
	        while(x<y){
	            x*=2;
	            ans++;
	            
	        }
	        cout<<ans+y<<endl;
	    }
	}
	return 0;
}
