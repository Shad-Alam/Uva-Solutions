#include <bits/stdc++.h>

using namespace std;


int main()
{
	string i; int T,c=1;
	
	cin >> T;
	
	while(T--){
		cin >> i;
		cout << "Case " << c << ": ";
		c++;
		string port=""; string sm="";
		for(int a=0; a<i.size(); a++){
			if(i[a]>='A' && i[a]<='Z'){
				if(port.size()>0 && sm.size()>0){
					stringstream ss; int n;
					ss << sm;
					ss >> n;
					for(int a=0; a<n; a++){
						cout << port;
					}
				}
				sm="";port="";
				port+= i[a];
				continue;
			}
			if(i[a]>='0' && i[a]<='9'){
				sm+=i[a];
				continue;
			}
		}
		if(port.size()>0 && sm.size()>0){
			stringstream ss1; int n1;
				ss1 << sm;
				ss1 >> n1;
			for(int a=0; a<n1; a++){
				cout << port;
			}
		}cout << endl;
	}
		
	return 0;
}

