//#include<stdio.h>
//
//int main()
//{
//	char name[10] = "홍길동";
//	int age = 44;
//	char gender = 'M';
//	char addr[100] = "대구광역시 서구";
//
//	printf("1.이름 : %s\n", name);
//	printf("2.나이 : %d세\n", age);
//	printf("3.성별 : %c\n", gender);
//	printf("4.주소 : %s\n", addr);
//}

//#include<stdio.h>
//
//int main() {
//	int num1, num2, num3;
//	printf("세 정수를 입력하시오.");
//	scanf_s("%d %d %d", &num1, &num2, &num3);
//	printf("%d + %d + %d = %d\n", num1, num2, num3, num1 + num2 + num3);
//	printf("%d * %d * %d = %d\n", num1, num2, num3, num1 * num2 * num3);
//	printf("%d - %d - %d = %d\n", num1, num2, num3, num1 - num2 - num3);
//}

//#include<stdio.h>
//
//int main() {
//	int a = 0, b = 0, c = 0;
//
//	scanf_s("%d %d %d", &a, &b, &c);
//
//	printf("a == b && a > 10 && b > 10 ? %d\n", a == b && a > 10 && b > 10);
//	printf("a > b && a != 0 ? %d\n", a > b && a != 0 );
//	printf("a > 5 || b < 10 ? %d\n", a > 5 || b < 10);
//	printf("a > b && a > c && a != 0 ? %d\n", a > b && a > c && a != 0);
//}

//#include <stdio.h>
//
//int main(void)
//{
//	//기본
//	int a = 10, b = 20, c = 0, d = 0, e = 0;
//	c = ++a + ++b;			// a = 11	b = 21	c = 32
//	d = a++ + b++;			// a = 12	b = 22	d = 34
//	// a++ 와 b++는 후위 증가 연산자로 a와 b의 값을 사용한 후 1을 증가시킨다.
//	e = ++a + b-- + ++c + d--;
//	// ++c는 1증가 c = 33
//	// d = 33
//	printf("a = %d, b = %d, c = %d, d = %d, e = %d\n", a, b, c, d, e);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int a = 1, b = 1, c = 0, d = 5;
//
//	c = --a && b++;	//	a = 0, b = 1, c = 0 // d = 2
//	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
//	d = ++a && b++; //	a = 1, b = 2, d = 1
//	printf("d = %d\n", d);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 1, j = 2, k = 3;
//	printf("i = %d, j = %d, k = %d\n", i, j, k); // i = 1, j = 2, k = 3
//
//	printf("i = %d, j = %d, k = %d\n", ++i, ++j, ++k);
//
//	printf("i = %d, j = %d, k = %d\n", i, j, k);
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 2;
//	while (i <= 9)
//	{
//		int j = 1;
//		printf("=== %d단 ===\n", i);
//		while (j <= 9)
//		{
//			printf("%d x %d = %d\n", i, j, i * j);
//			j++;
//		}
//		printf("\n");
//		i++;
//	}
//	return	0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int max;
//	int sum = 0;
//	printf("정수를 입력하시오 >> ");
//	scanf_s("%d", &max);
//	for (int i = 0; i <= max; i++)
//	{
//		sum += i;
//	}
//	printf("1부터 %d까지의 수의 합 : %d\n", max, sum);
//	return	0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int N;
//	printf("정수를 입력하시오 >> ");
//	scanf_s("%d", &N);
//	for (int i = 1; i <= 9; i++)
//	{
//		printf("%d x %d = %d\n", N, i, N * i);
//	}
//	return	0;
//}

//#include <stdio.h>
//
//int main()
//{
//	for (int i = 2; i <= 9; i++)
//	{
//		printf("=== %d단 ===\n", i);
//		for (size_t j = 1; j <= 9; j++)
//		{
//			printf("%d x %d = %d\n", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return	0;
//}

//#include <stdio.h>
//
//int main()
//{
//	for (int i = 1; i <= 5; i++)
//	{
//		for (int j = 5; j >= i; j--)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return	0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int EvenNum = 0;
//	int OddNum = 0;
//	for (int i = 0; i <= 100; i++)
//	{
//		if(i % 2 ==0)
//		{
//			EvenNum += i;
//		}
//		if (i % 2 != 0)
//		{
//			OddNum += i;
//		}
//	}
//	printf("짝수의 합 : %d\n", EvenNum);
//	printf("홀수의 합 : %d\n", OddNum);
//	return	0;
//}

//#include <stdio.h>
//
//int main()
//{
//	return	0;
//}