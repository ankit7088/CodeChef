#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	unordered_set<char> s;
	while(t--){
	    int n;
	    cin>>n;
	    string a,b;
	    cin>>a>>b;
	    for(int i=0;i<n;i++){
	        if(a[i]!=b[i])
	        s.insert(b[i]);
	    }
	    
	    cout<<s.size()<<endl;
	    s.clear();
	}
	return 0;
}
