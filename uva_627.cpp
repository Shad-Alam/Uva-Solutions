#include <bits/stdc++.h>

using namespace std;

map<int,vector<int>> graph;
map<int,bool> visit;
map<int,int> parent;

void bfs(int source){
    visit[source] = true;
    parent[source] = 0;

    queue<int> s;
    s.push(source);

    while(!s.empty()){
        int node = s.front();
        s.pop();

        for(int a=0; a<graph[node].size(); a++){
            int next = graph[node][a];
            if(visit[next]==false){
                visit[next] = true;
                parent[next] = node;
                s.push(next);
            }
        }
    }
}

vector<int> v;
bool printpath(int source,int destination){
    if(source==destination){
        v.push_back(source);
        return true;
    }else{
        if(parent[destination]==0){
            return false;
        }else{
            v.push_back(destination);
            return printpath(source,parent[destination]);
        }
    }
}

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n,m,n1; string s;
    int source,destination;

    while(scanf("%d",&n)!=EOF){
        while(n--){
            cin >> n1 >> s;
            string i = "";
            for(int a=0; s[a]; a++){
                if(s[a]>='0' && s[a]<= '9' && s[a]!=','){
                    i+=s[a];
                }else{
                    if(i.size()>0){
                        int sum=0;
                        for(int b=0; i[b]; b++){
                            stringstream ss; int n2;
                            ss << i[b];
                            ss >> n2;
                            sum = (sum*10) + n2;
                        }graph[n1].push_back(sum);
                        i="";
                    }
                }
            }
            if(i.size()>0){
                int sum=0;
                for(int b=0; i[b]; b++){
                    stringstream ss; int n2;
                    ss << i[b];
                    ss >> n2;
                    sum = (sum*10) + n2;
                }graph[n1].push_back(sum);
            }
        }
        scanf("%d",&m);
        cout << "-----" << endl;
        while(m--){
            cin >> source >> destination;
            bfs(source);
            if(printpath(source,destination)){
                for(int a=v.size()-1; a>=0; a--){
                    if(a==0){
                        cout << v[a] << endl;
                        break;
                    }cout << v[a] << " ";
                }
            }else{
                cout << "connection impossible" << endl;
            }v.clear();
            visit.clear();
            parent.clear();
        }graph.clear();
    }

    return 0;
}

