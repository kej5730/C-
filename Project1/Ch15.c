// 포인터 연산

// 포인터의 증가는 일반 변수와는 약간 다르다. 가리키는 객체의 크기만큼 증가한다.

// 포인터 타입		++ 연산자후 증가되는 값
//char				1
//short				2
//int				4
//float				4
//double			8

//#include <stdio.h>
//
//int main()
//{
//	char* pc;
//	int* pi;
//	double* pd;
//
//	pc = (char*)10000;
//	pi = (int*)10000;
//	pd = (double*)10000;
//
//	printf("증가전 pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
//
//	pc++;
//	pi++;
//	pd++;
//	printf("증가후 pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
//}

//문제 다음은 c언어의 포인터와 관련된 간단한 예제 코드입니다.

//#include <stdio.h>
//
//int main() {
//    int x;              // int 변수 x 선언
//    int* ptr;           // int 포인터 변수 ptr 선언
//    ptr = &x;           // ptr에 x 변수의 주소 할당
//    x = 10;             // x에 10 할당
//
//    printf("%d\n", *ptr);       // ptr이 가리키는 주소에 저장된 값 출력
//    printf("x=%d\n", x);        // x 변수의 값을 출력
//    printf("*ptr=%d\n", *ptr);  // ptr이 가리키는 주소에 저장된 값 출력
//    printf("&x=%p\n", &x);      // x 변수의 주소 값을 출력
//    printf("ptr=%p\n", ptr);    // ptr 변수의 주소 값을 출력
//    printf("&ptr=%p\n", &ptr);  // ptr 변수의 주소 값을 출력
//
//    return 0;
//}
