//˳��洢ջ
#define MaxSize 100
typedef struct SNode *Stack;
struct SNode 
{
	ElementType data[MaxSize];
	int top;
} 
//��ջ 
void push(Stack s,ElementType x)
{
	if(p->top==MaxSize-1)
	{
		printf("ջ��");
		return ; 
	}
	else{
	
	s->top++;
	s->data[top]=x;}
}
//��ջ
void pop(Stack s)
{
	ElementType x;
	if(s->top==-1)
	{
		printf("ջ��");
		return ;
		
	}
	else
	{
		x=s->data[top];
		s->top--;
		return x;
	}
} 
