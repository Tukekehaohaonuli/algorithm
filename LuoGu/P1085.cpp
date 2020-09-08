#include<stdio.h>
int main()
{
    int school[7],extra[7];
    for(int i=0;i<7;i++){
    	scanf("%d%d",&school[i],&extra[i]);
	}
	int max=0,temp;
	for(int i=0;i<7;i++){
		if((school[i]+extra[i])>max){
			max=school[i]+extra[i];
			temp=i+1;
		}
	}
	printf("%d",temp);
	return 0;
}
