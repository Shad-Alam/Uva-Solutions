#include <bits/stdc++.h>

using namespace std;

#define red 	1
#define green  	2

map<int,vector<int>> graph;
map<int,bool> visit;
map<int,int> mark;

bool bfs(int source){
	visit[source] = true;
	mark[source] = red;
	
	queue<int> s;
	s.push(source);
	
	bool port = false;
	while(!s.empty()){
		int node = s.front();
		s.pop();
		
		for(int a=0; a<graph[node].size(); a++){
			int next = graph[node][a];
			if(visit[next] && (mark[next]==mark[node])){
				port = true;
				break;
			}else{
				if(!visit[next] && mark[node]==red){
					visit[next] = true;
					mark[next] = green;
					s.push(next);
				}else if(!visit[next] && mark[node]==green){
					visit[next] = true;
					mark[next] = red;
					s.push(next);
				}
			}
		}
		if(port==true){
			break;
		}
	}return port;
}

int main(){	
	int n,l,m;
	while(scanf("%d",&n)){
		if(n==0){
			break;
		}scanf("%d",&l);
	
		m = l;
		while(m--){
			int n1,n2; cin >> n1 >> n2;
			graph[n1].push_back(n2);
			graph[n2].push_back(n1);
		}
		
		int c=0; bool port = true;
		for(int a=0; a<=n-1; a++){
			if(!visit[a]){
				port = bfs(a), c++;
			}
		}
		if(c==1 && port==false){
			cout << "BICOLORABLE." << endl;
		}else{
			cout << "NOT BICOLORABLE." << endl;
		}graph.clear(),mark.clear(),visit.clear();
	}
				
	return 0;
}
