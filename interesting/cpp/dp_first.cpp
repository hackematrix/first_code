#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int  N=1e9;
int max_digit(int n)
{
    int a=0;
    while(n!=0)
    {
        a=max(a,n%10);
        n=n/10;
    }
    return a;
}
int main()
{
    IOS;
    vector<int>dp(2025,N);
    dp[1]=0;
    for(int i=1;i<=2024;i++)
    {
        dp[i+1]=min(dp[i+1],dp[i]+1);

        if(i+max_digit(i)<=2024)
            dp[i+max_digit(i)]=min(dp[i+max_digit(i)],dp[i]+3);
        if(2*i<=2024)
            dp[2*i]=min(dp[2*i],dp[i]+10);

    }
    cout<<dp[2024]<<endl;
    return 0;
}
