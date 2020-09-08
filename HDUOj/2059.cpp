#include<cstdio>
int main(){
	int l,n,c,t,vr,vt1,vt2;
	int temp[101];
	int nowdistance,circle;
	float ctime,ntime;
	while(scanf("%d%d%d%d%d%d%d",&l,&n,&c,&t,&vr,&vt1,&vt2)!=EOF){
		for(int i=0;i<n;i++)
		scanf("%d",&temp[i]);
		float rtime=0,wtime=0;
		rtime=l*1.0/vr;
		if(temp[0]<=c)
		{	wtime+=temp[0]*1.0/vt1;
			circle=c-temp[0];
		}
		else
		{	wtime+=c*1.0/vt1+(temp[0]-c)*1.0/vt2;
			circle=0;
		}
		for(int i=0;i<n;i++){
			if(i<n-1){
				nowdistance=temp[i+1]-temp[i];
				ntime=(circle)*1.0/vt1+(nowdistance-circle)*1.0/vt2;
				if(nowdistance<=c){
					ctime=t+nowdistance*1.0/vt1;
					circle=c-nowdistance;
				}
				else{
					ctime=t+c*1.0/vt1+(nowdistance-c)*1.0/vt2;
					circle=0;
				}
				if(ntime<ctime){
					wtime+=ntime;
					circle-nowdistance>0?circle-nowdistance:0;
				}
				else
				 {wtime+=ntime;
				 }
			}
			if(i==n-1){
				nowdistance=l-temp[i];
				ntime=(circle)*1.0/vt1+(nowdistance-circle)*1.0/vt2;
				if(nowdistance<=c){
					ctime=t+nowdistance*1.0/vt1;
					circle=c-nowdistance;
				}
				else{
					ctime=t+c*1.0/vt1+(nowdistance-c)*1.0/vt2;
					circle=0;
				}
				if(ntime<ctime){
					wtime+=ntime;
					circle-nowdistance>0?circle-nowdistance:0;
				}
				else
				 {wtime+=ntime;
				 }
			}
		}
		if(wtime<ntime){
			printf("What a pity rabbit!\n");
		}
		else
		printf("Good job,rabbit!\n");
	}
	return 0;
} 
