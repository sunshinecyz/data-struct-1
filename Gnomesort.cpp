//Gnomesort 
// ̰�ĵ�ÿ�αȽ����� 
// ˳������ǰ��
//�����򽻻��������ת������Ƚ�ֱ��˳���ٻ�ͷ
void Gnomesort(ElementTpey A[],int N) 
{
	int i;
	for(i=0;i<N;i++)
	{
		if(A[i]>A[i+1]) 
	 {
	 	swap(A[i],A[i+1]);
	 	while(A[i]<A[i-1] || i>0)
	 	{
	 		swap(A[i],A[i-1]);
	 		i--;
	 	}
	 }
	}
}



//�Ľ���
// ������һ����С��Ԫ�أ�����˳�����ת���ܳ�һ���Ѿ�������ת����˷�ʱ��
//improve: ��ס���ת���λ�ã�ֱ�������м������һ��
 void Gnomesort(ElementTpey A[],int N)
{
	int i;int j;
	for(i=0;i<N;i++)
	{
		if(A[i]>A[i+1]) 
	 {
	 	swap(A[i],A[i+1]);
	 	j=i;           //��i��ס������λ�� 
	 	while(A[j]<A[j-1] || j>0)
	 	{
	 		swap(A[j],A[j-1]);
	 		j--;
	 	}
	 }
	}
}
