#include"stdio.h"
int i;    //��¼����  
//i��ʾ���е��Ĳ���,�����Ϊn��������from���ƶ���to��(Ŀ����)  
void move(int n, char from, char to){
	printf("��%d��:��%d������%c---->%c\n", i++, n, from, to);
}

//��ŵ���ݹ麯��  
//n��ʾҪ�����ٸ�"Բ��"����ʼ�����ƶ���Ŀ������  
//start_pos��ʾ��ʼ����,tran_pos��ʾ��������,end_pos��ʾĿ������  
void Hanio(int n, char start_pos, char tran_pos, char end_pos){
	if (n == 1){    //������,��n==1��ʱ��,����ֻ��Ҫֱ�ӽ�Բ�̴���ʼ��������Ŀ�����Ӽ���.  
		move(n, start_pos, end_pos);
	}
	else{
		Hanio(n - 1, start_pos, end_pos, tran_pos);   //�ݹ鴦��,һ��ʼ��ʱ��,�Ƚ�n-1������������������  
		move(n, start_pos, end_pos);                //Ȼ���ٽ����µĴ�����ֱ������Ŀ�����Ӽ���  
		Hanio(n - 1, tran_pos, start_pos, end_pos);    //Ȼ���ظ����ϲ���,�ݹ鴦����ڹ������ϵ�n-1������  
		//��ʱ����ԭ������ʼ����Ϊ������(��Ϊ��ʼ���Ѿ�����)  
	}
}
int main(){
	int n;
	scanf_s("%d", &n);
		i = 1;   //ȫ�ֱ�������ʼֵ  
		Hanio(n, '1', '2', '3');
		printf("����ܵĲ���Ϊ%d\n", i - 1);
	
	return 0;
}