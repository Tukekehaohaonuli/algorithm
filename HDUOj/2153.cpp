#include<cstdio>
int dir[][2]={{0,1},{1,0},{0,-1},{-1,0}};
int map[11][11];
int n;
int main(){
	
	scanf("%d",&n);
	int k=2;
	int x=0,y=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1;j++){
			x=x+dir[i][0];
			y=y+dir[i][1];
			map[x][y]=k++;
		}
	}
	map[0][0]=1;
	char c=' ';
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(map[i][j])
			printf("%-3d",map[i][j]);
			else
			printf("%3c",c);
		}
		printf("\n");
	}
	return 0;
}
