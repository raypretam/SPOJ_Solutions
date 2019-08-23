#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,ans=0;
  cin>>n;
  for(int length=1;length<=sqrt(n);length++){
    for(int height=length;height*length<=n;height++){
      ans++;
    }
  }
  cout<<ans<<"\n";
  return 0;
}
