#include <bits/stdc++.h>

using namespace std;

#define pix 20000100

typedef int ll;

struct node{
	int a;
	int b;
};

ll mx = pix;
vector<node> mp;
void reset(){
	int L=2,R=pix;
	int lim = sqrt(mx);
	vector<bool> visit(lim,true);
	vector<ll> prime;
	for(ll a=2; a<=lim; a++){
		if(visit[a]){ prime.push_back(a);
			for(ll b=a*a; b<=lim; b+=a){
				visit[a] = false;
			}
		}
	}
	vector<bool> isPrime(R-L+1,false);
	for(ll& a : prime){
		for(ll b=max(a*a,(L+a-1)/a*a); b<=mx; b+=a){
			isPrime[b-L] = true;
		}
	}
	vector<ll> v; int sm=0,port=0; 
	for(ll a=L; a<=R; a++){
		if(!isPrime[a-L]){
			if(sm==0){
				port=a;sm = 1;
				continue;
			}
			if(abs(a-port)==2){
				mp.push_back({port,a});
			}port = a;
		}
	}
}

int main()
{	
	reset(); int S;
	
	while(scanf("%d",&S) != EOF){
		cout << "(" << mp[S-1].a << ", " << mp[S-1].b << ")" << endl;
	}
    return 0;
}
