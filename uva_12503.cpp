#include <bits/stdc++.h>

using namespace std;

int main(){	
	int T; cin >> T;
	
	while(T--){
		int n; cin >> n; 
		getchar();
		map<int,string> mp;
		int p=0,p1=1;
		while(n--){
			string i; cin >> i;		
			if(i=="LEFT"){
				mp[p1] = i;
				p1++;
				p--;	
			}else if(i=="RIGHT"){
				mp[p1] = i;
				p1++;
				p++;
			}else{
				int sp;
				cin >> i >> sp;
				if(mp[sp]=="RIGHT"){
					p++;
				}else if(mp[sp]=="LEFT"){
					p--;
				}
				mp[p1] = mp[sp];
				p1++;			
			}
		}cout << p << endl;
		mp.clear();
	}
	

	return 0;
}
