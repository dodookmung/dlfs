#include <stdio.h>

int AND(float x1, float x2)
{
    float w1 = 0.5, w2 = 0.5, theta = 0.7;
    float tmp = x1*w1 + x2*w2;

    if (tmp <= theta) {
        return 0;
    }
    else if (tmp > theta) {
        return 1;
    }
    else {
        return 1;
    }
}


int main()
{
    printf("AND\n");
    printf("%d\n", AND(0, 0));
    printf("%d\n", AND(1, 0));
    printf("%d\n", AND(0, 1));
    printf("%d\n", AND(1, 1));

    return 0;
}

