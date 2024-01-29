// 반복문
// 프로그램에서 반복적으로 실해오디는 코드를 작서앟ㄹ 때 사용된다.

// 1. while 문

// 조건이 참인동안 반복적으로 코드를 실행합니다. while문의 구조는 다음과 같다.

//while (조건)
//{
//	//반복적으로 실행될 코드 예): 조건이 참이면 반복적으로 실행될 코드를 실행하고
//	//조건이 겆시이면 반복문을 종료한다.
//}

// 2. do-while문

// do-while문은 while문과 유사하지만, 조건 검사를 반복문의 끝에서 수행한다.
// 예) 일단 한번은 반복문을 실행한 후에 조건을 검사한다.

//do
//{
//	//반복적으로 실행된 코드
//} while (조건);

#include <stdio.h>

//int main()
//{
//	//탈출용 변수
//	//탈출용 조건식
//	//탈출용 위한 연산식
//
//	int i = 1; //탈출용 변수
//	while (i<=10)
//	{
//		printf("Hello World\n");
//		i++;
//	}
//}

//02 1부터 10까지의 합 구하기

//#include <stdio.h>
//
//int main()
//{
//	int i = 1;
//	int sum = 0;
//
//	while (i <= 10)
//	{
//		printf("i=%d\n", i);
//		sum = sum + i;
//		i++;
//	}
//	printf("while종료 이후 i =%d\n", i);
//	printf("1부터 10까지의 합 : %d\n", sum);
//}

//문제 : 키보드로부터 숫자하나(num)을 입력받아서
//1부터 N까지의 합을 구하시오.

// 1. 배운대로 푼다
// 2. chatgpt 로 요청을 받아 풀어본다.

//#include <stdio.h>
//
//int main()
//{
//	int i = 1;
//	int num = 1;
//	int sum = 0;
//	printf("숫자하나를 입력하시오. >>> : ");
//	scanf_s("%d", &num);
//
//	while (i<= num)
//	{
//		sum += i;
//		i++;
//	}
//	printf("1부터 %d까지의 합 : %d\n", num, sum);
//}

//문제 구구단 출력 : 2단만 출력

//#include <stdio.h>
//
//int main()
//{
//	int i = 1;
//	int num = 1;
//	printf("숫자하나를 입력하세요 >>> : ");
//	scanf_s("%d", &num);
//
//	while (i < 10)
//	{
//		printf("%d x %d = %d\n", num, i, num * i);
//		i++;
//	}
//	return 0; // 함수에서 값을 반환하는데 사용되는 키워드다.
//	// 값을 반환하는것 외에도, 조기에 함수 실행을 종료하거나
//	// 특정 조건에서 함수를 즉시 종료하는 데에도 사용될 수 있다.
//	// 프로그램이 정상적으로 종료되었음을 나타내는 관례적인 방법이다.
//}

// 구구단수 하나를(ex. 4단이면 4) 를 입력받아 구구단 출력을 합니다.

//#include <stdio.h>
//
//int main()
//{
//	int dan = 0;
//	printf("구구단 수 입력 : ");
//	scanf_s("%d", &dan);
//	int i = 1;
//	while (i < 10)
//	{
//		printf("%d x %d = %d\n", dan, i, dan * i);
//		i++;
//	}
//	return	0;
//}

// 1부터 10까지의 수중에 짝수끼리, 홀수끼리 합 구하기(%연산자)

//#include <stdio.h>
//
//int main()
//{
//	int i = 1;
//	int evensum = 0;
//	int oddsum = 0;
//	while (i <= 10)
//	{
//		if (i % 2 == 0) {
//			//짝수인 경우
//			evensum += i;
//		}
//		else
//		{
//			//홀수인 경우
//			oddsum += i;
//		}
//		i++;
//	}
//	printf("1부터 10까지 수중에 짝수합 = %d, 홀수합 = %d\n", evensum, oddsum);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//
//}