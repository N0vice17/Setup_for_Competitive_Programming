// JAYSHREERAM
// JAYSHREEGANESH
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lld long double
#define ull unsigned long long
#define nline "\n"
#define all(x) x.begin(), x.end()
#define debug(x) print(x)
#define pi 3.141592653589793238462
const ll mod=1000000007;
const ll mod1=1000000009;
const ll p=101;
/*
    Nobody Believes in You, You have Lost Again Again and Again.The Lights are cut off But you are still looking at your
    dreams reviewing it every day and say to yourself:
                                "IT IS NOT OVER UNTIL I REACH EXPERT"
*/
template <typename T> void print(vector<T>arr){cerr<<"[ ";for(auto it:arr){cerr<<it<<" ";}cerr<<"]"<<nline;}
template <typename T> void print(T var){cerr<<var<<nline;}
template <typename T> void print(vector<vector<T>> arr){cerr<<"start"<<nline;for(int i=0;i<arr.size();i++){for(auto it:arr[i]){cerr<<it<<" ";}cerr<<nline;}cerr<<"end"<<nline;}
template <typename T> void print(map<T,T>mpp){for(auto it:mpp){cerr<<it.first<<":"<<it.second<<" ";}cout<<nline;}
ll modu_add(ll a,ll b,ll m){return (a % m + b % m) % m;}
ll modu_minus(ll a,ll b,ll m){return (a % m - b % m) % m;}
ll modu_mul(ll a,ll b,ll m){return (a % m * b % m) % m;}
ll expo(ll a,ll b){ll ans=1,base=a;while(b>0){if(b%2==0){base*=base;b=b/2;}else{ans=ans*base;b=b-1;}}return ans;}
ll gcd(ll a,ll b){if(b==0){return a;}return gcd(b,a%b);}
vector<bool> sieve(ll n){vector<bool>arr(n+1,1);arr[0]=0;arr[1]=0;for(int i=2;i*i<=n;i++){if(arr[i]){for(int j=i*2;j<=n;j+=i){arr[j]=0;}}}return arr;}
void joyshreeram(){   
    
}
int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
        freopen("out.txt","w",stdout);  
        freopen("error.txt","w",stderr);
    #endif
        ll testcases;
        cin>>testcases;
        while(testcases--){
            joyshreeram();
        }
    return 0;
}