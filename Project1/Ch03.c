//(�ڷ�)����ȯ

//�ڵ�����ȯ(�Ͻ�������ȯ) : �����Ϸ�(���α׷�)�� ���� �ڵ�����ȯ
//��������ȯ(���������ȯ) : ���α׷��ӿ� ���� ���� ����ȯ

// 01 �ڵ�����ȯ
// �ڷ��� ��ȯ�� ������ �սǰ��ɼ��� ���� �� �����Ϸ�(C��� ���α׷�)��
// ���� �ڵ����� �ڷ��� ��ȯ

// �ڵ�����ȯ ����
// char < short < int < long < long long < float < double

//#include <stdio.h>
//
//main(void) 
//{
//	// short �� 2����Ʈ
//	short svar = 10;
//	int ivar = svar;	//�ڵ�����ȯ(ū���� == ������)
//	printf("ivar = %d\n", ivar);
//
//	char cvar = 'a';
//	ivar = cvar;		//�ڵ�����ȯ
//	printf("ivar = %d\n", ivar);
//
//	long long Ivar = ivar;	//�ڵ�����ȯ
//	printf("Ivar = %d\n", ivar);
//
//	float fvar = Ivar;	//(����)�ڵ�����ȯ
//	printf("fvar = %f\n", fvar);
//
//	double dvar = Ivar;	//(����)�ڵ�����ȯ
//	printf("dvar = %f\n", dvar);
//
//	return 0;
//}

//02 ��������ȯ
//���α׷��ӿ� ���� Ư���� �ڷ������� ���� ����ȯ �ϴ� ���
// ���� : ������ �ս� ���ɼ��� ����.

//#include <stdio.h>
//
//main(void)
//{
//	// int �� -21�� ~ +21����� short : �� -32000 ~ +32000
//	// char : -128 ~ +127
//	int ivar = 50000;
//	short svar = (short)ivar;
//	char cvar = (char)ivar;	//���� ����ȯ
//	printf("fvar = %d\n", svar);
//	printf("fvar = %d\n", cvar);
//
//	return 0;
//}

//03 ����� �ڵ�(����) ����ȯ(������)

//#include <stdio.h>
//
//main(void)
//{
//	int num = 10;
//	int div = 4;
//	double r1 = num / div;
//	// r1�� num�� ����Ÿ������ �������� ���ȴ�.	num = 10
//	double r2 = (float)num / div;
//	// r2�� num�� �Ǽ�Ÿ������ �������� ���ȴ�.	num = 10.0  
//
//	printf("r1 = %f\n", r1);
//	printf("r2 = %f\n", r2);
//
//	return 0;
//}