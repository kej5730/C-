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
//		printf("%d번째 학급의 평균성적 : %d\n", i + 1, avg / Students);
//		total_score += avg;
//	}
//	printf("전체 학생의 평균성적 : %d\n", total_score / (Class * Students));
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
//	printf("정수 9개를 입력하세요. \n");
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
//    // 사용자로부터 연산자와 두 개의 숫자를 입력받음
//    printf("연산자를 입력하세요 (+, -, *, /): ");
//    scanf_s(" %c", &operator, sizeof(operator));
//
//    printf("두 개의 숫자를 입력하세요: ");
//    scanf_s("%lf %lf", &num1, &num2);
//
//    // 입력받은 연산자에 따라 적절한 연산 수행
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
//        // 나눗셈 전에 0으로 나누는지 확인
//        if (num2 != 0) {
//            printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
//        }
//        else {
//            printf("오류: 0으로 나눌 수 없습니다.\n");
//        }
//        break;
//    default:
//        printf("잘못된 연산자 입력입니다.\n");
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
	
	printf("학생 이름을 입력하세요 (최대 20자 이하): ");
	fgets(stu.name, 20, stdin); // 키보드로 입력받음

	printf("학번을 입력하세요 (7자리 이하의 자연수): ");
	scanf_s("%d", &stu.id);

	printf("학생의 Socore를 입력하세요 (0에서 4.5 상의 실수): ");
	scanf_s("%f", &stu.score);

	printf("입력한 학생 정보\n");
	printf("이름: %s\n", stu.name);
	printf("학번: %d\n", stu.id);
	printf("Score: %.2f\n", stu.score);
}