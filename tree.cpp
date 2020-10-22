#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    
	    for(int i=0;i<n;i++){
	        int a;
	        cin>>a;
	        arr[i]=a;
	    }
	    
	    sort(arr,arr+n);
	    int count=0;
	    for(int i=0;i<n-1;i++){
	        if(arr[i]!=arr[i+1]){
	            count++;
	        }
	    }
	    
