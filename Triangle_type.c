#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a + b + c != 180 || a <= 0 || b <= 0 || c <= 0) {
        printf("Not a Triangle\n");
    }
    else if (a == 90 || b == 90 || c == 90) {
        if (a == b || b == c || a == c) {
            printf("Triangle is right isosceles\n");
        } else {
            printf("Triangle is right\n");
        }
    }
    else if (a == b && b == c) {
        printf("Triangle is equilateral\n");
    }
    else if (a == b || b == c || a == c) {
        printf("Triangle is isosceles\n");
    }
    else {
        printf("Triangle is not special\n");
    }

    return 0;
}