#include <bits/stdc++.h>

using namespace std;

#define pix 1111

int n,m;
char i[pix][pix];
int j[pix][pix];

int dx[] = {-1,1,0,0,1,-1,-1,1};
int dy[] = {0,0,1,-1,1,-1,1,-1};

bool isValid(int x,int y){
	if(x<0 || x>(n-1) || y<0 || y>(m-1)){
		return false;
	}
	
	if(i[x][y]!='.'){
		return false;
	}return true;
}

void dfs(int x,int y){
	for(int a=0; a<8; a++){
		int x1 = x + dx[a];
		int y1 = y + dy[a];
		if(isValid(x1,y1)){
			j[x1][y1]+=1;
		}
	}
}

int main(){		
	int x=1; bool port = false;
	while(scanf("%d%d",&n,&m)){
		if(n==0 && m==0){
			break;
		}
		
		string s;
		for(int a=0; a<n; a++){
			cin >> s;
			for(int b=0; b<m; b++){
				i[a][b] = s[b];
				j[a][b] = 0;
			}
		}
		
		for(int a=0; a<n; a++){
			for(int b=0; b<m; b++){
				if(i[a][b]=='*'){
					dfs(a,b);
				}
			}
		}
		if(port==true){
			cout << endl;
		}
		cout << "Field #" << x << ":" << endl;
		for(int a=0; a<n; a++){
			for(int b=0; b<m; b++){
				if(i[a][b]=='*'){
					 cout << i[a][b];
				 }else{
					cout << j[a][b];
				}
			}cout << endl;
		}x++;
		port = true;
	}
	
	return 0;
}
	
