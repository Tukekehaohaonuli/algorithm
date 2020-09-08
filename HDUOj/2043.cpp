#include<cstdio>
bool isValue(char temp[]){
	for(int i=0;temp[i];i++){
		switch(temp[i]){
		case '~':return true;
		case '!':return true;
		case '@':return true;
		case '#':return true;
		case '$':return true;
		case '%':return true;
		case '^':return true; 
	}
}
	return false;
}
bool isA(char temp[]){
	for(int i=0;temp[i];i++){
		if(temp[i]>'a'&&temp[i]<'z')
		return true;
	}
	return false;
}
bool isa(char temp[]){
	for(int i=0;temp[i];i++){
		if(temp[i]>'A'&&temp[i]<'Z')
		return true;
	}
	return false;
}
bool isnum(char temp[]){
	for(int i=0;temp[i];i++){
		if(temp[i]>'0'&&temp[i]<'9')
		return true;
	}
	return false;
} 
int main(){
	int n;
	scanf("%d%*c",&n);
	char temp[51];
	while(n--){
		gets(temp);
		int ans=0;
		if(isValue(temp))ans++;
		if(isA(temp))ans++;
		if(isa(temp))ans++;
		if(isnum(temp))ans++;
		printf("%s\n",ans>=3?"YES":"NO");
	}
	return 0;
}
