#include<stdio.h>

int palindrome_number(int y,int m,int d){
	return y/1000==d%10&&(y/100)%10==d/10&&(y/10)%10==m%10&&y%10==m/10;
}

int leap_year(int y){
	return (y%100!=0&&y%4==0)||(y%400==0);
} 

int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int y,m,d,cnt=1,f=0;
		y=n/10000;
		m=(n/100)%100;
		d=n%100+17;
		for(;y<=9999;y++){
			for(;;m++){
				for(;;){
					if(palindrome_number(y,m,d)){
						f=1;
						break;
					}
					if(d==31&&(m==1||m==3||m==5||m==7||m==8||m==10||m==12)){
						d=1;
						cnt++;
						break;
					}else if(d==30&&(m==4||m==6||m==9||m==11)){
						d=1;
						cnt++;
						break;
					}else if(d==29&&m==2&&!leap_year(y)){
						d=1;
						cnt++;
						break;
					}else if(d==28&&m==2&&leap_year(y)){
						d=1;
						cnt++;
						break;
					}
					cnt++;
					d++;
				}
			if(f)
				break;
			if(m==12){
				m=1;
				break;
			}
			}
		if(f)
			break;
		}
		if(f){
			printf("%d\n",cnt);
		}else{
			printf("-1\n");
		}
	}
	return 0;
}
