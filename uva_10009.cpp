#include <bits/stdc++.h>

using namespace std;

map<string,vector<string>> graph;
map<string,bool> visit;
map<string,string> parent;

void bfs(string source){
    visit[source] = true;
    parent[source] = "";

    queue<string> s;
    s.push(source);

    while(!s.empty()){
        string node = s.front();
        s.pop();

        for(int a=0; a<graph[node].size(); a++){
            string next = graph[node][a];
            if(visit[next]==false){
                visit[next] = true;
                parent[next] = node;
                s.push(next);
            }
        }
    }
}

string sssp = "";
bool printpath(string source,string destination){
    if(source==destination){
        sssp+=source[0];
        return true;
    }else{
        if(parent[destination]==""){
            return false;
        }else{
            sssp+=destination[0];
            return printpath(source,parent[destination]);
        }
    }
}

int main()
{
    int m,n,t;

    cin >> t;

    bool mark = false;
    while(t--){
        cin >> m >> n;

        string n1,n2;
        for(int a=0; a<m; a++){
            cin >> n1 >> n2;
            graph[n1].push_back(n2);
            graph[n2].push_back(n1);
        }
        if(mark==true)
            cout << endl;

        while(n--){
            visit.clear();
            parent.clear();
            string n3,n4;
            cin >> n3 >> n4;
            bfs(n3);
            if(printpath(n3,n4)){
                for(int a=sssp.size()-1; a>=0; a--){
                    cout << sssp[a];
                }cout << endl;
                sssp="";
            }
        }graph.clear();
        mark = true;
    }

    return 0;
}

