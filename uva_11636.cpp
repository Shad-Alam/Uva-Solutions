#include <bits/stdc++.h>

using namespace std;

int main(){	
	int n, d=1;
	
	while(cin >> n){
		if(n<0){
			break;
		}
	
		cout << "Case " << d << ": ";
		if(n==1){
			cout << 0 << endl;
		}else{
 			int m = 1, sm = 1;
			int c=0;
			while(true){
				sm+=m, c++;
				if(sm>=n){
					cout << c << endl;
					break;
				}m*=2;
			}
		}d++;
	}
	
	return 0;
}
