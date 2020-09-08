#include<stdio.h>
int main(){
	int x,n;
	scanf("%d%d",&x,&n);
	int sum=0;
	while(n>0){
		if(x==6){
			x++;
			n--;
			continue;
		}
		if(x==7){
			x=1;
			n--;
			continue;
		}
		sum+=250;
		n--;
		x++;
	}
	printf("%d",sum);
}
