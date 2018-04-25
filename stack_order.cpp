//Ë³Ğò´æ´¢Õ»
#define MaxSize 100
typedef struct SNode *Stack;
struct SNode 
{
	ElementType data[MaxSize];
	int top;
} 
//ÈëÕ» 
void push(Stack s,ElementType x)
{
	if(p->top==MaxSize-1)
	{
		printf("Õ»Âú");
		return ; 
	}
	else{
	
	s->top++;
	s->data[top]=x;}
}
//³öÕ»
void pop(Stack s)
{
	ElementType x;
	if(s->top==-1)
	{
		printf("Õ»¿Õ");
		return ;
		
	}
	else
	{
		x=s->data[top];
		s->top--;
		return x;
	}
} 
