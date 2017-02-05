#include <stdio.h>

int main(void) {
  int grade = 45; /* arbitrary initialiaztion of grade */;
    char letter = 'f';    /* by default... */

    if (grade > 90) {
        letter = 'a';
        printf("%c\n", letter);
    }
    else if (grade > 80) {
        letter = 'b';
        printf("%c\n", letter);
    }
    else if (grade > 70) {
        letter = 'c';
        printf("%c\n", letter);
    }
    else if (grade > 60) {
        letter = 'd';
        printf("%c\n", letter);
    }
    else printf("%c\n", letter);
    return 0;
}

// Each statement after each if needs to include printf("%c\n", letter); because otherwise this program would not printout anything if grade was greater then 60.
// For example,  when we initialize the value of grade as 78, Terminal does not show any value after running the program.

// Also we need to write else if instead of only if for except for the first one when grade is greater than 90; otherwise this program would produce more than two values when grade is greater than 60 because all if conditions would be applicable to the value of grade. 

//For instance, when we put 78 as the initial value of grade, Terminal produced the following values.
//c
//d
// this is because if we do not have 'else' in front of if, the value of 78 satisfties the condition of both (grade > 70) and (grade > 80). In this case, the lase 'else' would not be run because more than one of the conditions above 'else' is already satisfied. 
