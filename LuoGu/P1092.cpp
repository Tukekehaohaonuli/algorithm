#include<cstdio>
char e1[27];
char e2[27];
char e3[27];
int value[27]={1,0,3,4,2};
int visited[27];  //已选择字母对应的数字 
int visite[27];   //已选择数字对应的字母; 
int n;
int ans[27];
bool isequal(){
	int next=0;
	for(int i=n-1;i>=0;i--){
		int a=value[e1[i]-'A']+value[e2[i]-'A']+next;
		int b=value[e3[i]-'A'];
		next=0;
		while(a>=n){
			a=a-n;
			next++;
		}
		if(a!=b)
		return false;
	}
	if(next==0)
	return true;
	else return false;
}
void dfs(int dept){
	if(dept==5){
		if(isequal()){
			for(int i=0;i<n;i++)
			ans[i]=value[i];
	}
	}
	else{
		for(int i=0;i<n;i++){
			if(visited[i]==1)
			continue;
			visited[i]=1;
			for(int j=0;j<n;j++){
				if(visite[j])
				continue;
				value[i]=j;
				visite[j]=1;
				dfs(dept+1);
				visite[j]=0;
			}
			visited[i]=0;
		}
	}
}
int main(){
	scanf("%d",&n);
	scanf("%s%s%s",e1,e2,e3);
	dfs(0);
//	if(isequal())
//	printf("------------");
	for(int i=0;i<n;i++)
	printf("%d ",ans[i]);
	return 0;
}

