#include<bits/stdc++.h>
using namespace std;
#define int long long int
int m=1e9+7;
int euclid_gcd(int a,int b){
	if(b==0){
		return a;
	}
	return euclid_gcd(b,a%b);
}
bool sieve(int n){
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
	return arr[n];
}
int modulo_add(int a,int b,int m){
	return (a % m + b % m) % m;
}
int modulo_minus(int a,int b,int m){
	return (a % m - b % m) % m;
}
int modulo_mul(int a,int b,int m){
	return (a % m * b % m) % m;
}
int binary_expo(int a,int b){
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
int modulo_div(int a,int b,int m){
	return modulo_mul(a,binary_expo(b,m-2),m);
}
signed main(){
	cout<<"hello world"<<endl;
	return 0;
}
