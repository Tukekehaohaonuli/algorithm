#include<cstdio>
#include<ctime>
#include<cstdlib>
int main(){
	srand((int )time(0));
	int key=rand()%10+1;
	int guess=0,count=10;
	while(count){
		scanf("%d",&guess);
		if(guess<key){
			printf("xiaole");
			count--;
		}
		else if(guess==key){
			printf("duile");
			return 0;
		}
		else{
			printf("dale");
			count--;
		}
	}
	printf("bye");
	return 0;
} 
