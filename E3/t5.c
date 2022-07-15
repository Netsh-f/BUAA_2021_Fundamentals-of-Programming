#include<stdio.h>
int main(){
	int n,k,x[100001];
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++){
		scanf("%d",&x[i]);
	}
	int min,max,k1=1,cnt=1,s=1; 
	while(1){
		if(k1==1){
			min=x[cnt];
			max=x[cnt];
		}
		if(x[cnt]<min)
			min=x[cnt];
		if(x[cnt]>max)
			max=x[cnt];
		if(cnt==n&&k1<k){
			printf("%d\n",min);
			break;
		}
		if((k1==k&&n-cnt>=k)||cnt==n){
			k1=1;
			printf("%d\n",min);
			x[s]=max;
			if(cnt==n){
				n=s;
				cnt=1;
				s=1;
			}else{
				s++;
				cnt++;
			}
		}else{
			k1++;
			cnt++;
		}
	}
	return 0;
}
