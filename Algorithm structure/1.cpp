#include<stdio.h>
double s=0;
int n=0;
int func(double s,int k){
	if(s>k){
		return n;
	}
	n++;
	s=s+1.0/n;
	return func(s,k);
}
int main(){
	int k;
	scanf("%d",&k);
	n=func(s,k);
	printf("%d",n);
	return 0;
}

