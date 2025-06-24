/*For 1 rotation, Earth takes 24 hours. 
It takes approximately 365.25 days (365 days and 6 hours) for the Earth to complete one revolution around the sun. 
That is what we call a year. But since we only count 365 days in a year, we make up for it by adding those 6 hours for 4 years. 
We end up adding a day to a year every four years. 
This year is called a Leap year. In a leap year, February has 29 days instead of 28, so, in total, it has 366 days.*/

/*
A year which is evenly divisible by 4 is said to be leap year. 
But this caused some errors because 1700, 1800, 1900, etc. are evenly divisible by 4 but not leap years.
To correct this mistake, in addition to being divisible by 4, if an year is divisible by 100, 
then it should also be divisible by 400, only then it will be a leap year.*/

#include<stdio.h>
int main(){
    int y;
    printf("Enter a Year:");
    scanf("%d",&y);

    if(y%4==0){
        if(y%100==0){
            if(y%400==0){
                printf("%d is Leap Year.",y);
            }
            else{
                printf("%d is not Leap Year.",y);
            }
        }
        else{
            printf("%d is Leap Year.",y);
        }
    }
    else{
        printf("%d is not Leap Year.",y);
    }
    return 0;
}
