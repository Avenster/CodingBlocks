#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
 #define fio ios_base::sync_with_stdio(false)
 
#define ll long long int

#define s(x) scanf("%lld",&x)
#define s2(x,y) s(x)+s(y)
#define s3(x,y,z) s(x)+s(y)+s(z)
 
#define p(x) printf("%lld\n",x)
#define p2(x,y) p(x)+p(y)
#define p3(x,y,z) p(x)+p(y)+p(z)
#define F(i,a,b) for(ll i = (ll)(a); i <= (ll)(b); i++)
#define RF(i,a,b) for(ll i = (ll)(a); i >= (ll)(b); i--)
 
#define ff first
#define ss second
#define mp(x,y) make_pair(x,y)
#define pll pair<ll,ll>
#define pb push_back

ll inf = 1e18;
ll mod = 1e9 + 7 ;
ll gcd(ll a , ll b){return b==0?a:gcd(b,a%b);}


bool isPossible(vector<ll> &rnk, ll minTime,ll paranthas){
  ll n=rnk.size();
  for(ll i=0;i<n;i++){
    ll tm=0;
    ll ct=1;
    while(tm+ct*rnk[i]<=minTime and paranthas>0){
      tm+=ct*rnk[i];
      paranthas--;
      ct++;
    }
    if(paranthas==0)return true;
  }
  return (paranthas==0);
}

int main()
{
  ll t=1;
  while(t--){

    ll par;
    s(par);
    ll n;
    s(n);
    vector<ll> ran(n);
    F(i,0,n-1)cin>>ran[i];
    ll lo=0;
    ll hi=1e18;
    ll ans=1e18;

    while(lo<=hi){
      ll mid=lo+hi;
      mid>>=1;
      if(isPossible(ran,mid,par)){
        ans=min(ans,mid);
        hi=mid-1;
      }else {
        lo=mid+1;
      }
    }
    p(ans);
  }
}
