#include<stdio.h>
#include<stdlib.h>
struct node{
	int a[11];
	int cnt;
	int num;
};
int cmp(const void *p1,const void *p2){
	struct node c=*(struct node*)p1;
	struct node d=*(struct node*)p2;
	if(c.a[c.cnt]>d.a[d.cnt]){
		return c.cnt%2==0?1:-1;
	}else if(c.a[c.cnt]<d.a[d.cnt]){
		return c.cnt%2==0?-1:1;
	}else{
		c.cnt++; d.cnt++;
		return cmp(&c,&d);
	}
}
int main(){
	int n,k;
	struct node b[1005];
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++){
			scanf("%d",&b[i].a[j]);
		}
		b[i].cnt=0;
		b[i].num=i;
	}
	qsort(b,n,sizeof(struct node),cmp);
	for(int i=0;i<n;i++){
		printf("%d ",b[i].num+1);
	}
	return 0;
}
