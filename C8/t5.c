#include<stdio.h>
#include<stdlib.h>
int cmp(const void *p1,const void *p2){
	return *(int*)p1-*(int*)p2;
}
int main(){
	int t,n,a[1005],ab[1005],ar[1005],f;
	int cntb,cntr;
	char s[1005];
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		cntb=0; cntr=0; f=1;
		for(int i=0;i<n;i++)
			scanf("%d ",&a[i]);
		gets(s);
		for(int i=0;i<n;i++){
			if(s[i]=='B'){
				ab[cntb++]=a[i];
			}else if(s[i]=='R'){
				ar[cntr++]=a[i];
			}
		}
		qsort(ab,cntb,sizeof(int),cmp);
		qsort(ar,cntr,sizeof(int),cmp);
		for(int i=0;i<cntb;i++){
			if(ab[i]<i+1){
				f=0;
				break;
			}
		}
		for(int i=0;i<cntr;i++){
			if(f==0)
				break;
			if(ar[i]>cntb+1+i){
				f=0;
				break;
			}
		}
		if(f)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
