//Get hour and minute input from the user. Find the minimum angle between them.
#include <stdio.h>
#include <math.h>

int main() {
    int hr, min;
    float angle;

    printf("Enter hour (0-12): ");
    scanf("%d", &hr);
    printf("Enter minute (0-59): ");
    scanf("%d", &min);

    if (hr < 0 || hr > 12 || min < 0 || min > 59) {
        printf("Invalid input.\n");
        return 1;
    }

    // Calculate angle
    angle = fabs((30 * hr) - (5.5 * min));

    // Get the minimum angle
    if (angle > 180) {
        angle = 360 - angle;
    }

    printf("The minimum angle: %.2f\n", angle);

    return 0;
}
