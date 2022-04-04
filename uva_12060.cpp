#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll space(ll n){
	ll c=0;
	while(n>0){
		n/=10, c++;
	}return c;
}

int main() { 
	ll cs = 1, t = 101;
	for(ll a=1; a<t; a++){
		ll n;
		cin >> n;
		if(n==0){
			break;
		}
		
		ll am = 0;
		for(ll a=0; a<n; a++){
			ll s; cin >> s;
			am+=s;
		}
		
		cout << "Case " << cs << ":" << endl;
		cs++;
		
		ll sm = am;
		ll av = sm/n;
		if(am%n==0){
			if(sm<0){
				cout << "- " << abs(av) << endl;
			}else{
				cout << av << endl;
			}
		}else{
			ll left=abs(av), up = abs(am-(av*n)), down = abs(n);
			
			ll gcd = __gcd(up, down);
			down/=gcd, up/=gcd;
			if(sm<0){
				ll lsp = space(left);
				ll sp = space(down);
				ll upspace = lsp+abs(sp-space(up));
				for(ll a=0; a<upspace+2; a++){
					cout << " ";
				}cout << up << endl;
				if(left>0){
					cout << "- "<< left;
				}else{
					cout << "- ";
				}
				for(ll a=0; a<sp; a++){
					cout << "-";
				}cout << endl;
				for(ll a=0; a<lsp+2; a++){
					cout << " ";
				}cout << down << endl;
			}else{
				ll lsp = space(left);
				ll sp = space(down);
				ll upspace = lsp+abs(sp-space(up));
				for(ll a=0; a<upspace; a++){
					cout << " ";
				}cout << up << endl;
				if(left>0){
					cout << left;
				}
				for(ll a=0; a<sp; a++){
					cout << "-";
				}cout << endl;
				for(ll a=0; a<lsp; a++){
					cout << " ";
				}cout << down << endl;
			}
		}
	}
			
	return 0;
}
