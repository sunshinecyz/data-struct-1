//������ 
//��ѡ������Ľ����� 
//ѡ������ȡ���Ԫ��Ч�ʵ�  o(N^2)
// ʹ������ȡ�����Ԫ�� o(NlogN) 
void heapsort(ElementType A[],int N)
{
	BuildHeap(A);
	ElementType tmp;
	for(i=N-1;i>0;i--)
	{
		swap(A[i],A[0]);
		AdjustHeap(A,0,i-1);//��δ�����������µ���Ϊ���� 
	}
	
}
