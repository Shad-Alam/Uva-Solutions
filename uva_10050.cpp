#include <bits/stdc++.h>

using namespace std;

int main(){	 
	map<int,int> mp;
	map<int,bool> visit;
	
	int T; cin >> T;
	
	while(T--){
		int N, P; cin >> N >> P;
		int n = N, p = P;
		int j[p+4];
		for(int a=0; a<p; a++){
			cin >> j[a];
			int sm = 1;
			for(int b=1; b<=n; b++){
				if(b%j[a]==0 && !visit[b] && sm!=6 && sm!=7 && sm!=13 && sm!=14){
					visit[b] = true;
					mp[b]++;
				}sm++;
				if(sm==15){
					sm = 1;
				}
			}
		}cout << mp.size() << endl;
		mp.clear(), visit.clear();
	}

	return 0;
}
