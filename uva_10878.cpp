#include <bits/stdc++.h>

using namespace std;

class node{
	private:
		int i[9] = {128,64,32,16,8,0,4,2,1};
	public:
		char init(string s);
};

char node::init(string s){
	int sm = 0;
	for(int a=1; a<s.size()-1; a++){
		if(s[a]=='o'){
			sm+=i[a-1];
		}
	}return sm;
}

int main(){	
	node sp;
	string s; bool port = false;
	while(getline(cin, s)){
		if(s[0]=='_'){
			if(port==true){
				break;
			}else{
				port = true;
			}
		}else{
			cout << sp.init(s);
		}
	}
	
    return 0;
}
