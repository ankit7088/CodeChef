#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> v(n);
	    v[n-1]=n;
	    int flag=0;
	    for(int i=n-2;i>=0;i--){
	        if(flag==0){
	            v[i]=v[i+1]-(i+1);
	            flag=1;
	        }
	        else{
	            v[i]=v[i+1]+i+1;
	            flag=0;
	        }
	    }
	    for(int i=0;i<n;i++)
	    cout<<v[i]<<" ";
	    cout<<endl;
	}
	return 0;
}
