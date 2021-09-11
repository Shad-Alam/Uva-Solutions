#include <bits/stdc++.h>

using namespace std;

string dx = "AEHIJLM0OSTUVWXYZ12358";
string dy = "A3HILJMOO2TUVWXY51SEZ8";

bool mirror(string s){
	int n = s.size(),c=0; string s1 = s;
	for(int a=0; a<n; a++){
		for(int b=0; b<dx.size(); b++){
			if(s[a] == dx[b]){
				s[a] = dy[b];
				c++;
				break;
			}
		}
	}
	if(n==c){
		reverse(s.begin(),s.end());
		return (s1==s) ? true : false;
	}else{
		return false;
	}
}
int main()
{
	string s,s1;

	while(getline(cin,s)){
		s1 = s;
		if(mirror(s)){
			string s2 = s1;
			reverse(s2.begin(),s2.end());
			if(s1==s2){
				cout << s1 << " -- is a mirrored palindrome." << endl;
			}else{
				cout << s1 << " -- is a mirrored string." << endl;
			}
		}else{
			string s3 = s1;
			reverse(s3.begin(),s3.end());
			if(s3==s1){
				cout << s1 << " -- is a regular palindrome." << endl;
			}else{
				cout << s1 << " -- is not a palindrome." << endl;
			}
		}cout << endl;
	}
	return 0;
}

