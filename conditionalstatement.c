#include <stdio.h>

int main() {
    //Less than: a < b
    //Less than or equal to: a <= b
    //Greater than: a > b
    //Greater than or equal to: a >= b
    //Equal to a == b
    //Not Equal to: a != b

    //The IF Statement
    //Syntax
    //if (condition) {
        // block of code to be executed if the condition is true
    //}
    if (20 > 18) {
        printf("20 is greater than 18\n");
    }

    int x = 20;
    int y = 15;
    if(x > y) {
        printf("X is greater than Y\n");
    } else {
        printf("X is less than Y");
    }

    //The Else IF Statment
    //Sytanx
    /*if (condition1) {
        // block of code to be executed if condition1 is true
    } else if (condition2) {
        // block of code to be executed if the condition1 is false and condition2 is true
    } else {
        // block of code to be executed if the condition1 is false and condition2 is false
    }
    */

    int time = 22;
    if (time < 10) {
        printf("Good Morning.");
    } else if (time < 20) {
        printf("Good Day.");
    } else {
        printf("Good Evening.\n");
    }

    //Short Hand If Else (Ternary Operator)
    //variable = (condition) ? expressionTrue : expressionFalse;
    int timem = 20;
    (timem < 18) ? printf("Good day.") : printf("Good evening.\n");

    //C Switch Statmente
    //Syntax
    /*switch (expression) {
    case x:
        // code block
        break;
    case y:
        // code block
        break;
    default:
        // code block
    }
    */
    int day = 4;

    switch (day) {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
    }

    /*When C reaches a break keyword, it breaks out of the switch block.

    This will stop the execution of more code and case testing inside the block.

    When a match is found, and the job is done, it's time for a break. There is no need for more testing.*/

    //The default keyword specifies some code to run if there is no case match:

    int days = 4;

    switch (days) {
        case 6:
            printf("Today is Saturday");
            break;
        case 7:
            printf("Today is Sunday");
            break;
        default:
            printf("Looking forward to the Weekend");
    }
}
