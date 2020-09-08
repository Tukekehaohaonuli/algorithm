#include<cstdio>
int main(){
	int n;
	float temp;
	int a=0,b=0,c=0;
	scanf("%d",&n);
	while(n!=0){
		for(int i=0;i<n;i++){
		scanf("%f",&temp);
		if(temp<0)
		a++;
		else if(temp==0)
		b++;
		else
		c++;
	}
	printf("%d %d %d\n",a,b,c);
	a=b=c=0;
	scanf("%d",&n);
	}
	return 0;
}
