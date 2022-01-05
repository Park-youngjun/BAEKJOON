#include<stdio.h>

int main() {
    int x, y;
    scanf_s("%d %d", &x, &y);
    if (y < 45) {
        if(x == 0){
            x = 23;
            y = y + 60;
        }
        else {
            x -= 1;
            y += 60;
        }
        
    }

    printf("%d %d", x, y - 45);

    return 0;
}