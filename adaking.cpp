#include <iostream>
using namespace std;

int main() {
	int t,k;
	
	cin>>t;
	
	while(t--){
	    cin>>k;
        for(int i=1;i<=8;i++){
            for(int j=1;j<=8;j++){
                
                if(i==1&&j==1){
                    cout<<"O";
                }
                
                else if(k<=0){
                    cout<<"X";
                }
                
                else {
                    cout<<".";
                }
                k--;
            }
            cout<<"\n";
        }
        cout<<"\n";
	}
	
	return 0;
}
