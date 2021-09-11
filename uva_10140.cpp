#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void reset(ll L,ll R){
	if(L==1){
		L=2;
	}
	ll lim = sqrt(R);
	vector<bool> visit(lim+1,true);
	vector<ll> prime;
	for(ll a=2; a<=lim; a++){
		if(visit[a]){
			prime.push_back(a);
			for(ll b=a*a; b<=lim; b+=a){
				visit[b] = false;
			}
		}
	}
	vector<bool> isPrime(R-L+1,false);
	
	for(ll& a : prime){
		for(ll b=max(a*a,(L+a-1)/a*a); b<=R; b+=a){
			isPrime[b-L] = true;
		}
	}
	
	vector<ll> v; 
	for(ll a=L; a<=R; a++){
		if(!isPrime[a-L]){
			v.push_back(a);
		}
	}
	
	if(v.size()>=2){
		ll mn=2147487647; ll mx = -1;
		ll C1=0,C2=0,D1=0,D2=0; 
		for(ll a=0; a<v.size()-1; a++){
			ll sm = abs(v[a]-v[a+1]);
			if(mn>sm){
				mn = min(mn,sm);
				C1 = v[a],C2 = v[a+1];
			}
			if(mx<sm){
				mx = max(mx,sm);			
				D1 = v[a],D2 = v[a+1];
			}
		}
		cout << C1 << "," << C2 << " are closest, " << D1 << "," << D2 << " are most distant." << endl;
	
	}else{
		cout << "There are no adjacent primes." << endl;
	}
}


int main()
{
	ll L,U;
	
	while(cin >> L >> U){
		reset(L,U);
	}
    return 0;
}
