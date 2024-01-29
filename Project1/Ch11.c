// 01 for문(기본)

//for문은 C언어에서 제공하는 반복문 중 하나로, 반복 횟수를 미리 정해놓고 반복을 수행하는 구조다.

//for (초기식; 조건식; 증감식) {
		// 조건식이 참일동안 수행할 코드
//}

// for문은 다음 같이 동작한다.
// 1. 초기식을 먼저 실행한다. 이 때 초기식에서 선언된 변수는 for문의 블록에서 사용될 수 있다.
// 2. 조거식을 평가한다. 조건식이 참이면 반복문의 블록을 실행한다. 조건식이 거짓이면 반복문을 종료한다.
// 3. 반복문의 블록을 실행한다.
// 4. 증감식을 실행한다.
// 5. 2번째 순서로 돌아가 조건식을 평가낳다. 조건식이 참이면 밤복문의 블록을 실행한다. 조건식이 거짓이면 반복문을 종료한다.

//#include <stdio.h>
//
//int main() 
//{
//	int i = 0; //초기값
//	while (i<=10) //조건식
//	{
//		printf("i=%d\n", i);
//		i++; //증감연산
//	}
//	for (i = 1; i <= 10; i++) //초기값;조건식;증감연산
//	{
//		printf("i=%d\n", i);
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	int sum = 0;
//	for (int i = 0; i <= 10; i++)
//	{
//		sum += i;
//	}
//	printf("1부터 10까지의 합 %d\n", sum);
//}

//문제
//1부터 N까지의 수의 합을 출력하는데 N의 수는 scanf_s를 사용하시오. while문 금지 오로지 for문으로 만드시오.

//#include <stdio.h>
//
//int main()
//{
//	int N, sum = 0;
//	printf("숫자N값을 입력하세요. >>> : ");
//	scanf_s("%d", &N);
//
//	for (int i = 0; i <= N; i++)
//	{
//		sum += i;
//	}
//	printf("1부터 %d까지의 합 : %d\n", N, sum);
//}

//2. N의 값을 받아서 N의 구구단 출력하시오.(for문으로 작성)

//#include <stdio.h>
//
//int main()
//{
//	int N = 0;
//	printf("숫자N값을 입력하세요. >>> : ");
//	scanf_s("%d", &N);
//
//	for (int i = 1; i <= 9; i++)
//	{
//		printf("%d x %d = %d\n", N, i, N*i);
//	}
//}

//3. 2단부터 9단까지 출력(for문으로 작성)

//#include <stdio.h>
//
//int main()
//{
//	for (int i = 2; i <= 9; i++)
//	{
//		printf("%d단\n", i);
//		for (int j = 1; j <= 9; j++)
//		{
//			printf("%d x %d = %d\n", i, j, i*j);
//		}
//		printf("\n");
//	}
//}

// 4. 문제 (별찍기) for문사용 while문 금지

//#include <stdio.h>
//
//int main()
//{
//	for (int i = 1; i <= 5; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}

// 5. 문제 1부터 100까지의 수 중에서 홀수의 합과 짝수의 합을 출력하시오.
// hint : for 1번, if-else 쓰시오.

//#include <stdio.h>
//
//int main()
//{
//	int odd_sum = 0;
//	int even_sum = 0;
//
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 2 ==0)
//		{
//			even_sum += i;
//		}
//		else
//		{
//			odd_sum += i;
//		}
//	}
//	printf("홀수의 합 : %d\n", odd_sum);
//	printf("짝수의 합 : %d\n", even_sum);
//}

// 6. 문제 : 1부터 100까지의 숫자 중에서 3과 5의 공배수일 때 "FizzBuZZ", 3의 배수일 때 "Fizz", 5의 배수일 때 "Buzz"를 출력하고, 그 외의 숫자는
// 그대로 출력하는 프로그램을 작성하시오.
// hint : 1. 3과 5의 공배수부터 뽑아야한다.

//#include <stdio.h>
//
//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0 && i % 5 == 0)
//		{
//			printf("FizzBuZZ\n");
//		}
//		else if (i % 3 == 0)
//		{
//			printf("Fizz\n");
//		}
//		else if (i % 5 == 0)
//		{
//			printf("Buzz\n");
//		}
//		else
//		{
//			printf("%d\n", i);
//		}
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//
//}