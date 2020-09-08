#include<cstdio>
typedef unsigned long ul;
ul ged(ul a,ul b){
	if(a%b){
		ged(b,a%b);
	}
	else{
		return b;
	}
}
ul gud(ul a,ul b){
	return a*b/ged(a,b);
}
int main(){
	int n;
	ul num;
	while(scanf("%d",&n)!=EOF){
		ul ans=1; 
		for(int i=0;i<n;i++){
			scanf("%lu",&num);
			ans=gud(ans,num);
		}	 
		printf("%lu\n",ans);
	}
	return 0;
}
