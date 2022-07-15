#include<stdio.h>
#include<string.h>

int isPrime[100000010];
int Prime[60000010],cnt=0;
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
	int l=300,sum=0,cnt=0;
//	scanf("%d",&l);
	getPrime(40000000);
	while(sum<l){
		sum+=Prime[++cnt];
	}
	printf("%d",cnt-1);
	return 0;
}
