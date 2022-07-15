#include<stdio.h>
#include<math.h>

inline int equal(double a1,double b1,double a2,double b2){
	return fabs(a1*b2-a2*b1)<1e-6;
}

inline int chong(double a1,double b1,double c1,double a2,double b2,double c2){
	return equal(a1,b1,a2,b2)&&equal(a1,c1,a2,c2);
}

inline int ping(double a1,double b1,double c1,double a2,double b2,double c2){
	return equal(a1,b1,a2,b2)&&!equal(a1,c1,a2,c2);
}

int main(){
	int n;
	scanf("%d",&n);
	for(int j=0;j<n;j++){
		double a[4],b[4],c[4];
		for(int i=1;i<=3;i++){
			scanf("%lf",&a[i]);
			scanf("%lf",&b[i]);
			scanf("%lf",&c[i]);
		}
		double x1,y1,x2,y2;
		if(chong(a[1],b[1],c[1],a[2],b[2],c[2])&&chong(a[1],b[1],c[1],a[3],b[3],c[3])){
			printf("Could be a bug!\n");
		}else if(ping(a[1],b[1],c[1],a[2],b[2],c[2])||ping(a[1],b[1],c[1],a[3],b[3],c[3])||ping(a[2],b[2],c[2],a[3],b[3],c[3])){
			printf("A nice test data ~\n");
		}else if((chong(a[1],b[1],c[1],a[2],b[2],c[2])&&!ping(a[1],b[1],c[1],a[3],b[3],c[3]))||(chong(a[1],b[1],c[1],a[3],b[3],c[3])&&!ping(a[1],b[1],c[1],a[2],b[2],c[2]))||(chong(a[2],b[2],c[2],a[3],b[3],c[3])&&!ping(a[1],b[1],c[1],a[3],b[3],c[3]))){
			printf("Could be a bug!\n");
		}else{
			y1=(c[2]*a[1]-c[1]*a[2])/(b[1]*a[2]-b[2]*a[1]);
			x1=-(b[1]*y1+c[1])/a[1];
			y2=(c[3]*a[1]-c[1]*a[3])/(b[1]*a[3]-b[3]*a[1]);
			x2=-(b[1]*y2+c[1])/a[1];
			if(fabs(x1-x2)<1e-6&&fabs(y1-y2)<1e-6){
				printf("Could be a bug!\n");
			}else{
				printf("A nice test data ~\n");
			}
		}
	}
	return 0;
}
