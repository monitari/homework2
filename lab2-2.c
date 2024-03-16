#include <stdio.h>
int main() {
    int i;
    int *ptr;
    int **dptr;
    i = 1234;

    printf("[checking values before ptr = &i]\n"); // ptr = &i 할당 전
    printf("value of i == %d\n", i);               // i = 1234
    printf("address of i == %p\n", &i);            // i의 주소 = 0061FF1C
    printf("value of ptr == %p\n", ptr);           // ptr의 값 = 00000000 (아직 할당 X)
    printf("address of ptr == %p\n", &ptr);        // ptr의 주소 = 0061FF18

    ptr = &i; // ptr = &i, ptr에 i의 주소(=0061FF1C) 할당
    printf("========== 김준후 2023041018 ==========\n");
    printf("[checking values after ptr = &i]\n");
    printf("value of i == %d\n", i);        // i = 1234
    printf("address of i == %p\n", &i);     // i의 주소 = 0061FF1C
    printf("value of ptr == %p\n", ptr);    // ptr의 값 = i의 주소 = 0061FF1C
    printf("address of ptr == %p\n", &ptr); // ptr의 주소 = 0061FF18
    printf("value of *ptr == %d\n", *ptr);  //*ptr의 값 = i = 1234
    dptr = &ptr;                            // dptr = &ptr, dptr에 ptr의 주소(=0061FF18) 할당

    printf("========== 김준후 2023041018 ==========\n");
    printf("[checking values after dptr = &ptr]\n");
    printf("value of i == %d\n", i);           // i = 1234
    printf("address of i == %p\n", &i);        // i의 주소 = 0061FF1C
    printf("value of ptr == %p\n", ptr);       // ptr의 값 = i의 주소 = 0061FF1C
    printf("address of ptr == %p\n", &ptr);    // ptr의 주소 = 0061FF18
    printf("value of *ptr == %d\n", *ptr);     //*ptr의 값 = i = 1234
    printf("value of dptr == %p\n", dptr);     // dptr의 값 = ptr의 주소 = 0061FF18
    printf("address of dptr == %p\n", &dptr);  // dptr의 주소 = 0061FF14
    printf("value of *dptr == %p\n", *dptr);   //*dptr의 값 = ptr의 값 = i의 주소 = 0061FF1C
    printf("value of **dptr == %d\n", **dptr); //**dptr의 값 = *ptr의 값 = i = 1234

    *ptr = 7777; //*ptr = 7777
    printf("========== 김준후 2023041018 ==========\n");
    printf("[after *ptr = 7777]\n");
    printf("value of i == %d\n", i);           // i = *ptr의 값 = 7777, 즉 i = 7777
    printf("value of *ptr == %d\n", *ptr);     //*ptr = 7777
    printf("value of **dptr == %d\n", **dptr); //**dptr의 값 = *ptr = 7777, 즉 **dptr = 7777

    **dptr = 8888; //*dptr = 8888 
    printf("========== 김준후 2023041018 ==========\n");
    printf("[after **dptr = 8888]\n");
    printf("value of i == %d\n", i);           // i = *ptr의 값 = **dptr = 8888, 즉 i = 8888 
    printf("value of *ptr == %d\n", *ptr);     //*ptr = **dptr = 8888, 즉 *ptr = 8888
    printf("value of **dptr == %d\n", **dptr); //*dptr = 8888
}