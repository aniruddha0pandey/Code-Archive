#include<bits/stdc++.h>
using namespace std;
#define max1 2000005
#define sz1 100001
#define mod 1000000007
#define moda 421412341324321ll
#define inf 1e18
#define ll long long int
#define debug(x) cout<<#x<<" "<<x<<endl
typedef pair<ll,ll> pr;
#define rte cout<<"Correct";exit(0);
vector<vector<ll> > dp(50,vector<ll>(20,-1));
vector<ll> a;
ll ans=0;
ll count1(ll n,ll val,ll s,ll k,ll m)
{
    //cout<<val<<endl;
    if(n<0)
    {
        if(s>=m)
        {
            //cout<<val<<endl;
            return 1;
        }
        else
        {
            //cout<<val<<endl;
            return 0;
        }
    }
    if(dp[n+1][s]!=-1)
    {
        //cout<<n<<" "<<s<<endl;
        return dp[n][s];
    }
    ll cnt=0;
    for(ll i=0;i<=9;i++)
    {
        ll x1=0;
        if(i==k&&(val*10+i)>0)
        {
            //cout<<val<<endl;
            x1=1;
        }
        cnt=cnt+count1(n-1,val*10+i,s+x1,k,m);
    }
    return dp[n][s]=cnt;
}
void count(ll n,ll val,ll s,ll k,ll m)
{
    if(n<0)
    {
        return;
    }
    else
    {
        for(ll i=0;i<a[n];i++)
        {
            ll x1=0;
            if(i==k&&(val*10+i)>0)
            {
                x1=1;
            }
            ans=ans+count1(n-1,val*10+i,s+x1,k,m);
        }
        ll x1=0;
        if(a[n]==k&&(val*10+a[n])>0)
        {
            x1=1;
        }
        count(n-1,val*10+a[n],s+x1,k,m);
    }
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  // #ifndef ONLINE_JUDGE
  // freopen("input.txt","r",stdin);
  // freopen("output.txt","w",stdout);
  // #endif
  ll t;
  cin>>t;
  while(t--)
  {
    ll n,k;
    cin>>k>>n;
    priority_queue<ll,vector<ll>,greater<ll> > prq;
    vector<ll> a; 
    for(ll i=0;i<n;i++)
    {
        char ch;
        cin>>ch;
        //cout<<ch<<endl;
        if(ch=='S')
        {
            a.push_back(i+1);
        }
        else
        {
            prq.push(i+1);
        }
    }
    ll x=0,ans=0;
    while(!prq.empty())
    {
        //cout<<x<<" "<<a.size()<<" "<<ans<<endl;
        if(x==a.size())
        {
            break;
        }
        ll y=prq.top();
        prq.pop();
        ll x1=abs(a[x]-y);
        if(x1<=k)
        {
            ans++;
            x++;
        }
        else if(y>a[x])
        {
            x++;
            prq.push(y);
        }
    }
    cout<<ans<<endl;
  }
} 
