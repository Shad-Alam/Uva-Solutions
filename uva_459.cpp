#include <bits/stdc++.h>

using namespace std;

map<char,vector<char>> graph;
map<char,bool> visit;

void dfs(char source){
	visit[source] = true;
	
	for(int a=0; a<graph[source].size(); a++){
		int next = graph[source][a];
		if(!visit[next]){
			dfs(next);
		}
	}
}

int main(){		
	string s,i;
	int t; cin >> t;
	getchar();
	getchar();
	bool port = false;
	while(t-->0){
		getline(cin,i);
		char c = i[0];
		while(getline(cin,s)){
			if(s.size()==0){
				break;
			}graph[s[0]].push_back(s[1]);
			graph[s[1]].push_back(s[0]);
		}
		if(port){
			cout << endl;
		}
		
		int c1=0;
		for(int a=c; a>='A'; a--){
			char cs = char(a);
			if(!visit[cs]){
				dfs(cs), c1++;
			}
		}cout << c1 << endl;
		graph.clear(), visit.clear();
		
		if(port==false){
			port = true;
		}
	}
	
	return 0;
}
