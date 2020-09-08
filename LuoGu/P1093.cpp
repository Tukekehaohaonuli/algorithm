#include<cstdio>
struct student{
	int ch;
	int math;
	int english;
	int score=0;
	int classnum;
}stu[301];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d%d%d",&stu[i].ch,&stu[i].math,&stu[i].english);
		stu[i].score=stu[i].ch+stu[i].math+stu[i].english;
		stu[i].classnum=i;
	}
	student s;
	for(int i=1;i<n;i++){
		for(int j=i;j<=n;j++){
			if(stu[i].score<stu[j].score){
				s=stu[i];
				stu[i]=stu[j];
				stu[j]=s;
			}
		}
	}
	for(int i=1;i<n;i++){
		for(int j=i;j<=n;j++){
			if(stu[i].score==stu[j].score){
				if(stu[i].ch<stu[j].ch){
				s=stu[i];
				stu[i]=stu[j];
				stu[j]=s;
			}
			}
			else
			break;
		}
	}
	for(int i=1;i<n;i++){
		for(int j=i;j<=n;j++){
			if(stu[i].score==stu[j].score){
				if(stu[i].ch==stu[j].ch){
					if(stu[i].classnum>stu[j].classnum){
						s=stu[i];
						stu[i]=stu[j];
						stu[j]=s;
					}
				}
			}
			else
			break;
		}
	}
	for(int i=1;i<=5;i++){
		printf("%d %d\n",stu[i].classnum,stu[i].score);
	}
	return 0;
} 
