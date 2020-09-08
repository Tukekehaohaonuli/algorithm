#include<cstdio>
#include<cstring>
char t[15];
char temp[1000005];
void tolower(char t[]){
	for(int i=0;t[i];i++){
		if(t[i]>='A'&&t[i]<='Z'){
			t[i]=t[i]-'A'+'a';
		}
	}
}
int main(){
	gets(t+1);
	gets(temp+1);
	t[0]=' ';
	temp[0]=' ';
	tolower(t);
	tolower(temp);
	int num=0,pos=-1;
	int len=strlen(t);
	int len2=strlen(temp);
	for(int i=0;temp[i];i++){
		int j;
		if(temp[i]==' '){
			for(j=1;j<len;j++){
				if(t[j]!=temp[j+i])
				break;
			}
			if(j==len&&(temp[j+i]==' '||i+j==len2)){
			num++;
			if(pos==-1)
		 	pos=i;
		 	}
		 	
		 	
	}
}
	if(num){
		printf("%d %d",num,pos);
	}
	else
	printf("-1");
	return 0;
}
