#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int c;
    scanf("%d", &c);

    if(b + c < 60)
        printf("%d %d", a, b + c);
    else{
        int hour = (b + c) / 60;
        int min = (b + c) % 60;
        if(a + hour < 24)
            printf("%d %d", a+hour, min);
        else
            printf("%d %d", a+hour-24, min);
    }
}