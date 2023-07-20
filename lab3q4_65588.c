#include <stdio.h>

int main() {
    int num, sum = 0, count = 0;

    while (1) {
        printf("enter a number(enter 0 to stop) : ");
        scanf("%d", &num);

        if (num <= 0) {
            break;
        }

        sum += num;
        count++;
    }

    if (count > 0) {
        float average = (float)sum / count;
        printf("summatiion :%d\n", sum);
        printf("average :%f\n", average);
    } else {
        printf("You didn't enter a number");
    }

    return 0;
}

