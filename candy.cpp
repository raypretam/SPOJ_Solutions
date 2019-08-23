#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  while(true){
    cin>>t;
    int arr[t];
    int sum=0,m=0;
    if(t!=-1){
      for(int i=0;i<t;i++){
        cin>>arr[i];
        sum+=arr[i];
        m=max(m,arr[i]);
      }
      int temp=sum/t;
      if(temp*t==sum)
        cout<<(m-temp)<<"\n";
      else
        cout<<"-1\n";
    }
    else
      break;
  }
  return 0;
}
