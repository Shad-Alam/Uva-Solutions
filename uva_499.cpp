#include <bits/stdc++.h>

using namespace std;

int main(){	
	string i;
	while(getline(cin, i)){
		int n = i.size();
		
		map<char,int> mp, visit;
		for(int a=0; a<n; a++){
			if((i[a]>='a' && i[a]<='z') || (i[a]>='A' && i[a]<='Z')){
				mp[i[a]]++;
				if(mp[i[a]]==1){
					visit[i[a]] = a;
				}
			}
		}
		int sm = 0;
		for(auto a : mp){
			if(sm<a.second){
				sm = a.second;
			}
		}
		string s1 = "", s2 = "";
		for(auto a : mp){
			if(sm==a.second){ 
				if(a.first>='A' && a.first<='Z'){
					s1+=a.first;
				}else{
					s2+=a.first;
				}
			}
		}
		sort(s1.begin(), s1.end());
		sort(s2.begin(), s2.end());
		cout << s1 << s2 << " " << sm << endl;
	}
	
	return 0;
}
