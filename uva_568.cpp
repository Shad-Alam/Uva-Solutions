#include <bits/stdc++.h>

using namespace std;

#define pix 711111

int digit(int n){ int c = 0;
	while(n>0){
		n/=10,c++;
	}return c;
}

void factorial(int n){
	int i[pix],p=1,port=0;i[0] = 1;

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
	int s;
	for(int& a : i){
		if(a==0){
			continue;
		}else{
			s = a;
			break;
		}
	}
	int d = digit(n);
	for(int a=0; a<abs(5-d); a++){
		cout << " ";
	}cout << n << " -> " << s << endl;
}

int main()
{
	int N;
	
	while(scanf("%d",&N)!=EOF){
		factorial(N);
	}
		
	return 0;
}
