#include<stdio.h>
#include<stdlib.h>
int isPrime[100000005];
int prime[6000005],cnt=0;
#define N 10005

void getPrime(int n){
	isPrime[1]=1;//0是质数，1不是质数 
	for(int i=2;i<=n;i++){
		if(!isPrime[i])
			prime[++cnt]=i;
		for(int j=1;j<=cnt&&i*prime[j]<=n;j++){
			isPrime[i*prime[j]]=1;
			if(i%prime[j]==0)
				break;
		}
	}
}

int comp_int(const void *p1,const void *p2){
	return *(int*)p1-*(int*)p2;
}

int main(){
	int x;
	scanf("%d",&x);
	getPrime(N);
	int L=1,R=cnt,ans=0;
	while(L<=R){
		int mid=(L+R)>>1;
		if(prime[mid]==x){ans=mid;break;}
		else if(x<prime[mid]) R=mid-1;
		else L=mid+1; 
	}
	printf("ans = %d\n",ans);
	if(bsearch(&x,prime,cnt,sizeof(int),comp_int)!=NULL){
		printf("%d is a prime\n",x);
	}else{
		printf("%d is not a prime\n",x);
	}
	return 0;
}
