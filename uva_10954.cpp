#include <bits/stdc++.h>

using namespace std;

int main() {	
	int n;
	while(cin >> n){
		if(n==0){
			break;
		}
		
		int i[n+4]; 
		for(int a=0; a<n; a++){
			cin >> i[a];
		}
		sort(i,i+n); 
		
		int sm = 0;
		for(int a=0; a<n-1; a++){
			if(i[a]>i[a+1]){
				sort(i+a,i+n);
			}
			i[a+1] = i[a] + i[a+1];
			sm+=i[a+1];
		}cout << sm << endl;
	}
	return 0; 
}



