//ջ����,���� 
//mystack:����ջ������ǰ��result:���ջ�������
#include <stdio.h>
int main()
{
	InitStack (SqStack & mystack);//����һ��ջ
	InitStack (SqStack & result);
	int n;int tmp;
	scanf("%d",&n);//���������������
	for(i=0;i<n;i++) //��ʼ��ջ 
	{
		scanf("%d",&tmp);
		push (mystack,tmp);
	} 
	tmp=pop(mystack);
	while(mystack.top!=-1 ||tmp<result.top )//mystack���գ������һ��Ԫ�ز�ʹresult���� 
	{
	
		if(result.top<=tmp||result.top==-1 ) 
		{
			push(result,tmp);
			tmp=pop(mystack);
		}
		else 
		{
			push(mystack,pop(result));	
		}
	}
	 push(result,tmp);
	
	return ;
}

 
