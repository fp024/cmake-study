#include "utility.h"

int g_value = 0;

void setValue(int value) {
    g_value = value;
}

int getValue() {
    return g_value;
}
