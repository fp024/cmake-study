#include <stdio.h>
#include "utility.h"

int main() {
    printf("previous: %d\n", getValue());
    setValue(1000);
    printf("after   : %d\n", getValue());

    return 0;
}