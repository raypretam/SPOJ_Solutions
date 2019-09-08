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
#define take(a,b,c) for(b=0;b<c;b+n+) cin>>a;
#define rep(i,n) for(int i=0;i<n;i++)
#define io ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
int main(){
  int n;
  cin>>n;
  int order[n];
  rep(i,n){
    cin>>order[i];
  }
  stack<int> lane; int need = 1;
  bool state = true;
  for (int i = 0; i <n; i++) {
	   while (!lane.empty() && lane.top() == need) {
		     need++;
		     lane.pop();
	         }
	   if (order[i] == need) {
		     need++;
	       } else if (!lane.empty() && lane.top() < order[i]) {
		         state = false;
		           break;
	} else {
		lane.push(order[i]);
	}
}
if (state) cout << "yes" << "\n";
else cout << "no" << "\n";
return 0;
}
