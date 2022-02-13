#include <bits/stdc++.h>

using namespace std;

int main(){		
	
	int N; cin >> N;

	while(N--){
		char i[10][10];
		for(int a=0; a<3; a++){
			string s; cin >> s;
			for(int b=0; b<3; b++){
				i[a][b] = s[b];
			}	
		}
		int x=0, o=0;
		for(int a=0; a<3; a++){
			for(int b=0; b<3; b++){
				if(i[a][b]=='X'){
					x++;
				}else if(i[a][b]=='O'){
					o++;
				}
			}
		}
		
		if(o>x){
			cout << "no" << endl;
		}else{
			bool port = false;
			if(x==o && x>=3){ 
				string sm1="", sm2="", sm3="", sm4="", sm5="", sm6="", sm7="", sm8="";
				int p=2;
				for(int a=0; a<3; a++){
					sm1+=i[0][a], sm2+=i[1][a], sm3+=i[2][a];
					sm4+=i[a][0], sm5+=i[a][1], sm6+=i[a][2];
					sm7+=i[a][a], sm8+=i[a][p], p--;
				}
				
				if(sm1=="XXX" || sm2=="XXX" || sm3=="XXX" || sm4=="XXX"){
					port = true;
				}else if(sm5=="XXX" || sm6=="XXX" || sm7=="XXX" || sm8=="XXX"){
					port = true;
				}
				
				cout << (port==true ? "no" : "yes") << endl;
			}else if(x-1==o){		
				string sm1="", sm2="", sm3="", sm4="", sm5="", sm6="", sm7="", sm8="";
				int p=2;
				for(int a=0; a<3; a++){
					sm1+=i[0][a], sm2+=i[1][a], sm3+=i[2][a];
					sm4+=i[a][0], sm5+=i[a][1], sm6+=i[a][2];
					sm7+=i[a][a], sm8+=i[a][p], p--;
				}
				bool port = false;
				if(sm1=="OOO" || sm2=="OOO" || sm3=="OOO" || sm4=="OOO"){
					port = true;
				}else if(sm5=="OOO" || sm6=="OOO" || sm7=="OOO" || sm8=="OOO"){
					port = true;
				}
				cout << (port==true ? "no" : "yes") << endl;
			}else{
				if(x>o && x-1!=o){
					cout << "no" << endl;
				}else{
					cout << "yes" << endl;
				}
			}
		}
	}
	
	return 0;
}
