#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){		
	ll X;
	
	//
	
	vector<ll> v;
	while(cin >> X){
		v.push_back(X);
		int n = v.size();
		sort(v.begin(),v.end());
		if(n==1){
			cout << v[0] << endl;
		}else{
			int mid = n/2;
			if(mid%2==1){
				cout << v[mid] << endl;
			}else{
				cout << (v[mid]+v[mid+1])/2 << endl;
			}
		}
	}
	return 0;
}
