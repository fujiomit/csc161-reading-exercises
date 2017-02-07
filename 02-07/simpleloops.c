#include <stdio.h>

int main(void) {
    for (int i = 0; i < 10; i++) {
        printf("%d\n", i);
    }
    for (int i = 0; i <= 10; i++) {
        printf("%d\n", i);
    }
    for (int i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }
    for (int i = 10; i > 0; i--) {
        printf("%d\n", i);
    }
    for (int i = 10; i >= 0; i--) {
        printf("%d\n", i);
    }

    return 0;
}

//The outputs are
//0
//1
//2
//3
//4
//5
//6
//7
//8
//9
//0
//1
//2
//3
//4
//5
//6
//7
//8
//9
//10
//1
//2
//3
//4
//5
//6
//7
//8
//9
//10
//10
//9
//8
//7
//6
//5
//4
//3
//2
//1
//10
//9
//8
//7
//6
//5
//4
//3
//2
//1
//0

//The first two loops initialize i as 0. However, while the first one does not cinclude i = 10 as its test condition, the second one does contain it.

//The third loop initalizes i as 1.

//The fourth and fifth loops initalize i as 10. While the fourth one does not contain i = 10 as its condition, the fifth one does include it.

//Question1; we should choose int n as initialization, and n < n+10
//Question2; we should choose int i = 0 as the initialization and 1 <= 10 as the test expression.
//Question3; we should choose int int i = 10 as the initizalization and i >= 0 as the expression.
