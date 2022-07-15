#include<stdio.h>
#include<string.h>
int main(){
	char a[1000],ch[37]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	unsigned long long ans=0,n,m,p,t=1;
	scanf("%s%llu%llu",a,&n,&m);
	for(int i=strlen(a)-1;i>=0;i--){
		p=0;
		while(a[i]!=ch[p]){
			p++;
		}
		ans+=t*p;
		t*=n;
	}
	char mans[1000];
	int i=0;
	while(ans){
		mans[i]=ch[ans%m];
		ans/=m;
		i++;
	}
	for(i--;i>=0;i--){
		printf("%c",mans[i]);
	}
	printf("\n");
	return 0;
}
