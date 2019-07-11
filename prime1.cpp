#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long int m,n;
	    cin>>m>>n;
	    int flag=0;
	    for(int i=m; i<=n; i++)
	    {
	        for(int j=2; j<=sqrt(i); j++)
	        {
	            if(i%j == 0)
	            {
	                flag = 1;
	                break;
	            }
	        }
	        if(flag == 0 && i>1)
	            cout<<i<<endl;
	        flag=0;
	    }
	}
	return 0;
}
