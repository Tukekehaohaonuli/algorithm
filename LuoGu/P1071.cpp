#include<cstdio>
#include<cstring>
char a[101],b[101],c[101];
char num[27];
int main(){
	scanf("%s",a);
	scanf("%s",b);
	scanf("%s",c);
	for(int i=0;i<strlen(a);i++){
		int mid=a[i]-'A';
		if(num[mid]=='\0')
		num[mid]=b[i];
		else{
			if(num[mid]==b[i])
			continue;
			else{
				printf("Failed");
				return 0;
			}
		}
	}
	for(int i=0;i<26;i++){
		if(num[i]=='\0'){
		printf("Failed");
		return 0;
	}
	}
	for(int i=0;i<strlen(num)-1;i++){
		if(num[i]=='\0')
		continue;
		for(int j=i+1;j<strlen(num);j++){
			if(num[j]=='\0')
			continue;
			if(num[i]==num[j]){
			printf("Failed");
			return 0;
			} 
		}
	}
	for(int i=0;i<strlen(c);i++){
		int mid=c[i]-'A';
		if(num[mid]=='\0')
		{
			printf("Failed");
			return 0;
	}
		else
		printf("%c",num[mid]);
	}
	return 0;
}
