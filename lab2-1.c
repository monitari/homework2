#include <stdio.h>
int main() {
    char charType;                                            // char 타입 변수 charType 선언
    int integerType;                                          // int 타입 변수 integerType 선언
    float floatType;                                          // float 타입 변수 floatType 선언
    double doubleType;                                        // double 타입 변수 doubleType 선언
    printf("Size of char : %ldbyte\n", sizeof(charType));     // charType의 크기 : 1바이트
    printf("Size of int : %ldbyte\n", sizeof(integerType));   // integerType의 크기 : 4바이트
    printf("Size of float : %ldbyte\n", sizeof(floatType));   // floatType의 크기 : 4바이트
    printf("Size of double : %ldbyte\n", sizeof(doubleType)); // doubleType의 크기 : 8바이트

    printf("========== 김준후 2023041018 ==========\n");
    printf("Size of char: %ldbyte\n", sizeof(char));      // char의 크기 : 1바이트
    printf("Size of int: %ldbytes\n", sizeof(int));       // int의 크기 : 4바이트
    printf("Size of float: %ldbytes\n", sizeof(float));   // float의 크기 : 4바이트
    printf("Size of double: %ldbytes\n", sizeof(double)); // double의 크기 : 8바이트

    printf("========== 김준후 2023041018 ==========\n");
    printf("Size of char*: %ldbyte\n", sizeof(char *));      // 32비트 환경이므로
    printf("Size of int*: %ldbytes\n", sizeof(int *));       // 포인터 변수의 크기는
    printf("Size of float*: %ldbytes\n", sizeof(float *));   // 모두
    printf("Size of double*: %ldbytes\n", sizeof(double *)); // 4바이트로 출력
    return 0;
}