#include <iostream>
#include <cstdio>//�ļ�ͷ
using namespace std;
long long n,a,b,he,jian;//����
  //n�ǽ��ѧϰ��������a����ѧʱ�䣬b�ǿ��ⲹϰ��ʱ��
  //he�ǲ�����ֵ֮�ͣ�jian�ǵ���Ĳ�����ֵ
int main()
{
  cin>>n;//��������
  for(int i=1;i<=n;i++)//ѭ��
  {
    cin>>a>>b;//���뵱����ѧʱ��Ϳ��ⲹϰ��ʱ��
    jian=jian+a+b-8;//��¼����Ĳ�����ֵ
    he+=jian;//�ۼӲ�����ֵ
  }
  cout<<he;//���������ֵ֮��
  return 0;//����ݰ�
}
