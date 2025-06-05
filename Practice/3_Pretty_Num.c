//Lahya likes the number 239. Therefore, she considers a number pretty if its last digit is 2, 3 or 9. Lahya wants to watch the numbers between L and R (both inclusive), so she asked you to determine how many pretty numbers are in this range. Can you help her?
//ld=last digit
#include<stdio.h>
int main() {
    int L, R, count = 0;
    scanf("%d %d", &L, &R);

    for (int i=L;i<= R;i++) {
        int ld=i%10;
        if (ld==2||ld== 3||ld==9)
            count++;
    }

    printf("Pretty Num: %d\n", count);
    return 0;
}
