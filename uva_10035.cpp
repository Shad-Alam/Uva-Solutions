#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){	
	ll n1, n2;
	
	while(cin >> n1 >> n2){
		if(n1==n2 && n1==0){
			break;
		}
		ll m1 = max(n1,n2), m2 = min(n1,n2);
		
		ll port = 0, c = 0;
		while(m1>0){
			ll a = m1%10, b = m2%10;
			ll m = a+b+port;
			if(m>9){
				c++, port = m/10;
			}m1/=10, m2/=10;
		}
		if(c==0){
			cout << "No carry operation." << endl;
		}else{
			if(c==1){
				cout << c << " carry operation." << endl;
			}else{
				cout << c << " carry operations." << endl;
			}
		}
	}
	
	return 0;
}
