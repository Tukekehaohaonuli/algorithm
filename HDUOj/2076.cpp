#include<cstdio>
int main(){
	double hour,min,sec;
	int n;
	scanf("%d",&n);
	while(n--){
		scanf("%lf%lf%lf",&hour,&min,&sec);
		if(hour>12)
		hour-=12;
		double hourc=hour*30+min*0.5+sec/120.0;
		double minc=(min+sec/60)/5*30;
		int ans;
		if(hourc>minc){
			if(hourc-minc>180)
			ans=(int )(360-hourc+minc);
			else
			ans=(int )(hourc-minc);
		}
		else{
		if(minc-hourc>180)
		ans=(int )(360-minc+hourc);
		else
		ans=(int )(minc-hourc);
	}
		printf("%d\n",ans);
	}
	return 0;
} 
