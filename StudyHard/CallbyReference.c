//// 참조에 의한 함수
//
//
//// 함수 호출 시 실지로 전달 되는 인자들이 함수의 매개 
//#include<stdio.h>
//
//
//// 함수 선언
//void call_by_value(int* number);
//
//int main() {
//	int number = 10;
//
//	// 함수 호출
//	call_by_value(&number);
//	printf("number = %d in main\n", number);
//	return 0;
//
//}
//
////함수 정의
//void call_by_value(int* number)
//{
//	printf("NUMBER : number = %d in call_by_value\n", *number);
//	*number = 20;
//	printf("AFTER : number = %d in call_by_value\n", *number);
//
//}
