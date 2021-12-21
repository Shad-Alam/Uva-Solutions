#include <bits/stdc++.h>

using namespace std;

int main(){		
	string a, b;
	map<int,bool> visit;
	while(getline(cin,a)){
		getline(cin,b);
		string i = (a.size()>b.size() ? a : b);
		string j = (a.size()>b.size() ? b : a);
		
		string sm = "";
		for(int a=0; a<j.size(); a++){
			for(int b=0; b<i.size(); b++){
				if(!visit[b] && i[b]==j[a] && i[b]!=' '){
					visit[b] = true;
					sm+=j[a];
					break;
				}
			}
		}sort(sm.begin(), sm.end());
		cout << sm << endl; 
		visit.clear();
	}
	return 0;
}
