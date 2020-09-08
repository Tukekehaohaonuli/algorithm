#include<cstdio>
int graph[51][51];
int visited[51];
int queue[51];
int front,rear;
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&graph[i][j]);
		}
	}
	queue[rear++]=0;
	visited[0]=1;
	int count=0;
	while(front<rear){
		count=queue[front++];
		for(int i=0;i<n;i++){
			if(!visited[i]&&graph[count][i]==1){
				queue[rear++]=i;
				visited[i]=1;
			}
			if(rear>n)
			break;
		}
	}
	for(int i=0;i<n;i++)
	printf("%d",queue[i]);
	return 0;
}
