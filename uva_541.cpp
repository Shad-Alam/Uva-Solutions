#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n; 
	
	while(scanf("%d", &n)){
		if(n==0){
			break;
		}bool i[n+4][n+4], visit[n+4][n+4];
		for(int a=0; a<n; a++){
			for(int b=0; b<n; b++){
				cin >> i[a][b];
				visit[a][b] = false;
			}
		}

		int p1 = -1;
		int s1=0, s2=0;
		for(int a=0; a<n; a++){
			int d1 = 0, d2 = 0;
			for(int b=0; b<n; b++){
				d1+=i[a][b];
				d2+=i[b][a];
			}
			if(d1%2==1){ s1++;
				if(s1>1){
					break;
				}
				for(int b=0; b<n; b++){
					if(b==0){
						p1 = a;
					}
					visit[a][b] = true;
				}
			}
			
			if(d2%2==1){ s2++;
				if(s2>1){
					break;
				}
				for(int b=0; b<n; b++){
					visit[b][a] = true;
				}
			}
		}
		
		if(s1==1 && s2==1){
			for(int b=0; b<n; b++){
				if(visit[p1-1][b]==true || visit[p1+1][b]==true){
					cout << "Change bit (" << p1+1 << "," << b+1 << ")" << endl;
					break;
				}
			}
		}else{
			if(s1==s2 && s1==0){
				cout << "OK" << endl;
			}else{
				cout << "Corrupt" << endl;
			}
		}
	}
	
	
	return 0;
}
