#include<stdio.h>
#include<string.h>
int main(){
	char a[100],buf[100];
	int x,y;
	while(scanf("%s",buf)!=EOF){
		if(sscanf(buf,"&a[%d]+%d",&x,&y)==2)
			printf("0x%08x\n",4*(x+y));
		else if(sscanf(buf,"&a[%d]",&x)==1)
			printf("0x%08x\n",x*4);
		else if(strcmp(buf,"&a")==0)
			printf("0x%08x\n",0);
		else if(sscanf(buf,"&a+%d",&y)==1)
			printf("0x%08x\n",y*400);
		else if(sscanf(buf,"a+%d",&y)==1)
			printf("0x%08x\n",y*4);
		else if(strcmp(buf,"a")==0)
			printf("0x%08x\n",0);
	}
	return 0;
}
