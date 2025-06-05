#include <stdio.h>
#include<math.h>
float side,area;
int main() {
    //root(3/4)*a^2
    printf("enter the length of side of equlateral triangle = ");
    scanf("%f",&side);
    area=((sqrt(3)/4)*side*side);
    printf("\narea of equlateral triangle = %f",area);
    return 0;
}