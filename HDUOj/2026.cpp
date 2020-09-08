#include<cstdio>
int main(){
	char temp[101];
	while(gets(temp)){
		temp[0]=temp[0]-32;
		for(int i=1;temp[i];i++){
			if(temp[i-1]==' '){
				temp[i]=temp[i]-32;
			}
		}
		puts(temp);
	}
	return 0;
}
