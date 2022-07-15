#include<stdio.h>
int isPrime[100000010]={0};
int Prime[6000010],cnt=0,vis[6000010]={0};
void getPrime(int n){
	isPrime[1]=1;
	for(int i=2;i<=n;i++){
		if(!isPrime[i])
			Prime[++cnt]=i;
		for(int j=1;j<=cnt&&i*Prime[j]<=n;j++){
			isPrime[i*Prime[j]]=1;
			if(i%Prime[j]==0)
				break;
		}
	}
}
int main(){
	long long n,i=1,nt;
	scanf("%lld",&n);
	nt=n;
	getPrime(n);
	while(n!=1){
		if(n%Prime[i]==0){
			vis[i]=1;
			n/=Prime[i];
			if(n==1)
				break;
			i=1;
		}else{
			i++;
		}
	}
	for(int j=1;j<=i;j++){
		if(vis[j]){
			nt=nt*(Prime[j]-1)/Prime[j];
		}
	}
	printf("%lld\n",nt);
}
