#include<cstring>
#include<cstdio>
#include<iostream>
bool isPrime[100000010];
int Prime[6000010],cnt=0;
void getPrime(int n){
	memset(isPrime,1,sizeof(isPrime));
	isPrime[1]=0;
	for(int i=2;i<=n;i++){
		if(isPrime[i])
			Prime[++cnt]=i;
		for(int j=1;j<=cnt&&i*Prime[j]<=n;j++){
			isPrime[i*Prime[j]]=0;
			if(i%Prime[j]==0)
				break;
		}
	}
}

int main(){
	int n,q,k;
	scanf("%d%d",&n,&q);
	getPrime(n);
	for(int i=0;i<q;i++){
		scanf("%d",&k);
		printf("%d\n",Prime[k]);
	}
	return 0;
}
