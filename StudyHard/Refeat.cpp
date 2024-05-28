#include <stdio.h>

int main() {
    // while 문: 반복 조건에 따라 반복 여부가 결정되는 구조 (반환값)
    // 형식 1
    // while (조건식) 명령문;
    // 형식 2
    // while (조건식) { 
    //     명령문1; 
    //     명령문2;
    //     ...
    // }

    // 예시 코드 (주석 처리된 상태)
    // int number, count = 0;
    // printf("input : "); // 입력값을 받기
    // scanf_s("%d", &number);
    //
    // while (number != -999) {
    //    count++;
    //    printf("input : ");
    //    scanf_s("%d", &number);
    // }
    // printf("Count = %d\n", count);
    // return 0;

    // do-while 문: while 문과 유사하지만 조건식이 반복문 뒤에 있어서
    // 반복을 먼저 수행한 후 반복 지속 여부를 결정
    // 형식 1
    // do 명령문;
    // while (조건식);

    // 형식 2
    // do { 
    //     명령문1;
    //     명령문2;
    //     ...
    // } while (조건식);

    // 예시 코드 (주석 처리된 상태)
    // int score;
    // do {
    //    printf("input a score : ");
    //    scanf_s(" %d", &score);
    // } while (score < 0 || score > 100);
    // printf("Correct, valid score !!\n");
    // return 0;

    // for 문: 반복 횟수가 일정한 경우 사용
    // 형식 1
    // for (초기값 설정; 조건식; 증감식) 명령문;

    // 형식 2
    // for (초기값 설정; 조건식; 증감식) {
    //     명령문1;
    //     명령문2;
    //     ...
    // }

    // 무한 루프 예시
    // for (;;) {
    //     명령문;
    // }

    // 1부터 1000까지의 합을 구하는 예제 (주석 처리된 상태)
    // int number, sum = 0;
    // for (number = 1; number <= 1000; number++) {
    //     sum += number;
    // }
    // printf("sum = %d\n", sum);
    // return 0;

    //// 실제로 실행할 코드
    //int i, num;
    //int max = 0;
    //for (i = 1; i <= 10; i++) {
    //    printf("비교할 숫자를 입력해 주세요 : ");
    //    scanf_s("%d", &num);
    //    if (num > max)
    //        max = num;
    //}
    //printf("max = %d\n", max);
    //return 0;

    /*int n;

    for (n = 5; n < 10; n--) {
        if (n == 0)
            break;
        printf("n=%d\n", n);

    }
    printf("escape from for statement!\n");
    return 0;*/

    int n;
    for (n = 0; n < 10; n++) {
        if (n == 5)
            continue;
        printf("n=%d\n", n);
    }
    printf("escape from for statement!!\n");
    return 0;
}
//010-2010-5910
