#include <bits/stdc++.h>

using namespace std;

typedef int ll;

map<ll,ll> mp;

void digit(ll n){
	ll n1,n2;
	if(n>4){ 
		n1 = mp[n];  
		n2 = mp[n-5]; 
	}else{
		n1 = mp[n];
		n2 = mp[n+5];
	}
	
	string s1 = to_string(n1), s2 = to_string(n2);
	ll a1 = s1.size(),a2 = s2.size();
	if(a1<a2){
		for(ll a=0; a<(abs(a1-a2)); a++){
			cout << " ";
		}
	}
}

void source(ll n){
	ll i[n*10],p=1,port=0; i[0] = 1;
	for(ll a=1; a<=n; a++){
		for(ll b=0; b<p; b++){
			ll x = (i[b]*a) + port;
			i[b] = x%10;
			port = x/10;
			
		}
		
		while(port>0){
			i[p] = port%10;
			p++; port/=10;
		}
	}

	for(ll a=0; a<p; a++){
		mp[i[a]]++;
	}
	cout << n << "! --" << endl;
	for(int a=0; a<=9; a++){
		cout << "   (" << a << ")   "; digit(a); cout << mp[a] << "   ";
		if(a==4){
			cout << endl;
		}
	}
}

int main(){
	ll n;
	
	while(scanf("%d",&n)){
		if(n==0){ break; }source(n); 
		mp.clear(); cout << endl;
	}
		
	return 0;
}
