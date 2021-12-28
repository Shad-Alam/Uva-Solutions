#include <bits/stdc++.h>

using namespace std;

map<string,int> visit;
void source(string s){
	int n = s.size();
	string s1 = "";
	for(int a=0; a<n; a++){
		if(s[a]>='a' && s[a]<='z'){
			s1+=s[a];
		}else if(s[a]>='A' && s[a]<='Z'){
			s1+=char(s[a]+32);
		}else{
			if(s1.size()>0){
				visit[s1]++;
			}s1="";
		}
	}
	if(s1.size()>0){
		visit[s1]++;
	}
}

int main(){	
	string i;
	
	while(getline(cin, i)){
		source(i);
	}
	
	for(auto a : visit){
		cout << a.first << endl;
	}
		
	return 0;
}
