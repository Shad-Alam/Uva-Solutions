#include <bits/stdc++.h>

using namespace std;

int main(){	
	
	int t; cin >> t;
	getchar();
	while(t--){
		string i; getline(cin, i);
		int n = i.size();
		map<char,int> mp, visit;
		for(int a=0; a<n; a++){
			if(i[a]>='a' && i[a]<='z'){
				mp[i[a]]++;
				if(mp[i[a]]==1){
					visit[i[a]] = a;
				}
			}else if(i[a]>='A' && i[a]<='Z'){
				mp[char(i[a]+32)]++;
				if(char(i[a]+32)==1){
					visit[i[a]] = a;
				}
			}
		}
		int sm = 0; bool port = false;
		for(auto a : mp){
			if(sm<a.second){
				sm = a.second;
			}
		}
		string sp = "";
		for(auto a : mp){
			if(sm==a.second){
				if(a.first>='a' && a.first<='z'){
					sp+= a.first;
				}else if(a.first>='A' && a.first<='Z'){
					sp+= char(a.first+32);
				}
			}
		}
		cout << sp << endl;
	}
	
	return 0;
}
