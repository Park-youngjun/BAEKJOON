#include<stdio.h>

int main() {
    int a, b, c, d, e, num;
    scanf_s("%d %d", &a, &b);
    
    num = b;
    c = b / 100;
    b %= 100;
    d = b / 10;
    b %= 10;
    e = b % 10;


    printf("%d \n", e * a);
    printf("%d \n", d * a);
    printf("%d \n", c * a);
    printf("%d \n", a * num);

 
    return 0;
}