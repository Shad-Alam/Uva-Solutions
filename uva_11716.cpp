#include <bits/stdc++.h>

using namespace std;

void source(string i,int n,int m){
	int p=0; char j[m+4][m+4];
	for(int a=0; a<m; a++){
		for(int b=0; b<m; b++){
			j[a][b] = i[p];
			p++;
		}
	}
	
	for(int a=0; a<m; a++){
		for(int b=0; b<m; b++){
			cout << j[b][a];
		}
	}cout << endl;
}

int main(){		
	string i; int T; cin >> T;
	getchar();
	while(T--){
		getline(cin,i);
		int n = i.size();
		int m = sqrt(n);
		if(m*m==n){
			source(i,n,m);
		}else{
			cout << "INVALID" << endl;
		}
	}
	
	return 0;
}
