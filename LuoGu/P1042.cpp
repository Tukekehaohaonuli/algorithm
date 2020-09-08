#include<cstdio>
#include<cmath>
int num1[100001],num2[100001];
int main(){
	char c;
	int num21=0;
	int a=0,b=0;
	while(c=getchar()){
		if(c=='E')
		break;
		if(c=='\n')
		continue;
		if(c=='W')
		{ a++;num1[num21]++;}
		else
		{	b++; num2[num21]++;}
		if(a-b>=2||b-a>=2){
			if(a>=11||b>=11){
			printf("%d:%d\n",a,b);
			a=b=0;
		}
		}
		if(abs(num1[num21]-num2[num21])>=2)
		if(num1[num21]>=21||num2[num21]>=21)
			num21++;
	}
	if(a!=0||b!=0)
	printf("%d:%d\n",a,b);
	printf("\n");
	for(int i=0;i<num21;i++){
		printf("%d:%d \n",num1[i],num2[i]);
	}
	if(num1[num21]!=0||num2[num21]!=0)
	printf("%d:%d\n",num1[num21],num2[num21]);
	return 0;
}
