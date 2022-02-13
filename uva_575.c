#include <stdio.h>
#include <math.h>
#include <string.h>

int source(char c){
	if(c=='1'){
		return 1;
	}else if(c=='2'){
		return 2;
	}else if(c=='3'){
		return 3;
	}else if(c=='4'){
		return 4;
	}else if(c=='5'){
		return 5;
	}else if(c=='6'){
		return 6;
	}else if(c=='7'){
		return 7;
	}else if(c=='8'){
		return 8;
	}else if(c=='9'){
		return 9;
	}else{
		return 0;
	}
}

int main(){
	char i[1000];
	
	while(scanf("%s",i)){
		if(i[0]=='0'){
			break;
		}
		int n = strlen(i);
		double c= (double) n;
		int sm = 0;
		for(int a=0; i[a]; a++){
			int port = source(i[a]);
			double s = pow(2,c);
			int pw = (int) s;
			sm+=(port*(pw-1));
			c--;
		}printf("%d\n", sm);
	}
    return 0;
}

