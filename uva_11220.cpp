#include <bits/stdc++.h>

using namespace std;

vector<string> s;
void source(string i){
	string sm = "";
	for(int a=0; i[a]; a++){
		if((i[a]>='a' && i[a]<='z') || (i[a]>='A' && i[a]<='Z')){
			sm+=i[a];
			continue;
		}else if(i[a]==' '){
			s.push_back(sm);
			sm = "";
			continue;
		}
	}
	
	if(sm.size()>0){
		s.push_back(sm);
	}
}

int main(){		
	
	int T; cin >> T;
	int N = 100; bool port = false;
	getchar();
	getchar();
	int cs=1;
	while(T--){
		string i;
		if(port){
			cout << endl;
		}
		cout << "Case #" << cs << ":" << endl;
		cs++;
		while(getline(cin,i)){
			if(i[0]=='\0'){
				break;
			}
			source(i);			
			int p=0;
			for(int a=0; a<s.size(); a++){
				string sp = s[a];
				if(p>sp.size()){
					continue;
				}if((p+1)<=sp.size()){
					cout << sp[p];
					p++;
				}
			}cout << endl;
			s.clear();
		}if(port==false){
			port = true;
		}
	}
	
	return 0;
}
