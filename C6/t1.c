#include<stdio.h>
int main(){
	double ac=0,sub=0;
	char s[5];
	while(scanf("%s",s) != EOF){
		if(s[0]=='C'&&s[1]=='E'){
			continue;
		}else if(s[0]=='A'&&s[1]=='C'){
			ac++;
			sub++;
		}else{
			sub++;
		}
	}
	printf("%.3f\n",ac/sub);
	return 0;
}
