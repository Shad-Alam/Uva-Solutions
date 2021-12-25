#include <bits/stdc++.h>

using namespace std;

int main(){	
	int t; cin >> t;
	getchar();
	map<char,int> visit;
	
	while(t--){
		string i; getline(cin, i);
		for(int a=0; a<i.size(); a++){
			if(i[a]>='A' && i[a]<='Z'){
				visit[i[a]]++;
			}else if(i[a]>='a' && i[a]<='z'){
				visit[char(i[a]-32)]++;
			}
		}
	}
	char j[visit.size()+4];
	int k[visit.size()+4], p=0;
	for(auto a : visit){
		j[p] = a.first, k[p] = a.second;
		p++;
	}
	for(int a=0; a<p; a++){
		for(int b=a+1; b<p; b++){
			if(k[a]==k[b]){
				if(j[a]>j[b]){
					swap(j[a],j[b]);
					swap(k[a],k[b]);
				}
			}else{
				if(k[a]<k[b]){
					swap(k[a], k[b]);
					swap(j[a], j[b]);
				}
			}
		}
	}
	
	for(int a=0; a<p; a++){
		cout << j[a] << " " << k[a] << endl;
	}
	
	
	return 0;
}
