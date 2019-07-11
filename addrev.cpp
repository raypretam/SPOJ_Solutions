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
int reverse(int x)
{
	int result = 0;
	while (x > 0)
	{
		result *= 10;
		result += (x % 10);
		x /= 10;
	}

	return result;
}

int main(){
  tests{
    int a,b;
    cin>>a>>b;
    cout<<reverse(reverse(a)+reverse(b))<<"\n";
  }
  return 0;
}
