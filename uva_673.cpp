#include <bits/stdc++.h>

using namespace std;

#define ORR ||

bool source(string i,int n){
    stack<char> v;
    for(int a=0; a<n; a++){
        if(i[a]=='(' ORR i[a]=='['){
            v.push(i[a]);
        }else{
            if(i[a]==')'){
                if(v.empty() ORR v.top()=='[' ORR v.top()==']' ORR v.top()==')'){
                    return false;
                }else if(v.top()=='('){
                    v.pop();
                }
            }else if(i[a]==']'){
                if(v.empty() ORR v.top()=='(' ORR v.top()==')' ORR v.top()==']'){
                    return false;
                }else if(v.top()=='['){
                    v.pop();
                }
            }
        }
    }return v.empty() ? true : false;
}

int main()
{
    string i; int n;

    cin >> n;
    getchar();
    while(n--){
        getline(cin,i);
        cout << (source(i,i.size()) ? "Yes" : "No") << endl;
    }

    return 0;
}

