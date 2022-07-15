#include<stdio.h>
#include<math.h>

long long gcd(long long a,long long b){
	int t;
	if(a<b){
		t=a;
		a=b;
		b=t;
	}
	while(b){
		t=a%b;
		a=b;
		b=t;
	}
	return a;
}

long long gcdp(long long a,long long b){
	return (a/gcd(a,b))*b;
}

int main(){
	long long a,b,c,d,e,f;
	int z1,z2;
	while(~scanf("%lld/%lld %lld/%lld",&a,&b,&c,&d)){
		z1=1;
		z2=1;
		if(a<0){
			z1=-z1;
			a=-a;
		}
		if(c<0){
			z2=-z2;
			c=-c;
		}
		a=a/gcd(a,b);
		b=b/gcd(a,b);
		c=c/gcd(c,d);
		d=d/gcd(c,d);
		e=z1*a*d+z2*b*c;
		f=b*d;
		printf("%lld/%lld\n",e/gcd(e>0?e:-e,f),f/gcd(e>0?e:-e,f));
	}
	return 0;
}
