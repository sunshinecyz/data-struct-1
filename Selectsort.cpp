//Selectsort
//ÿ�δ������Ԫ����ѡ�����ķ���������--������֮ 
void Selectsort(ElemetType A[],int N)
{
	int i,j;ElementType tmp;
	for( i=N-1;i>0;i--  )
	{
	tmp=A[0];
		for(j=0;j<=i;j++)  //ѡ�����Ԫ�� 
		{
			if(tmp<A[j])
			swap(A[j],tmp);
		 }
		 swap(tmp,A[i]);
	}	
} 
//ѡ��������ð����������
//ѡ�񣺼�����֮--ÿһ�μ�������һ��Ԫ�أ�ʹ��ģ��С 
//ð�ݣ�̰�� -- ÿһ��ʹ����Ԫ�ش�����-˳�� 


