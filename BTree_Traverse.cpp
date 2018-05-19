//������ 
typedef struct BiTNode 
{
	ElementType data;
	struct BiTNode *left,*right;
}BiTNode ,*BiTree;//�洢�ṹ

//�������
void InorderTraverse(BiTree T)
{
	if(T)
	{
		InorderTraverse(T->left);
		printf("%d",T->data);
		InorderTraverse(T->right);
	}
} 
//�������
void preorderTraverse(BiTree T)
{
	printf("%d",T->data);
	preorderTraverse(T->left);
	preorderTraverse(T->right);
} 

//�������
void postorderTraverse(BiTree T)
{
	postorderTraverse(T->left);
	postorderTraverse(T->right);
	printf("%d",T->data);
} 
//����ǵݹ�
void InorderTraverse1(BiTree T) 
{
	InitStack(S);
	BiTree p=T;
	while(p||!StackEmpty(S))
	{
		if(p)
		{
			push(S,p);
			p=p->left;
		}
		else
		p=pop(S);
		printf("%d",p->data);
		p=p->right;
	}
}
//��α���
void levorderTraverse(BiTree T)
{
	BiTree B=T;
	Queue Q;
	if(!T)  return ;
	Q=creatQueue(MaxSize);
	EnQ(Q,T);
	while(!IsEmptyQ(Q))	
	{
		B=DeQ(Q);
		printf("%d",B->data);
		if(T->left) EnQ(Q,T->left);
		if(T->right) EnQ(Q,T->right);
	}
} 
//���ƶ�����
void copy(BiTree T,BiTree &newT)
{
	if(!T)
	{
		newT=NULL;
		return;
		
	}
	else
	{
		newT=new BiTNode;
		newT->data=T->data;
		copy(T->left,newT->left);
		copy(T->right,newT->right);
	}
	//��������������
	int Depth(BiTree T)
	{
		if(!T)
		return 0;
		else 
		{
			m=Depth(T->left);
			n=Depth(T->right);
			if(m>n)  return (m+1);
			else return (n+1);
		}
	} 
