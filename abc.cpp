#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n,k,x,y;
	    cin>>n>>k>>x>>y;
	    int flag=0;
	    
	    for(int i=0;i<n;i++){
	        int inf=k*i+x;
	        if(inf>n){
	            inf=inf%n;
	        }
	        if(y==inf){
	            flag=1;
	            break;
	        }
	    }
	    
	    if(flag) cout<<"YES\n";
	    else cout<<"NO\n";
	}
