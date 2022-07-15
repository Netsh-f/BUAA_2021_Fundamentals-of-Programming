#include<stdio.h>
int main(){
	int mon=0,n,a[13],mama=0,yue=0;
	scanf("%d",&n);
	for(int j=0;j<n;j++){
		for(int i=1;i<=12;i++){
			yue++;
			scanf("%d",&a[i]);
			mon+=300;
			if(mon<a[i]){
				printf("%d",-yue);
				return 0;
			}
			mon-=a[i];
			if(mon>=100){
				mama+=mon/100*100;
				mon%=100;
			}
		}
		mon+=mama*1.2+0.5;
		mama=0;
	}
	printf("%d\n",mon);
	return 0;
}
