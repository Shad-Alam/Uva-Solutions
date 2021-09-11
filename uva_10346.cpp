#include <bits/stdc++.h>

using namespace std;

void source(int sm,int n,int k){
	if(n<k){
		cout << sm << endl;
		return;
	}
	n-=k,sm+=1,n+=1;
	return source(sm,n,k);
}

int main(){			
	
	int n,k;
	
	while(scanf("%d%d",&n,&k)!=EOF){
		int sm = n;
		source(sm,n,k);
	}
	
	return 0;
}
