#include <bits/stdc++.h>

using namespace std;

int main(){	
	int T; cin >> T;
	int sp = 1;
	while(T--){
		int N, P, Q;
		cin >> N >> P >> Q;
		int n = N, p = P, q = Q;
		int i[n+4];
		for(int a=0; a<n; a++){
			cin >> i[a];
		}sort(i,i+n);
		
		int sm = 0;
		for(int a=0; a<n; a++){
			if(q>=i[a] && p>0){
				q-=i[a], p--, sm++;
			}
		}cout << "Case " << sp << ": " << sm << endl;
		sp++;
	}
	
	
	return 0;
}
