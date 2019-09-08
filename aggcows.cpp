#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int int64;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<ll,int> pli;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
#define F first
#define S second
typedef vector<pli> vpli;
#define hell 1000000007
#define mp make_pair
#define pb push_back
#define all(v) v.begin(),v.end()
#define tests int t; cin>>t; while(t--)
#define take(a,b,c) for(b=0;b<c;b++) cin>>a;
#define rep(i,n) for(int i=0;i<n;i++)
#define io ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int int64;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<ll,int> pli;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
#define F first
#define S second
typedef vector<pli> vpli;
#define hell 1000000007
#define mp make_pair
#define pb push_back
#define all(v) v.begin(),v.end()
#define tests int t; cin>>t; while(t--)
#define take(a,b,c) for(b=0;b<c;b++) cin>>a;
#define rep(i,n) for(int i=0;i<n;i++)
#define io ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
int n,c;
int count(int num,int arr[]){
  int cows=1,pos=arr[0];
  for(int i=0;i<n;i++){
    if(arr[i]-pos>=num){
      pos=arr[i];
      cows++;
      if(cows==c)
        return 1;
    }
  }
  return 0;
}
int bs(int arr[]){
  int low=0;
  int high=arr[n-1];
  int max=INT_MIN;
  while(high>low){
    int mid=(high+low)/2;
    if(count(mid,arr)==1){
      if(mid>max)
        max=mid;
      low=mid+1;
    }
    else
        high=mid;
  }
  return max;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    cin>>n>>c;
    int arr[n];
    for(auto i=0;i<n;i++)
      cin>>arr[i];
    sort(arr,arr+n);
    int ans=bs(arr);
    cout<<ans<<endl;
  }
  return 0;
}
