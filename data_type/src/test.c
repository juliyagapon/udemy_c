#include <stdio.h>

int main(void) {
    enum month {January, Feruary, March, April, May, June, Jule, August, September, Octomber, November, December};
    enum month thisMonth;
    thisMonth = September;
    printf("%d\n", thisMonth);

    return 0;
}