//// scanf에서 오류가 발생할 때 무시하도록 로직처리하는것 
//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//int main() {
//	// 대임 연산자
//	// 오른쪽에 있는 값을 왼쪽에 있는 변수에 넣음
//	 
//	// 조건 연산자
//	// 조건식 ? 식1:식2 
//	// 식1 = 조건식이 참인 경우 실행
//	// 식2 = 조건식이 거짓인 경우 실행
//	char infoR;
//	printf("성별 ? (M or F)");
//	scanf("%c", &infoR);
//	printf("성별:%s\n", (infoR == 'M' || infoR == 'm') ? "남" : "여");
//	return 0;
//
//}