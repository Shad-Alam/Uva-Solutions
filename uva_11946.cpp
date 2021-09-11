#include <bits/stdc++.h>

using namespace std;

string i = "3014985726";
string j = "EOIAPBSTZG";

int main()
{
	int T,N=100; string s;
	
	cin >> T;
	
	while(T--){
		getchar();
		while(getline(cin,s)){
			N--;
			for(int b=0; s[b]; b++){
				for(int c=0; i[c]; c++){
					if(s[b]==i[c]){
						s[b] = j[c];
						break;
					}
				} 
			}cout << s << endl;
			if(N==0){
				N=100;
				break;
			}
		}
	}
	return 0;
}

