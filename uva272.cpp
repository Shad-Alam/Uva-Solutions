#include <bits/stdc++.h>

using namespace std;

int main()
{
    string i; int c=0;
    while(getline(cin,i)){
        string::iterator a=i.begin();
        for( ; a!=i.end(); a++){
            if(*a=='"'){
                c++;
                if(c%2==1){
                    cout << "`" << "`";
                }else{
                    cout << "'" << "'";
                }
            }else{
                cout << *a;
            }
        }cout << endl;
    }

	return 0;
}
