#include <bits/stdc++.h>

using namespace std;

int main()
{	
	char i[111111]; int j[111111]; int N,K,M;
	
	cin >> N;
	
	while(N--){
		cin >> K;
		for(int a=0; a<K; a++){
			char ch; int money;
			cin >> ch >> money;
			i[a] = ch;
			j[a] = money;
		}
	
		cin >> M; M++;
		int sum=0;
		while(M--){
			string s;
			getline(cin,s);
			for(int a=0; s[a]; a++){
				for(int b=0; b<K; b++){
					if(s[a]==i[b]){
						sum+=j[b];
					}
				}
			}
		}int x; float yy;
		x = sum/100;
		yy = sum-(100*x);
		cout << x << ".";
		if(yy<10){
			cout << "0";
		}cout << yy << "$" << endl;
	}
		
	return 0;
}

