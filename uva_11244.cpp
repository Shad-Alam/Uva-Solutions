#include <bits/stdc++.h>

using namespace std;
#define PIX 	120

int N,M;
char i[PIX][PIX];
bool visit[PIX][PIX];

bool isValid(int x,int y){
	if(x<1 || x>N || y<1 || y>M)
		return false;
	if(visit[x][y]==true || i[x][y]=='.')
		return false;
	return true;
}

int dx[] = {-1,0,1,0,-1,1,-1,1};
int dy[] = {0,1,0,-1,-1,1,1,-1};

int c1=0;
void dfs(int x,int y){
	visit[x][y] = true;
	c1++;
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
	int m,n,r,c;
	
	while(scanf("%d%d",&r,&c)){
		m = r,n = c;
		if(m==0 && n==0){
			break;
		}
		for(int a=1; a<=m; a++){
			for(int b=1; b<=n; b++){
				cin >> i[a][b];
				visit[a][b]=false;
			}
		}
		N=m; M=n; int sum=0;
		for(int a=1; a<=m; a++){
			for(int b=1; b<=n; b++){
				if(visit[a][b]==false && i[a][b]=='*'){
					dfs(a,b);
					if(c1==1){
						sum+=1;
						c1=0;
					}else{
						c1=0;
					}
				}
			}
		}cout << sum << endl;	
	}
	
	return 0;
}
