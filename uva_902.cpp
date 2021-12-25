#include <bits/stdc++.h>

using namespace std;

int main(){		
	string i; int m;
	
	while(cin >> m >> i){
		int n = i.size(); 
		      
		map<string, int> mp;
		for(int a=0; a<n; a++){
			string s = i.substr(a,m);
			mp[s]++;
			if(s.size()<m){
				break;
			}
		}
		
		int sm = 0; string sp = "";
		for(auto a : mp){
			if(sm<a.second){
				sm = a.second, sp = a.first;	
			}
		}cout << sp << endl;
	}
	
	return 0;
}
