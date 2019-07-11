#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,count=0;
    cin>>n;
    int index=n-1;
    pair<int,int>stop[n];
    for(int i=0;i<n;i++){
      int d,f;
      cin>>d>>f;
      stop[i]=make_pair(d,f);
    }
    int curr_d,curr_f;
    cin>>curr_d>>curr_f;
    for(int i=n-1;i>=0;i--){
      if((curr_d-stop[i].first)<=curr_f){
        curr_f=curr_f-(curr_d-stop[i].first);
        if(curr_f==0){
          if(index==0){
            count=-1;
            break;
          }
          count++;
          index--;
          curr_f=curr_f+stop[i].second;
        }
        curr_d=stop[i].first;
      }
    }
      cout<<count<<"\n";
  }
  return 0;
}
