#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
 
int main(){   
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    // int t=1;
    // cin>>t;
    // while(t--){
      int x1,y1,x2,y2;
      cin>>x1>>y1>>x2>>y2;
      int x3,y3,x4,y4;
      
      
      if(x1 != x2 && y1 != y2 && abs(x1 - x2) != abs(y1 - y2)){
          cout<<"-1"<<endl;
        
      }
 
      // if(x2-y2==x1-y1){
      //   x3=x1;
      //   y3=y2;
      //   x4=x2;
      //   y4=y1;
      //   cout<<x3<<' '<<y3<<' '<<x4<<' '<<y4<<endl;
      // }
 
      else if(x2==x1){
        int d=abs(y2-y1);
        x3=x1+d;
        x4=x1+d;
        y3=y1;
        y4=y2;
        cout<<x3<<' '<<y3<<' '<<x4<<' '<<y4<<endl;
      }
 
      else if(y2==y1){
        int d=(x2-x1);
        y3=y1+d;
        y4=y1+d;
        x3=x1;
        x4=x2;
        cout<<x3<<' '<<y3<<' '<<x4<<' '<<y4<<endl;
      }
 
      else {
         cout << x1 << " " << y2 << " " << x2 << " " << y1 << endl;
      }
    
    return 0;
}
