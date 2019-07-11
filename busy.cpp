#include <bits/stdc++.h>
using namespace std;
int main()
{
         int t,n,i,a,b,ans,prevend;
                 cin>>t;
                 while(t--){
                 cin>>n;
                 pair<int,int> SCHEDULE[n];
                 for(i=0;i<n;i++)
                 {
                           cin>>a>>b;
                          SCHEDULE[i]=make_pair(b,a);
                  }
                  sort(SCHEDULE,SCHEDULE+n);
                  ans=0;
                  prevend=-1;
                  for(i=0;i<n;i++)
                  if(SCHEDULE[i].second>=prevend)
                 {
                              ans++;
                              prevend=SCHEDULE[i].first;
                 }
                 cout<<ans<<endl;
               } 
         return 0;
}
