#include <bits/stdc++.h>

using namespace std;

int main(){	
	int ss; cin >> ss;
	getchar();
	int t=1;
	while(ss--){
		string i; getline(cin,i);
		int n = i.size();
		
		double U = -1, I = -1, P = -1;
		for(int a=0; a<n-1; a++){
			if(i[a]=='U' && i[a+1]=='='){
				bool mili = false,kilo = false, mega = false, port = false;
				double u = 0; bool dot = false;
				double into = 1;
				for(int b=a+2; b<n; b++){
					if(i[b]=='.'){
						dot = true;
						continue;
					}
					
					if(i[b]>='0' && i[b]<='9'){					
						stringstream ss; int ch1;
						ss << i[b];
						ss >> ch1;
						u = (u*10) + ch1;
						if(dot){
							into*=10;
						}
						continue;
					}else{
						if(i[b]=='m'){
							if(b+1<=n-1 && i[b+1]=='V'){
								mili = true;
								break;
							}
						}else if(i[b]=='k'){
							if(b+1<=n-1 && i[b+1]=='V'){
								kilo = true;
								break;
							}
						}else if(i[b]=='M'){
							if(b+1<=n-1 && i[b+1]=='V'){
								mega = true;
								break;
							}
						}else if(i[b]=='V'){
							port = true;
							break;
						}
					}
				}
				if(port){
					u/=into;
					U = u;
				}
				if(mili){
					double sd = 1000;
					u/=sd;
					u/=into;
					U = u;
				}
				
				if(kilo){
					double sd = 1000;
					u*=sd;
					u/=into;
					U = u;
				}
				
				if(mega){
					double sd = 1000000;
					u*=sd;
					u/=into;
					U = u;
				}
			}else if(i[a]=='I' && i[a+1]=='='){
				bool mili = false,kilo = false, mega = false, port = false;
				double u = 0; bool dot = false;
				double into = 1;
				for(int b=a+2; b<n; b++){
					if(i[b]=='.'){
						dot = true;
						continue;
					}
					
					if(i[b]>='0' && i[b]<='9'){					
						stringstream ss; int ch1;
						ss << i[b];
						ss >> ch1;
						u = (u*10) + ch1;
						if(dot){
							into*=10;
						}
						continue;
					}else{
						if(i[b]=='m'){
							if(b+1<=n-1 && i[b+1]=='A'){
								mili = true;
								break;
							}
						}else if(i[b]=='k'){
							if(b+1<=n-1 && i[b+1]=='A'){
								kilo = true;
								break;
							}
						}else if(i[b]=='M'){
							if(b+1<=n-1 && i[b+1]=='A'){
								mega = true;
								break;
							}
						}else if(i[b]=='A'){
							port = true;
							break;
						}
					}
				}
				
				if(port){
					u/=into;
					I = u;
				}
				
				if(mili){
					double sd = 1000;
					u/=sd;
					u/=into;
					I = u;
				}
				
				if(kilo){
					double sd = 1000;
					u*=sd;
					u/=into;
					I = u;
				}
				
				if(mega){
					double sd = 1000000;
					u*=sd;
					u/=into;
					I = u;
				}
			}else if(i[a]=='P' && i[a+1]=='='){
				bool mili = false,kilo = false, mega = false, port = false;
				double u = 0; bool dot = false;
				double into = 1;
				for(int b=a+2; b<n; b++){
					if(i[b]=='.'){
						dot = true;
						continue;
					}
					
					if(i[b]>='0' && i[b]<='9'){					
						stringstream ss; int ch1;
						ss << i[b];
						ss >> ch1;
						u = (u*10) + ch1;
						if(dot){
							into*=10;
						}
						continue;
					}else{
						if(i[b]=='m'){
							if(b+1<=n-1 && i[b+1]=='W'){
								mili = true;
								break;
							}
						}else if(i[b]=='k'){
							if(b+1<=n-1 && i[b+1]=='W'){
								kilo = true;
								break;
							}
						}else if(i[b]=='M'){
							if(b+1<=n-1 && i[b+1]=='W'){
								mega = true;
								break;
							}
						}else if(i[b]=='W'){
							port = true;
							break;
						}
					}
				}
				
				if(port){
					u/=into;
					P = u;
				}
				if(mili){
					double sd = 1000;
					u/=sd;
					u/=into;
					P = u;
				}
				
				if(kilo){
					double sd = 1000;
					u*=sd;
					u/=into;
					P = u;
				}
				
				if(mega){
					double sd = 1000000;
					u*=sd;
					u/=into;
					P = u;
				}
			}
		}
		cout << "Problem #" << t << endl;
		t++;
		if(U>-1 && I>-1){
			double res1 = U*I;
			printf("P=%.2lfW\n", res1);
		}else if(P>-1 && U>-1){
			double res1 = P/U;
			printf("I=%.2lfA\n", res1);
		}else if(P>-1 && I>-1){
			double res1 = P/I;
			printf("U=%.2lfV\n", res1);
		}cout << endl;
	}
		
	return 0;
}
