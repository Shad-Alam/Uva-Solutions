#include <bits/stdc++.h>

using namespace std;

int main() {	
	string i, j;
	while(cin >> i >> j){
		string s = ""; bool port = false;
		int p = 0;
		for(int a=0; i[a]; a++){
			for(int b=p; j[b]; b++){
				if(i[a]==j[b]){
					s+=i[a];
					p = b+1;
					break;
				}
			}					
		}
		cout << (i==s ? "Yes" : "No") << endl;
	}
	return 0; 
}



