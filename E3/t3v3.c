#include<stdio.h>
#include<math.h>

int equal(int a1,int b1,int a2,int b2){
	return a1*b2==a2*b1;
}

int chong(int a1,int b1,int c1,int a2,int b2,int c2){
	return equal(a1,b1,a2,b2)&&equal(a1,c1,a2,c2);
}

int ping(int a1,int b1,int c1,int a2,int b2,int c2){
	return equal(a1,b1,a2,b2)&&!equal(a1,c1,a2,c2);
}

int main(){
	int n;
	scanf("%d",&n);
	for(int j=0;j<n;j++){
		int a[4],b[4],c[4];
		for(int i=1;i<=3;i++){
			scanf("%d",&a[i]);
			scanf("%d",&b[i]);
			scanf("%d",&c[i]);
		}
		double x1,y1,x2,y2;
		if(chong(a[1],b[1],c[1],a[2],b[2],c[2])&&chong(a[1],b[1],c[1],a[3],b[3],c[3])){
			printf("Could be a bug!\n");
		}else if(ping(a[1],b[1],c[1],a[2],b[2],c[2])||ping(a[1],b[1],c[1],a[3],b[3],c[3])||ping(a[2],b[2],c[2],a[3],b[3],c[3])){
			printf("A nice test data ~\n");
		}else if((chong(a[1],b[1],c[1],a[2],b[2],c[2])&&!ping(a[1],b[1],c[1],a[3],b[3],c[3]))||(chong(a[1],b[1],c[1],a[3],b[3],c[3])&&!ping(a[1],b[1],c[1],a[2],b[2],c[2]))||(chong(a[2],b[2],c[2],a[3],b[3],c[3])&&!ping(a[1],b[1],c[1],a[3],b[3],c[3]))){
			printf("Could be a bug!\n");
		}else{
			double p;
			p=(c[2]*a[1]-c[1]*a[2]);
			y1=p/(b[1]*a[2]-b[2]*a[1]);
			p=-(b[1]*y1+c[1]);
			x1=p/a[1];
			p=(c[3]*a[1]-c[1]*a[3]);
			y2=p/(b[1]*a[3]-b[3]*a[1]);
			p=-(b[1]*y2+c[1]);
			x2=p/a[1];
			if(fabs(x1-x2)<1e-3&&fabs(y1-y2)<1e-3){
				printf("Could be a bug!\n");
			}else{
				printf("A nice test data ~\n");
			}
		}
	}
	return 0;
}
