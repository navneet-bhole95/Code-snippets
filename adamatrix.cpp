#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    int arr[n][n];
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            cin>>arr[i][j];
	        }
	    }
	    int count=0;
	    for(int i=n-1;i>=0;i--){
	        if(count%2==0){
	        if(arr[0][i]!=i+1){
	            count++;
	        }
	        }
	        if(count%2==1){
	            if(arr[i][0]!=i+1){
	                count++;
	            }
	        }
	    }
	    cout<<count<<"\n";
	    
	}
	return 0;
}
