//#include <stdio.h>
//
//int main()
//{
//	return	0;
//}

//#include<stdio.h>
//#define Class 3
//#define Students 5
//
//int main()
//{
//	int score[Class][Students] = { 
//		{0, 1, 2, 3, 4},
//		{5, 6, 7, 8, 9},
//		{10, 11, 12, 13, 14} };
//	int total_score = 0;
//	for (int i = 0; i < Class; i++)
//	{
//		int avg = 0;
//		for (int j = 0; j < Students; j++)
//		{
//			avg += score[i][j];
//		}
//		printf("%d��° �б��� ��ռ��� : %d\n", i + 1, avg / Students);
//		total_score += avg;
//	}
//	printf("��ü �л��� ��ռ��� : %d\n", total_score / (Class * Students));
//	return	0;
//}

//#include <stdio.h>
//#define Max_size 10
//
//int main()
//{
//	int array[Max_size];
//	printf("array[] = {");
//	for (int i = 0; i < Max_size; i++)
//	{
//		array[i] = i+1;
//		printf("%d ", array[i]);
//	}
//	printf("}\n");
//	return	0;
//}

//#include <stdio.h>
//#define ROWS 3
//#define COLS 4
//
//int main()
//{
//	int matrix[ROWS][COLS];
//
//	for (int i = 0; i < ROWS; i++)
//	{
//		for (int j = 0; j < COLS; j++)
//		{
//			matrix[i][j] = i * COLS + j + 1;
//		}
//	}
//	for (int i = 0; i < ROWS; i++)
//	{
//		for (int j = 0; j < COLS; j++)
//		{
//			printf("%d ", matrix[i][j]);
//		}
//		printf("\n");
//	}
//	return	0;
//}

//#include <stdio.h>
//#define ROWS 3
//#define CLOS 3
//
//int main()
//{
//	int array[ROWS][CLOS];
//	printf("���� 9���� �Է��ϼ���. \n");
//
//	for (int i = 0; i < ROWS; i++)
//	{
//		int n;
//		for (int j = 0; j < ROWS; j++)
//		{
//			scanf_s("%d", &array[i][j]);
//		}
//	}
//	printf("\n");
//	for (int i = 0; i < ROWS; i++)
//	{
//		int n;
//		for (int j = 0; j < ROWS; j++)
//		{
//			printf("%d ", array[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//
//	return	0;
//}

//#include <stdio.h>
//
//int main() {
//    char operator;
//    double num1, num2;
//
//    // ����ڷκ��� �����ڿ� �� ���� ���ڸ� �Է¹���
//    printf("�����ڸ� �Է��ϼ��� (+, -, *, /): ");
//    scanf_s(" %c", &operator, sizeof(operator));
//
//    printf("�� ���� ���ڸ� �Է��ϼ���: ");
//    scanf_s("%lf %lf", &num1, &num2);
//
//    // �Է¹��� �����ڿ� ���� ������ ���� ����
//    switch (operator) {
//    case '+':
//        printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
//        break;
//    case '-':
//        printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
//        break;
//    case '*':
//        printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
//        break;
//    case '/':
//        // ������ ���� 0���� �������� Ȯ��
//        if (num2 != 0) {
//            printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
//        }
//        else {
//            printf("����: 0���� ���� �� �����ϴ�.\n");
//        }
//        break;
//    default:
//        printf("�߸��� ������ �Է��Դϴ�.\n");
//        break;
//    }
//
//    return 0;
//}

#include<stdio.h>
#include<string.h>

struct student 
{
	char name[20];
	int id;
	float score;
};

int main()
{
	struct student stu;
	
	printf("�л� �̸��� �Է��ϼ��� (�ִ� 20�� ����): ");
	fgets(stu.name, 20, stdin); // Ű����� �Է¹���

	printf("�й��� �Է��ϼ��� (7�ڸ� ������ �ڿ���): ");
	scanf_s("%d", &stu.id);

	printf("�л��� Socore�� �Է��ϼ��� (0���� 4.5 ���� �Ǽ�): ");
	scanf_s("%f", &stu.score);

	printf("�Է��� �л� ����\n");
	printf("�̸�: %s\n", stu.name);
	printf("�й�: %d\n", stu.id);
	printf("Score: %.2f\n", stu.score);
}