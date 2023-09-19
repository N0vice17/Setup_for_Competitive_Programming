#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll m=1e9+7;
ll euclid_gcd(ll a,ll b){
    if(b==0){
        return a;
    }
    return euclid_gcd(b,a%b);
}
vector<bool> sieve(ll n){
    vector<bool>arr(n+1,1);
    arr[0]=0;
    arr[1]=0;
    for(int i=2;i*i<=n;i++){
        if(arr[i]){
            for(int j=i*2;j<=n;j+=i){
                arr[j]=0;
            }
        }
    }
    return arr;
}
ll mod_add(ll a,ll b,ll m){
    return (a % m + b % m) % m;
}
ll mod_minus(ll a,ll b,ll m){
    return (a % m - b % m) % m;
}
ll mod_mul(ll a,ll b,ll m){
    return (a % m * b % m) % m;
}
ll binary_expo(ll a,ll b){
    int ans=1,base=a;
    while(b>0){
        if(b%2==0){
            base*=base;
            b=b/2;
        }
        else{
            ans=ans*base;
            b=b-1;
        }
    }
    return ans;
}
ll modulo_div(ll a,ll b,ll m){
    return mod_mul(a,binary_expo(b,m-2),m);
}
signed main(){
    cout<<"hello world"<<endl;
    return 0;
}
