#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int c=abs(a-b);
	    int ct=0;
	    for(int i=1;i*i<=c;i++){
	        if(c%i==0){
	            ct++;
	            if(i!=c/i){
	                ct++;
	            }
	        }
	    }
	    cout<<ct<<endl;
	}
	return 0;
}
