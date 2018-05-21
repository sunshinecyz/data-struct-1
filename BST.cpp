//二叉搜索树 
//存储结构 
typedef struct BiTNode 
{
	ElementType data;
	struct BiTNode *left,*right;
}BiTNode ,*BiTree;
//查找一个元素 
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
//查找最大元素
BiTree FindMAX(BiTree  T)
{
	if(T)
	while(T->right)
	{
		T=T->right;
	}
	return T;
} 
//插入一个元素 
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
//删除一个元素
BiTree Delete (ElementType x,BiTree T)
{
	BiTree BT;
	if(!T) printf("没有找到\n");
	else if(x<T-data)
	{
		T->left=Delete (x,T->left);
	}
	else if (x>T->data)
	{
		T->right=Delete(x,T->right);
	}
	else 
	if(T->left && T->right)//有两个孩子 
	{
		BT=FindMAX(T->left);
		T->data=BT->data;
		T->left=Delete(BT->data,T->left);
	}
	else if (T->left||T->right)//有一个孩子 
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
		//方法二： 
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
	else //没有孩子 
	{
		delete T;
		return NULL;
	}
	
} 
