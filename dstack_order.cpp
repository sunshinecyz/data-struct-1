//һ����������ջ
#define MaxSize 100

struct DStack
{
	ElementType data[MaxSize];
	int top1;
	int top2;
} s;
s.top1=-1;
s.top2=MaxSize-1;
//��ջ
void push (ElementType x,DStack s,int tag)
{
	if(s->top2-s->top1==1)
	{
		printf("ջ��");
		return ; 
	}
	else
	{
		if(tag==1)
		{
			p->top1++;
			p->data[top]=x;
			
		}
		else
		{
			p->top2--;
			p->data[top]=x;
		}
	}
} 
//��ջ
 ElementType pop (DStack s,int tag)
 {
 	if(tag==1)
 	{
 		if(s->top1==-1)
 		{
 			printf("ջ��");
 			return ;
 		}
 		else
 		return s->data[(s->top)--];
 	}
 	else
 	{
 		if(s->top2==MaxSize-1)
 		{
 			printf("ջ��");
			 return ; 
 		}
 		else
 		{
 			return s->data[s->top2++]; 
 		}
 	}
 	
 }
