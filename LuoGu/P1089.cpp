#include<stdio.h>
int main(){
	int month[12],remain=0,last=0,nowmonth;
	for(int i=0;i<12;i++){
		scanf("%d",&month[i]);
	}
	int k=0;
	while(k<12){
		nowmonth=300+last;
		if(nowmonth<month[k]){
			printf("-%d",k+1);
			return 0;
		}
		else{
			last=nowmonth-month[k];
			while(last>100){
			remain+=100;
			last=last-100;
			}
		}	
		k++;
	}
	remain=remain*1.2+last;
	
	printf("%d",(int)remain);
	return 0;
} 
