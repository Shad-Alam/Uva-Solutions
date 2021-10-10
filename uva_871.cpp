#include <bits/stdc++.h>

using namespace std;

char i[50][50];
bool visit[50][50];
int n,m;

int dx[] = {-1,0,1,0,1,-1,-1,1};
int dy[] = {0,1,0,-1,1,-1,1,-1};

bool isValid(int x,int y){
	if(x<0 || x>(n-1) || y<0 || y>(m-1)){
		return false;
	}
	
	if(visit[x][y]){
		return false;
	}return true;
}
int mx =0;
void bfs(int x,int y){
	visit[x][y] = true;
	
	queue<pair<int,int>> s;
	s.push({x,y});
	int c=1;
	while(!s.empty()){
		int nodex = s.front().first;
		int nodey = s.front().second;
		s.pop();
		
		for(int a=0; a<8; a++){
			int x1 = nodex + dx[a];
			int y1 = nodey + dy[a];
			if(isValid(x1,y1) && i[x1][y1]=='1'){
				c++;
				visit[x1][y1] = true;
				s.push({x1,y1});
			}
		}
	} mx = max(mx,c);	
}

int main(){	
	string s; int t; cin >> t;
	getchar();
	getchar();
	bool port = false;
	while(t--){
		int a1=0;
		if(port){
			cout << endl;
		}
		while(getline(cin,s)){
			if(s.size()==0){
				break;
			}else{
				m = s.size();
				for(int b=0; b<s.size(); b++){
					i[a1][b] = s[b];
					visit[a1][b] = false;
				}a1++; n = a1;			
			}
		}
		for(int a=0; a<n; a++){
			for(int b=0; b<m; b++){
				if(!visit[a][b] && i[a][b]=='1'){
					bfs(a,b);
				}
			}
		}cout << mx << endl;
		n = m = a1 = mx = 0;
		if(port==false){ 
			port = true;
		}
	}

	return 0;
}
