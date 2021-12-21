#include <bits/stdc++.h>

using namespace std;

string z = "";
void source(string i, int n){
	string s = "";
	for(int a=0; a<n; a++){
		if(i[a]>='a' && i[a]<='z'){
			s+=i[a];
		}else if(i[a]>='A' && i[a]<='Z'){
			s+=char(i[a]+32);
		}else if(i[a]=='-'){
			s+=char(i[a]);
		}else{
			if(s.size()>0){
				if(z.size()<s.size()){
					z = s;
				}
			}s="";
		}
	}if(s.size()>0){
		if(z.size()<s.size()){
			z = s;
		}
	}
}

int main(){
	string i;
	
	while(getline(cin,i)){
		int n = i.size();
		
		bool port = false;
		if(i[n-1]=='D' && i[n-2]=='-' && i[n-3]=='N' && i[n-4]=='-' && i[n-5]=='E'){
			i[n-1] = ' ', i[n-2] = ' ', i[n-3] = ' ', i[n-4] = ' ', i[n-5] = ' ';
			port = true;
		}
		source(i,n);
		
		if(port){
			cout << z << endl;
			break;
		}
	}
	return 0;
}
