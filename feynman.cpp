#include<bits/stdc++.h>
using namespace std;
int main(){
  while(true){
    int x,ans;
    cin>>x;
    if(x==0)
      break;
    else{
      ans=(x*(x+1)*(2*x+1))/6;
    }
    cout<<ans<<"\n";
  }
  return 0;
}
