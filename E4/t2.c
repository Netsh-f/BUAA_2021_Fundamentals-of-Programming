#include<stdio.h>
int main(){
	int x,num=0,max=-1,min=101,maxn,minn,tub[101]={0};
	double sum=0;
	while(1){
		scanf("%d",&x);
		if(x==-1)
			break;
		if(x>=0&&x<=100){
			num++;
			tub[x]++;
			sum+=x;
			if(x>=max){
				max=x;
				maxn=num;
			}
			if(x<=min){
				min=x;
				minn=num;
			}
		}
	}
	int mode,modex=0;
	for(int i=0;i<=100;i++){
		if(tub[i]>=modex){
			modex=tub[i];
			mode=i;
		}
	}
	printf("count: %d\n",num);
	printf("ave: %.4f\n",sum/num);
	printf("max: %d: %d\n",maxn,max);
	printf("min: %d: %d\n",minn,min);
	printf("mode: %d\n",mode);
	return 0;
}
