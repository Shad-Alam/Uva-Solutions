#include <bits/stdc++.h>

using namespace std;

int main(){
	int T; cin >> T;
	int c=1;
	map<int,int> mp;
	while(T--){
		int N; cin >> N;
		int i[N+4][N+4];
		bool port = false;
		for(int a=0; a<N; a++){
			for(int b=0; b<N; b++){
				cin >> i[a][b];
				mp[i[a][b]]++;
				if(mp[i[a][b]]>N){
					port = true;
				}
			}
		}cout << "Case " << c << ": " << (port ? "no" : "yes") << endl;
		c++, mp.clear();
	}
	

	return 0;
}
