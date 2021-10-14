#include <bits/stdc++.h>

using namespace std;

void source(string i,int n){
	int p1 = 0, p2 = 0;
	
	bool port = false;
	char j[n+4], k[n+4];
	int d1[n+4],d2[n+4];
	for(int a=0; i[a]; a++){
		if(i[a]=='Z'){
			port = true;
			break;
		}
		if(i[a]=='D'){
			j[p1] = i[a];
			d1[p1] = a+1;
			p1++;
		}
		
		if(i[a]=='R'){
			k[p2] = i[a];
			d2[p2] = a+1;
			p2++;
		}
	}
	
	if(port){
		cout << 0 << endl;
		return;
	}
	
	int mn = 9999999;
	for(int a=0; a<p1; a++){
		for(int b=0; b<p2; b++){
			int sm = abs(d1[a]-d2[b]);
			mn = min(sm,mn);
		}
	}
	if(mn!=9999999){
		cout << mn << endl;
	}
}

int main(){	
	int L; string S;
	while(cin >> L){
		if(L==0){
			break;
		}
		cin >> S;
		source(S,L);
	}
			
	return 0;
}
