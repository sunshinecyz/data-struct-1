typedef struct SNode *stack;
struct SNode 
{
	ElementType data;
	struct SNode *next;
} 
//��ʼ��
stack creatstack()
{
	stack s;
	s=(stack)malloc (sizeof(struct SNode));
	s->next=NULL;
	return s;
} 
//��ջ
void push (ElementType x,stack s)
{
	stack p;
	p=(stack)malloc (sizeof (SNode));
	p->data=x;
	p->next=s->next;
	s->next=p;
} 
//��ջ
ElementType pop(stack s)
{
	ElementType x;
	if(!s->next)
	{
		printf("ջ��");
		return ;
	}
	else
	{
		p=s->next;
		s->next=p->next;
		x=p->data;
		free(p);
		return x;
	}
} 
