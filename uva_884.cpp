#include <bits/stdc++.h>

using namespace std;

typedef int ll;

vector<bool> visit(1000010,true);

void sieve(){
	ll L = 2,R=1000010;
	ll lim = sqrt(R);
	vector<bool> visit1(lim+1,true);
	vector<ll> prime;
	for(int a=2; a<=lim; a++){
		if(visit1[a]){
			prime.push_back(a);
			for(int b=a*a; b<=lim; b+=a){
				visit1[b] = false;
			}
		}
	}
	for(ll& a : prime){
		for(ll b=max(a*a,(L+a-1)/a*a); b<=R; b+=a){
			visit[b-L] = false;
		}
	}
}

ll memo(ll n){ll c=0,m=n;
	if(visit[n-2]){
		return 1;
	}
	for(ll a=2; a*a<=n; a++){
		while(n%a==0){
			n/=a;c++;
		}
	}if(n>1){
		c++;
	}return c;
}

int main(){
	sieve();
	ll n,m = 1000000; 
	ll sm1=0; 
	
	map<ll,ll> egg;
	egg[1]=0;
	for(ll a=2; a<=m; a++){
		sm1+=memo(a);
		egg[a] = sm1;
	}
	
	while(scanf("%d",&n)!=EOF){
		cout << egg[n] << endl;
	}

    return 0;
}

