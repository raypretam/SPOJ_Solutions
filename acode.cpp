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
int main()
{
    char a[5010];
    int i,j;
    scanf("%s",a);
    while(a[0]!='0')
    {

        int n= strlen(a);
        long long int b[n];
        for(i=0;i<n;i++)
            b[i]= 0;
        b[0]= 1;
        for(i=1;i<n;i++)
        {

            j= (a[i-1] - '0') * 10 + (a[i] - '0');
            if(a[i]- '0')
                b[i]= b[i-1];
             if(j>9 && j<27)
             {
                 if(i==1)
                    b[i]= ((b[i]%hell) + 1)%hell;
                 else
                    b[i]= ((b[i]%hell) + (b[i-2])%hell)%hell;
             }

        }
        long long int ans=b[n-1]%hell;
        printf("%lld\n",ans);
        scanf("%s",a);
    }
    if(a[0]=='0')
        return 0;
}
