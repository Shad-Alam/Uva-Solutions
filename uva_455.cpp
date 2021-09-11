#include <bits/stdc++.h>

using namespace std;


int main(){
	string s;
	
	int N; cin >> N;
	
	bool port = false;
	while(N--){
		cin >> s;
	
		int n = s.size(),n1;
		
		string sm = "",sp=""; int sup =0 ;
		string jp = s;
		for(int a=0; a<n; a++){
			sm+=s[a];
			n1 = a+1;
		
			if(n%n1==0){
				int s = n/n1;
				while(s--){
					sp+=sm;
				}
				if(sp==jp){
					sup = n1;
					break;
				}
				sp = "";
			}
		}
		if(port==true){
			cout << endl;
		}
		cout << sup << endl;
		port = true;
	}

	return 0;
}
