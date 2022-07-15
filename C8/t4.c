#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct sen{
	int len;
	char *p;
};
char s[100010][1005];
int cmp(const void *p1,const void *p2){
	return ((struct sen*)p1)->len-((struct sen*)p2)->len;
}
int main(){
	int cnt=0;
	struct sen sent[10010];
	while(gets(s[cnt++])!=NULL){
		sent[cnt].len=strlen(s[cnt]);
		sent[cnt].p=s[cnt];
	}
	qsort(sent,cnt,sizeof(struct sen),cmp);
	printf("\n\n\n\n\n\n");
	for(int i=1;i<=20;i++){
		printf("%s\n",sent[i].p);
	}
	return 0;
}
