#include <bits/stdc++.h>

using namespace std;

int n,m,sp;
char i[200][200];
bool visit[200][200];
int dis[200][200];

bool isValid(int x,int y){
	if(x<0 || x>(n-1) || y<0 || y>(m-1)){
		return false;
	}return true;
}

void dfs(int x,int y){
	visit[x][y] = true;
	dis[x][y] = 0;
	
	queue<pair<int,int>> s;
	s.push({x,y});
		
	bool cycle = false;
	while(!s.empty()){
		x = s.front().first;
		y = s.front().second;
		s.pop();
		
		if(i[x][y]=='S'){
			int x1=x+1, y1=y;
			if(isValid(x1,y1)){
				if(!visit[x1][y1]){
					visit[x1][y1] = true;
					dis[x1][y1] = dis[x][y] + 1;
					s.push({x1,y1});
				}else if(visit[x1][y1]){
					cycle = true;	
					if(cycle){
						int n1 = abs(dis[x][y]-dis[x1][y1]);
						n1++;
						cout << dis[x1][y1] << " step(s) before a loop of " << n1 << " step(s)" << endl;
						return; 
					}
				}
			}else{
				cout << dis[x][y]+1 << " step(s) to exit" << endl;
				return; 
			}
		}else if(i[x][y]=='E'){
			int x1=x, y1=y+1;
			if(isValid(x1,y1)){
				if(!visit[x1][y1]){
					visit[x1][y1] = true;
					dis[x1][y1] = dis[x][y] + 1;
					s.push({x1,y1});
				}else if(visit[x1][y1]){
					cycle = true;	
					if(cycle){
						int n1 = abs(dis[x][y]-dis[x1][y1]);
						n1++;
						cout << dis[x1][y1] << " step(s) before a loop of " << n1 << " step(s)" << endl;
						return; 
					}
				}
			}else{
				cout << dis[x][y]+1 << " step(s) to exit" << endl;
				return; 
			}
		}else if(i[x][y]=='W'){
			int x1=x, y1=y-1;
			if(isValid(x1,y1)){
				if(!visit[x1][y1]){
					visit[x1][y1] = true;
					dis[x1][y1] = dis[x][y] + 1;
					s.push({x1,y1});
				}else if(visit[x1][y1]){
					cycle = true;	
					if(cycle){
						int n1 = abs(dis[x][y]-dis[x1][y1]);
						n1++;
						cout << dis[x1][y1] << " step(s) before a loop of " << n1 << " step(s)" << endl;
						break; 
					}
				}
			}else{
				cout << dis[x][y]+1 << " step(s) to exit" << endl;
				return; 
			}
		}else if(i[x][y]=='N'){
			int x1=x-1, y1=y;
			if(isValid(x1,y1)){
				if(!visit[x1][y1]){
					visit[x1][y1] = true;
					dis[x1][y1] = dis[x][y] + 1;
					s.push({x1,y1});
				}else if(visit[x1][y1]){
					cycle = true;	
					if(cycle){
						int n1 = abs(dis[x][y]-dis[x1][y1]);
						n1++;
						cout << dis[x1][y1] << " step(s) before a loop of " << n1 << " step(s)" << endl;
						return;
					}
				}
			}else{
				cout << dis[x][y]+1 << " step(s) to exit" << endl;
				return; 
			}
		}
	}
}

int main(){		
	n,m,sp; 
	
	
	while(cin >> n >> m >> sp){
		if(n==0 && m==0 && sp==0){
			break;
		}
	
		for(int a=0; a<n; a++){
			string s1; cin >> s1;
			for(int b=0; b<m; b++){
				i[a][b] = s1[b];
				visit[a][b] = false;
				dis[a][b] = 0;	
			}
		}dfs(0,sp-1);
	}
	
	
	return 0;
}
