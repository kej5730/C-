// 포인터
// 0. 포인터 사용 이유 :
// 0.1 메모리의 주소를 참조해서 다양한 접근과 조작이 쉽다.
// 0.2 동적 할당된(힙영역)에 접근과 조작이 용이.
// 0.3 : 메모리 공간을 효율적으로 사용.

// 1. 메모리의 주소를 사용한 변수다. (메모리의 내용에 직접 접근할 수 있다.)
// 2. 변수는 메모리에 저장된다. 메모리는 바이트 단위로 액세스된다.
// 3. 변수의 크기에 따라 차지하는 메모리 공간이 달라진다.
// char형 변수 : 1바이트, int형 변수  : 4바이트 float : 4바이트, double : 8바이트

// 2) 변수의 주소

// 변수 : 메모리 상의 저장공간. 그 위치를 알면 사용할 수 있다.

// 위치값 - 주소
//		-> 주소 사용하기 위한 조건
//		-> 주소 담는 포인터
//		-> 포인터로 변수 사용시 필요한 간접참조

// 변수의 주소르 계산하는 연산자 : &
// 변수 i의 주소 : &i

//#include <stdio.h>
//
//int main()
//{
//	int i = 10;
//	char c = 69;
//	float f = 12.3;
//
//	printf("i의 주소 : %u\n", &i);
//	printf("c의 주소 : %u\n", &c);
//	printf("f의 주소 : %u\n", &f);
//}

// 포인터와 연산자
// 주소 연산자 : int a;		&a  기능 : 변수 앞에 붙여 사용하면 변수가 할당된 메모리의 시작 주소값을 구한다.
// int a = 10	: 메모리의 (가정) : 100번지 ~ 103번지까지 4바이트 공간에 10을 저장.
// a + 20(수식) : 메모리 100번지 ~ 103번지까지 4바이트에 저장된 값과 20을 더하는 연산 수행
// 결론 : 변수명으로 메모리 공간이나 값 간단히 사용

//#include <stdio.h>
//
//int main()
//{
//	int a;
//	double b;
//	char c;
//
//	printf("int의 주소 : %u\n", &a);
//	printf("double의 주소 : %u\n", &b);
//	printf("char의 주소 : %u\n", &c);
//}

// 변수의 크기, 메모리 할당 방식
// 컴파일러와(컴퓨터 or 프로그램) 운영체제에 따라 다를 수 있다.

// 주소 연산자(&)
// 주소는 0부터 시작하는 양수 -> 출력할 때 %u 변환문자를 사용한다.

// 주소 연산자(&)
// 주소는 0부터 시작하는 양수 -> 출력할 때 %u 변환문자를 사용한다.

// %x나 %p를 사용해 16진수로 출력한다.

//포인터	: char *pc;
//			  int *pi		// 기능 : 주소값을 저장하는 변수며 가리키는 자료형을 표시하여 선언

// 간접 참조 연산자 : *pi = 10;	기능 : 포인터에 사용하며  포인터가 가리키는 변수를 사용한다.

//#include <stdio.h>
//
//int main()
//{
//	int a; // 변수 선언
//	int* pa; // 포인터 선언
//
//	pa = &a; // 포인터에 a의 주소 대입
//	*pa = 10; // 포인터로 변수 a에 10을 대입힌다.
//
//	printf("포인터로 a값 출력 %d\n", *pa);
//	printf("변수명으로 a값 출력 %d\n", a); // 변수 a값 출력
//
//	return 0;
//
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 3000;
//	int* p = &i;	// 변수와 포인터 연결
//
//	printf("&i = %u\n", &i); // 변수의 주소 출력
//	printf("p = %u\n", p); // 포인터의 값 출력
//
//	printf("i = %d\n", i); // 변수의 값 출력
//	printf("*p = %d\n", *p); // 포인터를 통한 간접 참조 값 출력
//}

//#include <stdio.h>
//
//int main()
//{
//	//포인터의 타입괍 녀수의 타입은 일치하여야 한다.
//	int i;
//	double* pd;
//
//	pd = &i;
//	*pd = 36.5;
//
//	printf("%p", *pd);
//}

// 2.
//#include <stdio.h>
//
//int main()
//{
//	// 초기화 : 변수나 배열, 구조체 등을 처음으로 값을 할당하는 것을 의미한다.
//	int* p; // 포인터 p는 초기화가 X
//
//	*p = 100;
//	printf("%d", *p); // 초기화 안된 포인터는 사용 하면 안된다.
//}

// 3. NULL

// 1. 포인터가 아무것도 가리키고 있지 않는 경우에는 NULL로 초기화
// 2. NULL 포인터를 가지고 간접 참조하면 하드웨어로 감지할 수 있다.
// 3. 포인터의 유효성 여부 판단이 쉽다.

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	//int* p_num = NULL;
//	int* p_num = i;
//	if (p_num == NULL)
//	{
//		printf("포인터 변수가 NULL을 가리킵니다.");
//	}
//	else
//	{
//		printf("포인터 변수가 NULL을 가리키지 않느다.");
//	}
//
//	return 0;
//}

// scanf_s 함수는 사용자로부터 입력을 받을 때, 메모리 영역을 벗어나는 오류를 방지하기 위해 입력 값을 저장할 변수의 주소를 입력해야 한다.

// 문제 : 정수형 변수 a에 10을 저장하고, 이 변수의 값을 포인터를 사용하여 출력하세요.
// 변수: a // 포인터 변수 p_a

//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int* p_a = &a;
//
//	printf("%d\n", *p_a);
//}

//문제 : 두개의 정수를 입력받아 두 정수의 값을 서로 바꾸는 프로그램을 작성하시오. 이때, 포인터를 사용하여 값을 교환하시오.
// hint : 포인터변수를 따로 담아놓을 temp 라는 변수가 있어야 햔다.

//#include <stdio.h>
//
//int main()
//{
//	int a, b;
//	int temp;
//
//	printf("정수 두 개를 입력하세요 >>> ");
//	scanf_s("%d %d", &a, &b);
//	
//	int* p_a = &a;
//	int* p_b = &b;
//
//	temp = *p_a;
//	*p_a = *p_b;
//	*p_b = temp;
//
//	printf("두 정수의 값이 바뀌었습니다.\n");
//	printf("a = %d, b = %d\n", *p_a, *p_b);
//}

//#include <stdio.h>
//
//int main()
//{
//
//}
