#include <iostream>
#include <cstdio>//文件头
using namespace std;
long long n,a,b,he,jian;//定义
  //n是津津学习的天数，a是上学时间，b是课外补习的时间
  //he是不高兴值之和，jian是当天的不高兴值
int main()
{
  cin>>n;//输入天数
  for(int i=1;i<=n;i++)//循环
  {
    cin>>a>>b;//输入当天上学时间和课外补习的时间
    jian=jian+a+b-8;//记录当天的不高兴值
    he+=jian;//累加不高兴值
  }
  cout<<he;//输出不高兴值之和
  return 0;//程序拜拜
}
