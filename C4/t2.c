#include<stdio.h>
int main(){
	int t,y,m;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d%d",&y,&m);
		switch(m){
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				printf("31\n");
				break;
			case 2:
				if((y%4==0&&y%100!=0)||(y%400==0))
					printf("29\n");
				else
					printf("28\n");
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				printf("30\n");
		}	
	}
	return 0;
}
