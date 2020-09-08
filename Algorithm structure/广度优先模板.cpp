
#include<stdio.h>
int main()
{
	int i,j,k,m,n,head,tail,count;
	int e[55][55],book[55] = {0};
	int que[3600];
	int inf=99999999;
	scanf("%d",&n);
	for(i = 0; i < n; i ++)
		for(j = 0; j < n; j ++)
			scanf("%d",&e[i][j]);
	head = 0;
	tail = 0;
	que[tail] = 0;
	book[0] = 1;
	tail ++;
	while(head < tail && tail <= n)
	{
		count = que[head];
		for(i = 0; i < n; i ++)
		{
			if(e[count][i] == 1 && book[i] == 0)
			{
				que[tail] = i;
				book[i] = 1;
				tail ++;
			}
			if(tail > n)
				break;
		}
		head ++;
		
	}
	for(i = 0; i < n; i ++)
			printf("%d ",que[i]);
		printf("\n");
	return 0;
}
