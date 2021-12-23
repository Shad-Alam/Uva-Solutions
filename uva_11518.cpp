#include <bits/stdc++.h>

using namespace std;

map<int, vector<int>> graph;
map<int, bool> visit;

void dfs(int source){
	visit[source] = true;
	for(int a=0; a<graph[source].size(); a++){
		int next = graph[source][a];
		if(!visit[next]){
			dfs(next);
		}
	}
}

int main(){		
	int t; cin >> t;
	
	while(t--){
		int n, m, l;
		cin >> n >> m >> l;
		
		int edges = m;
		while(edges--){
			int x, y; cin >> x >> y;
			graph[x].push_back(y);
		}
		int s = l;
		while(s--){
			int z; cin >> z;
			if(!visit[z]){
				dfs(z);
			}
		}
		int c=0;
		for(int a=1; a<=n; a++){
			if(visit[a]){
				c++;
			}
		}cout << c << endl;
		graph.clear(), visit.clear();
	}
		
	
	return 0;
}

