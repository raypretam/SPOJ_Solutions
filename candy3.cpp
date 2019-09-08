#include<iostream>
typedef long long int int64;
using namespace std;
#define tests int t; cin>>t; while(t--)
int main(){
  tests{
    int64 n,t;
    cin>>n;
    t=n;
    int64 sum=0;
    while(n--){
      int64 x;
      cin>>x;
      sum=(sum+x)%t;
    }
    if(sum==0)
      cout<<"YES\n";
    else
      cout<<"NO\n";
  }
  return 0;
}
