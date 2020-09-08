#include<cstdio>
bool isValue(int n){
	int old,ne;
	ne=n%10;
	n=n/10;
	int value=-1;
	while(n>10){
		
		old=ne;
		ne=n%10;
		n=n/10;
		if(value==-1){
			if(old==ne+1)
			value=1;
			else if(old+1==ne)
			value =0;
			else return false;
		}
		else{
			if(value==1&&(old!=ne+1))
			return false;
			if(value==0&&(ne!=old+1))
			return false;
		}
	}
	old=ne;ne=n;
			if(value==1&&(old!=ne+1))
			return false;
			if(value==0&&(ne!=old+1))
			return false;	
	return true;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b;
		scanf("%d%d",&a,&b);
		int ans=0;
		int i=a>=10?a:10; 
		for(i;i<=b;i++)
		if(isValue(i))
		ans++;
		printf("%d\n",ans);
	}
	return 0;
	
}
