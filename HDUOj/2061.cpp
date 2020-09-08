#include<cstdio>
int main(){
	int n,k;
	double credit,num;
	char temp[31];
	scanf("%d",&n);
	while(n--){
		scanf("%d%*c",&k);
			float tlc=0;
			float totolnum=0;
			int value=0;
		while(k--){
			scanf("%s%lf%lf",&temp,&credit,&num);
			if(num<60)
			value++;
			totolnum+=credit*num;
			tlc+=credit;
		}
		if(value>0)
		printf("Sorry!\n");
		else
		printf("%.2f\n",totolnum/tlc);
		printf("\n");
	}
	return 0;
}
