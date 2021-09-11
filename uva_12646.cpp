#include <bits/stdc++.h>

using namespace std;

int main(){
	int A,B,C;
	
	while(scanf("%d%d%d",&A,&B,&C) != EOF){
		int a=A,b=B,c=C;	
		if(a==b && b==c){
			cout << "*" << endl;
		}else{
			if(a>b && a>c){
				cout << "A" << endl;
			}else if(b>a && b>c){
				cout << "B" << endl;
			}else if(c>b && c>a){
				cout << "C" << endl;
			}else{
				if(a>c && b>c && a==b){
					cout << "C" << endl;
				}else if(b>a && c>a && b==c){
					cout << "A" << endl;
				}else if(c>b && a>b && c==a){
					cout << "B" << endl;
				}else{
					cout << "*" << endl;
				}
			}
		}
	}
	return 0;
}
