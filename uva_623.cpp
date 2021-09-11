#include <bits/stdc++.h>

using namespace std;

#define pix 3000

void factorial(int n){
	int i[pix]; i[0] = 1;
	int p=1,port=0;
	for(int a=1; a<=n; a++){
		for(int b=0; b<p; b++){
			int x = i[b]*a + port;
			i[b] = x%10;
			port = x/10;
		}
		while(port>0){
			i[p] = port%10;
			p++;
			port/=10;
		}
	}
	cout << n << "!" << endl;
	for(int a=p-1; a>=0; a--){
		cout << i[a];
	}cout << endl;
}

int main()
{
	int n;
	
	while(scanf("%d",&n)!=EOF){
		factorial(n);
	}
	
	return 0;
}
