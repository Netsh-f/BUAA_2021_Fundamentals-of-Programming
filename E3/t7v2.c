#include<stdio.h>
#include<string.h>
int main(){
	char a[300000],ch[17]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	int n,p,bit[4];
	scanf("%d\n",&n);
	scanf("%s",a);
	int len=strlen(a);
	for(int i=0;i<len;i++){
		p=0;
		while(a[i]!=ch[p]){
			p++;
		}
		for(int j=0;j<4;j++){
			bit[j]=!(p&1);
			p>>=1;
		}
		for(int j=3;j>=0;j--){
			if(i==len-1&&j==0)
				printf("%d",!bit[j]);
			else
				printf("%d",bit[j]);
		}
	}
	return 0;
}
