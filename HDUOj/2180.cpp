#include<cstdio>
int main(){
	int a,b,s,t;
	while(scanf("%d%d%d%d",&a,&b,&s,&t),a||b||s||t){
		int ans=0;
		double angleh=a+b/5.0;
		double anglem=b/5;
		for(int i=a;i<b;i++){
			int start=(i==a?b:0);
			for(int j=start;j<=60;j++){
				if(angleh==anglem)
				ans++;
				angleh+=1.0/60;
				anglem+=1.0/5;
			}
		}
		for(int i=0;i<=t;i++){
			if(angleh==anglem)
				ans++;
				angleh+=1.0/60;
				anglem+=1.0/5;
		}
		if(angleh==anglem)
				ans++;
		printf("%d\n",ans);
	}
	return 0;
}
