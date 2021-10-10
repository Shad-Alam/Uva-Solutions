#include <bits/stdc++.h>

using namespace std;

map<int,vector<int>> graph;
map<int,bool> visit;
stack<int> i;
void dfs(int source,bool port){
	visit[source] = true;
	for(int a=0; a<graph[source].size(); a++){
		int next = graph[source][a];
		if(!visit[next]){
			dfs(next,port);
		}
	}

	if(port){
		i.push(source);
	}
}

int main(){
	freopen("in.txt","r",stdin);
	int t; cin >> t;
	
	while(t-->0){
		int n, m; 
		cin >> n >> m;
		
		while(m--){
			int n1, n2;
			cin >> n1 >> n2;
			graph[n1].push_back(n2);
		}
		bool port = true;
		for(int a=1; a<=n; a++){
			if(!visit[a]){
				dfs(a,port);
			}
		}
		visit.clear(), port = false;
		int c=0;
		while(!i.empty()){
			n = i.top();
			i.pop();
			if(!visit[n]){
				dfs(n,port), c++;
			}
		}cout << c << endl;
		graph.clear(), visit.clear();
	}
	
	
	return 0;
}
