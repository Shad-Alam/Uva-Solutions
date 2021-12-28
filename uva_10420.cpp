#include <bits/stdc++.h>

using namespace std;

struct node{
	string country;
	string name;
};

vector<node> v;
void source(string i){
	int n = i.size();
	string sm = "";
	for(int a=0; a<n; a++){
		if(i[a]==' '){
			string sp = sm; sm="";
			for(int b=a+1; b<n; b++){
				sm+=i[b];
			}v.push_back({sp, sm});
			break;
		}else{
			sm+=i[a];
		}
	}
}

int main(){		
	
	int n; cin >> n;
	getchar();
	
	while(n--){
		string s; getline(cin, s);
		source(s);
	}
	
	map<string, bool> visit;
	map<string,int> res, mp;
	for(int a=0; a<v.size(); a++){
		if(visit[v[a].country]==false){
			mp[v[a].name]++;
			for(int b=a+1; b<v.size(); b++){
				if(v[a].country==v[b].country){
					mp[v[b].name]++;
				}
			}visit[v[a].country]=true;
			res[v[a].country] = mp.size();
			mp.clear();
		}
	}
	for(auto a : res){
		cout << a.first << " " << a.second << endl;
	}

	return 0;
}
