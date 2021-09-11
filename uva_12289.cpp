#include <bits/stdc++.h>

using namespace std;

int main()
{
    char i[] = "one",j[] = "two",k[] = "three";

    char x[100]; int n;


    cin >> n;

    while(n--)
    {
        scanf("%s",x);
        int len = strlen(x);

        if(len == 3)
        {
            int c=0;
            for(int a=0; a<len; a++){
                if(i[a]==x[a]){
                    c++;
                }
            }
            if(c==2 || c==3){
                cout << "1" << endl;
            }else
            {
                int c1=0;
                for(int a=0; a<len; a++){
                    if(j[a]==x[a]){
                        c1++;
                    }
                }
                if(c1==2 || c1==3){
                    cout << "2" << endl;
                }
            }
        }else if(len == 5)
        {
            int c2=0;
            for(int a=0; a<len; a++){
                if(k[a]==x[a]){
                    c2++;
                }
            }if(c2==4 || c2==5){
                cout << "3" << endl;
            }
        }
    }

	return 0;
}








/*
int MOD;

bool cmp(const int& a, const int& b)
{
	int m = a % MOD;
	int n = b % MOD;

	if(m != n)
        return m < n;

	if(abs(a)%2 != abs(b)%2)
        return abs(a)%2 > abs(b)%2;

	if(abs(a)%2 == 1)
        return a > b;

	return a < b;
}

int main()
{
	int N;
	while(cin >> N >> MOD) {
		cout << N << " " << MOD << endl;
		if(N == 0 && MOD == 0)
            break;

		vector<int> v(N);
		for(int i=0; i < N; i++)
			cin >> v[i];


		sort(v.begin(), v.end(), cmp);

		for(int i=0; i<N; i++) {
			cout << v[i] << endl;
		}
	}

}*/
/*
........................................
#include <bits/stdc++.h>

using namespace std;

#define PIX 20000
#define AND &&
#define ORR ||

int main()
{
    int i[PIX],N,M; vector<int> j[PIX];

    for(int ss=0; ss<20; ss++){
        cin >> N >> M; int n1 = N,m1 = M;
        if(N==0 AND M==0){
            cout << N << " " << M << endl;
            break;
        }

        while(N--){
            int p; cin >> p; int s = p%M;
            j[s].push_back(p);
        }
        cout << n1 << " " << m1 << endl;
        for(int a=0; a<3; a++){
            int n1 = j[a].size();

            sort(j[a],j[a]+n1);
            for(int b=0; b<n1-1; b++){
                for(int c=0; c<n1-b-1; c++){
                    if(j[a][b]>j[a][b+1]){
                        int sw = j[a][b];
                        j[a][b] = j[a][b+1];
                        j[a][b+1] = sw;
                    }
                }
            }

            for(int b=n1-1; b>=0; b--){
                if(j[a][b]%2==1){
                    cout << j[a][b] << "\n";
                }
            }

            for(int b=0; b<n1; b++){
                if(j[a][b]%2==0){
                    cout << j[a][b] << "\n";
                }
            }
        }
    }


	return 0;
}
*/

