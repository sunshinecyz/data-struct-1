//栈排序,升序 
//mystack:输入栈，排序前；result:输出栈，排序后
#include <stdio.h>
int main()
{
	InitStack (SqStack & mystack);//创建一个栈
	InitStack (SqStack & result);
	int n;int tmp;
	scanf("%d",&n);//输入待排序数长度
	for(i=0;i<n;i++) //初始化栈 
	{
		scanf("%d",&tmp);
		push (mystack,tmp);
	} 
	tmp=pop(mystack);
	while(mystack.top!=-1 ||tmp<result.top )//mystack不空，且最后一个元素不使result乱序 
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

 
