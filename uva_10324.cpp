#include <bits/stdc++.h>

using namespace std;

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	string s;
	int c=1;	
	while(cin >> s){
		int i,j,n; cin >> n;
		cout << "Case " << c << ":" <<endl;
		while(n--){
			cin >> i >> j;
			int n1 = i>j ? j : i;
			int n2 = i>j ? i : j;
			
			bool port = false;
			if(s.size()==1 || n1==n2){
				port=true;
			}
			for(int a=n1; a<=n2; a++){
				if(a==n2){
					break;
				}
				if(s[a]==s[a+1]){
					port = true;
				}else{
					port = false;
					break;
				}
			}cout << (port==true? "Yes" : "No") << endl;
		}s.clear();c++;
	}
	return 0;
}
