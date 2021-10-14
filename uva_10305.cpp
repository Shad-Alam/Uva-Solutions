#include <bits/stdc++.h>

using namespace std;

map<int, vector<int>> graph;
map<int,bool> visit;

vector<int> v;

void dfs(int source){
	visit[source] = true;
	for(int a=0; a<graph[source].size(); a++){
		int next = graph[source][a];
		if(!visit[next]){
			dfs(next);	
		}
	}v.push_back(source);
}

int main(){		
	int n,m; 
	
	while(cin >> n >> m){
		if(n==0 && m==0){
			break;
		}
	
		while(m-->0){
			int n1, n2; cin >> n1 >> n2;
			graph[n1].push_back(n2);
		}
		
		for(int a=1; a<=n; a++){
			if(!visit[a]){
				dfs(a);
			}
		}
		
		for(int a=v.size()-1; a>=0; a--){
			cout << v[a] << " ";
		}cout << endl;
		v.clear(), graph.clear(), visit.clear();
	}
	
	return 0;
}
