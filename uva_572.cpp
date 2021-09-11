#include <bits/stdc++.h>

using namespace std;
#define PIX 	120

int N,M;
char i[PIX][PIX];
bool visit[PIX][PIX];

bool isValid(int x,int y){
	if(x<1 || x>N || y<1 || y>M)
		return false;
	if(visit[x][y]==true || i[x][y]=='*')
		return false;
	return true;
}

int dx[] = {-1,0,1,0,-1,1,-1,1};
int dy[] = {0,1,0,-1,-1,1,1,-1};

void dfs(int x,int y){
	visit[x][y] = true;
	for(int a=0; a<8; a++){
		int x1 = x + dx[a];
		int y1 = y + dy[a];
		
		if(isValid(x1,y1)){
			dfs(x1,y1);
		}
	}
}

int main()
{
	int m,n;
	
	while(scanf("%d%d",&m,&n)){
		if(m==0){
			break;
		}
		for(int a=1; a<=m; a++){
			for(int b=1; b<=n; b++){
				cin >> i[a][b];
				visit[a][b]=false;
			}
		}
		N=m; M=n; int c=0;
		for(int a=1; a<=m; a++){
			for(int b=1; b<=n; b++){
				if(visit[a][b]==false && i[a][b]=='@'){
					dfs(a,b);
					c++;
				}
			}
		}cout << c << endl;	
	}
	
	return 0;
}
