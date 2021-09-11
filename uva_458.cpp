#include <bits/stdc++.h>

using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	string j;
	
	while(getline(cin,j)){	
		for(int a=0; j[a]; a++){
			cout << char(int(j[a])-7);
		}cout << endl;
	}
		
	return 0;
}
