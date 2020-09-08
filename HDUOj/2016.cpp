 #include<cstdio>
 int main(){
 	int n,min;
 	int temp[101];
 	int mini;
 	int num;
 	while(scanf("%d",&n),n){
 		for(int i=0;i<n;i++){
 			scanf("%d",&temp[i]);
 			if(i==0){
 				min=temp[i];
 				mini=i;
			 }
			 else{
				 if(temp[i]<min){
				 	min=temp[i];
				 	mini=i;
				 }
			 }
		 }
		 num=temp[mini];
		 temp[mini]=temp[0];
		 temp[0]=num;
		 for(int i=0;i<n;i++)
		 printf("%d%c",temp[i],i<(n-1)?' ':'\n');
	 }
	 return 0;
 }
