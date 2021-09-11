#include <bits/stdc++.h>

using namespace std;

string sum(string s1,string s2){
	int x1 = s1.size(),y1 = s2.size(),x,y;
		
	string i = x1 > y1 ? s1 : s2;
	string j = x1 > y1 ? s2 : s1;
	
	x = i.size(),y = j.size();
	
	string result="";
	y-=1;int port1,port=0;
	while(x--){
		port1 = y;
		char ch1 = i[x],ch2 = j[port1];
		
		stringstream ss1,ss2,ss3; int n1,n2;
		
		ss1 << ch1; ss2 << ch2;
		ss1 >> n1; ss2 >> n2;
		
		int n = (n1 + n2)+port;
		port=0;
		
		int r1 = n%10;
		int p = (n-r1)/10;
		port=p; char s;
		ss3 << r1;
		ss3 >> s;
		result+=s;
		y--;
		if(y==-1){
			port1 = port;
		}
		if(x==0){
			break;
		}
	}
	if(port>0){
		stringstream u; char uno;
		u << port;
		u >> uno;
		result+=uno;
	}
	reverse(result.begin(),result.end());
	return result;
}

string source(string s){
	if(s[0]!='0'){
		return s;
	}
	string s1="";
	for(int a=1; s[a]; a++){
		s1+=s[a];
	}return source(s1);
}

int main()
{
	int N; string s1,s2;
	
	cin >> N;
	
	while(N--){
		cin >> s1 >> s2;
		
		reverse(s1.begin(),s1.end());
		reverse(s2.begin(),s2.end());
		string s = sum(s2,s1);
		reverse(s.begin(),s.end());
		
		if(s[0]=='0'){
			cout << source(s) << endl;
		}else{
			cout << s << endl;
		}s1.clear();
		s2.clear();
	}
	
	return 0;
}

