//���������� 
//�洢�ṹ 
typedef struct BiTNode 
{
	ElementType data;
	struct BiTNode *left,*right;
}BiTNode ,*BiTree;
//����һ��Ԫ�� 
BiTree Find (ElementType x,BiTree T)
{
	if(!T)
		return NULL;
	if(x>T->data)
		return Find(x,T->right);
	else if (x<T->data)
		return Find(x,T->left);
	else  return T;
}
//�������Ԫ��
BiTree FindMAX(BiTree  T)
{
	if(T)
	while(T->right)
	{
		T=T->right;
	}
	return T;
} 
//����һ��Ԫ�� 
BiTree Insert (ElementType x,BinTree T)
{
	if(!T)
	{
		T=malloc(sizeof(struct BiTNode));
		T->data=x;
		T->left=T->right=NULL;
	}
	else if(x>T->data)
	{
		T->right=Insert(x,T->right);
		
	}
	else if (x<T->data)
	{
		T->left=Insert(x,T->left);
	}
	
	return T;
}
//ɾ��һ��Ԫ��
BiTree Delete (ElementType x,BiTree T)
{
	BiTree BT;
	if(!T) printf("û���ҵ�\n");
	else if(x<T-data)
	{
		T->left=Delete (x,T->left);
	}
	else if (x>T->data)
	{
		T->right=Delete(x,T->right);
	}
	else 
	if(T->left && T->right)//���������� 
	{
		BT=FindMAX(T->left);
		T->data=BT->data;
		T->left=Delete(BT->data,T->left);
	}
	else if (T->left||T->right)//��һ������ 
	{
		if(T->left) 
		{
			T->data=T->left->data;
			delete (T->left);
			T->left=NULL;
			return T;
		}
		else (T->right)
		{
			T->data=T->right->data;
			delete (T->right);
			T->right=NULL;
			return T;
		}
		//�������� 
		/*
		BiTree BT;
		if(T->left)
		{
			BT=T;
			T=T->left;
			delete BT;
			return T;
		} 
		*/
	}
	else //û�к��� 
	{
		delete T;
		return NULL;
	}
	
} 
