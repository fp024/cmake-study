#include <stdio.h>
#include "assert.h"
#include "utility.h"

int main() {
    setValue(1000);
    assert(1000 == getValue());
    return 0;
}