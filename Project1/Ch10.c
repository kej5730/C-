// 01 break;
// �ݺ��� Ż�⿡ ��� or switch�� case Ż�⿡ ���

//#include <stdio.h>
//
//int main()
//{
//	int tmp = 0; //Ű���� ���޴� �ӽú���
//	int sum = 0; //������ ����
//	while (1) // false = 0, true = 0�� ������ ������ ��
//	{
//		printf("���Է�(-1:����:		)");
//		scanf_s("%d", &tmp);
//		if (tmp == -1)
//		{
//			break;
//		}
//		sum += tmp; // sum = sum + tmp
//	}
//	printf("������: %d\n", sum);
//
//	return 0;
//}

//02 ��ø while �� ��ü �����
// 5 x 5 = 26 ������ ����ϱ� ������ ��� x

//#include <stdio.h>
//
//int main()
//{
//	int dan = 2;
//	int i = 1;
//	int flag = 0; //�ݺ��߿� ���Ǵ� ��
//	while (dan <= 9)
//	{
//		i = 1;
//		while (i <= 9)
//		{
//			printf("%d x %d = %d\n", dan, i, dan * i);
//			if (dan == 5 && i == 5)
//			{
//				flag = 1;	// �ٱ� while���� Ż���ϱ� ����
//				break;
//			}
//			i++;
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//		printf("\n");
//		dan++;
//	}
//	return 0;
//}

//03 continue;
// continue�� C���� �����ϴ� ��� �� �ϳ��� �ݺ������� ���˴ϴ�.
// continue�� ������ ���� �������� �ݺ����� ������ �κ���
// �ǳʶٰ�, ���� �ݺ����� �����Ѵ�.

// 1���� 10������ ���߿� 3�� ����� �����ϰ� ���
//#include <stdio.h>
//
//int main()
//{
//	int i = 1;
//	while (i<=10)
//	{
//		if (i % 3 == 0) 
//		{
//			i++;
//			continue;
//		}
//		printf("i=%d\n", i);
//		i++;
//	}
//	return;
//}

