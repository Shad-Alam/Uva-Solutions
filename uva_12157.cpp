#include <bits/stdc++.h>

using namespace std; 

int mile(int n){
	int c=0; 
	if(n>0){
		c+=10;
		n = n-29;
	}
	while(n>0){
		c+=10;
		n = n-30;
	}
	if(n>0){
		c+=10;
	}return c;
}

int juice(int n){
	int c=0; 
	if(n>0){
		c+=15;
		n = n-59;
	}
	while(n>0){
		c+=15;
		n = n-60;
	}
	if(n>0){
		c+=10;
	}return c;
}

int main(){
	
	int T; cin >> T;
	int c=1;
	while(T--){
		int N;
		cin >> N;
		int sm1=0,sm2=0;
		while(N--){
			int s; cin >> s;
			sm1+=mile(s);
			sm2+=juice(s);
		}
		if(sm2>sm1){
			cout << "Case " << c << ": Mile " << sm1 << endl;
		}else if(sm1>sm2){
			cout << "Case " << c << ": Juice " << sm2 << endl;
		}else{
			cout << "Case " << c << ": Mile Juice " << sm1 << endl;
		}c++;
	}
	
	return 0;
}
