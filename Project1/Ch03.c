//(자료)형변환

//자동형변환(암시적형변환) : 컴파일러(프로그램)에 의해 자동형변환
//강제형변환(명시적형변환) : 프로그래머에 의한 강제 형변환

// 01 자동형변환
// 자료형 변환시 데이터 손실가능성이 낮을 때 컴파일러(C언어 프로그램)에
// 의해 자동으로 자료형 변환

// 자동형변환 순서
// char < short < int < long < long long < float < double

//#include <stdio.h>
//
//main(void) 
//{
//	// short 는 2바이트
//	short svar = 10;
//	int ivar = svar;	//자동형변환(큰공간 == 작은값)
//	printf("ivar = %d\n", ivar);
//
//	char cvar = 'a';
//	ivar = cvar;		//자동형변환
//	printf("ivar = %d\n", ivar);
//
//	long long Ivar = ivar;	//자동형변환
//	printf("Ivar = %d\n", ivar);
//
//	float fvar = Ivar;	//(주의)자동형변환
//	printf("fvar = %f\n", fvar);
//
//	double dvar = Ivar;	//(주의)자동형변환
//	printf("dvar = %f\n", dvar);
//
//	return 0;
//}

//02 강제형변환
//프로그래머에 의해 특정한 자료형으로 강제 형변환 하는 경우
// 단점 : 데이터 손실 가능성이 높다.

//#include <stdio.h>
//
//main(void)
//{
//	// int 약 -21억 ~ +21억까지 short : 약 -32000 ~ +32000
//	// char : -128 ~ +127
//	int ivar = 50000;
//	short svar = (short)ivar;
//	char cvar = (char)ivar;	//강제 형변환
//	printf("fvar = %d\n", svar);
//	printf("fvar = %d\n", cvar);
//
//	return 0;
//}

//03 연산시 자동(강제) 형변환(나눗셈)

//#include <stdio.h>
//
//main(void)
//{
//	int num = 10;
//	int div = 4;
//	double r1 = num / div;
//	// r1의 num은 정수타입으로 나눗셈이 계산된다.	num = 10
//	double r2 = (float)num / div;
//	// r2의 num은 실수타입으로 나눗셈이 계산된다.	num = 10.0  
//
//	printf("r1 = %f\n", r1);
//	printf("r2 = %f\n", r2);
//
//	return 0;
//}