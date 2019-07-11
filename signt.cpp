#include <bits/stdc++.h>
#define MAX 100000
using namespace std;


int main()// Be careful to increase ur code line
{

    int n,test;
    scanf("%d",&test);
    vector<int>v;
    while(test--)
    {
        scanf("%d",&n);
        v.clear();
        if(n==0||n==1)
        {
            if(n==0) puts("10");
            else puts("1");
            continue;
        }

        for(int i=9; i>=2; i--)
        {
            if(n%i==0&&n!=0)
            {
                while(n%i==0)
                {
                    v.push_back(i);
                    n/=i;
                }
            }
        }
        if(n!=1) v.push_back(n);
        sort(v.begin(),v.end());
        bool flag=true;
        for(int i=0; i<v.size(); i++) if(v[i]>9) flag=false;

        if(flag)
        {
            for(int i=0; i<v.size(); i++)
            {
                cout<<v[i];
            }
            puts("");
        }
        else puts("-1");
    }
    return 0;
}
