#include<cmath>
#include<iostream>
using namespace std;
int main(){
    FILE *fp=NULL;
    fp=fopen("d:\\input.txt","r+");
    FILE *out =fopen("d:\\output.txt","w");
    if(fp==NULL){
        cout<<"打开文件失败"<<endl;
    }
    int ans;
    fscanf(fp,"%d" ,&ans);
    cout <<ans<<endl;
    int i,j,count;
    int high,low,middle;
    
    int a[10] = {0};//初始化数组，用来统计0-9的个数
    int number = ans;//要统计的数字，可以是任意大于0的数
    count = (int)log10(number)+1;//统计一共几位
    for(i = 1;i <= count;i++){
        high = number / pow(10,i);//取出middle的左边的数
        low = number % (int)pow(10,i-1);//取出middle的右边的数
        middle = number / (int)pow(10,i-1) % 10 ;//取middle
        for(j = 0;j < middle; j++)
            a[j] += (high+1) * (int)pow(10,i-1);//计算0到middle-1
        a[j] += high * (int)pow(10,i-1) + low + 1;//计算middle
        for(j = middle+1;j < 10;j++)
            a[j] += high * (int)pow(10,i-1);//计算middle+1到9
    }
    for(i = 0;i < count;i++)
        a[0] -= (int)pow(10,i);//剔除多余的0
    for(i = 0;i < 10;i++)
        fprintf(out,"%d\n",a[i]);
    return 0;
} 