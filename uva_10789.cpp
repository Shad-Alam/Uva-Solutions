#include <bits/stdc++.h>

using namespace std;

#define pix 111111

int m = pix;
vector<bool> prime(m+2,true);
void reset(){
	prime[0] = prime[1] = false;
	for(int a=2; a*a<=m; a++){
		if(prime[a]){
			for(int b=a*a; b<=m; b+=a){
				prime[b] = false;		
			}
		}
	}
}

int main()
{
	reset(); 

	string s; int T,cs=1; cin >> T;
	map<char,int> mp;	
	while(T--){
		cin >> s; mp.clear();
		for(auto a : s){
			mp[a]++;
		}
		cout << "Case " << cs << ": ";
		cs++;
		int c=0;
		for(auto a : mp){
			if(prime[a.second]){
				cout << a.first;
				c++;
			}
		}
		if(c==0){
			cout << "empty";
		}cout << endl;
	}
	
    return 0;
}
