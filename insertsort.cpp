//��������
//ÿ�δ��������ó�һ��Ԫ�� ����ǰ���ұ���С��Ԫ��
//insert ��ȥ
void insertsort(ElementType A[],int n)
{
	int i;
	int j;
	ElementType tmp;
	for(i=1;i<N;i++)
	{
		j=i;tmp=A[i];
		while(A[i]<A[j-1] ||j>0)
		{
			A[j-1+1]=A[j-1];
			j--;
		}
		A[j]=tmp;
	}
} 
//���������������� 



