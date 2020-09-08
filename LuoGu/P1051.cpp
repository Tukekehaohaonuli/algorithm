#include<cstdio>
struct student{
	char name[21];
	int score;
	int classscore;
	char cs;
	char iswest;
	int paper;
	int sum=0;
}stu[101];
int main(){
	int endnum=0,max=0,maxi=0;
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s%d%d%*c%c%*c%c%d",&stu[i].name,&stu[i].score,&stu[i].classscore,&stu[i].cs,&stu[i].iswest,&stu[i].paper);
		if(stu[i].score>80){
			if(stu[i].paper>=1)
			stu[i].sum+=8000;
			if(stu[i].score>85&&stu[i].classscore>80)
			stu[i].sum+=4000;
			if(stu[i].score>90)
			stu[i].sum+=2000;
			if(stu[i].score>85&&stu[i].iswest=='Y')
			stu[i].sum+=1000;
		}
		if(stu[i].cs=='Y'&&stu[i].classscore>80)
			stu[i].sum+=850;
		if(stu[i].sum>max){
				max=stu[i].sum;
				maxi=i;
			}
			endnum+=stu[i].sum;
	}
	printf("%s\n%d\n%d",stu[maxi].name,max,endnum);
	return 0;
}
