#include <bits/stdc++.h>

using namespace std;

int main(){		
	int t; cin >>  t;
	
	while(t--){
		int n; cin >> n;
		int i[n+4];
		for(int a=0; a<n; a++){
			cin >> i[a];
		}sort(i,i+n);
		int sm = 0, port = i[n/2];
		for(int a=0; a<n; a++){
			if(a==n/2){
				continue;
			}sm+=abs(port-i[a]);
		}cout << sm << endl;
	}
	
	return 0;
}
