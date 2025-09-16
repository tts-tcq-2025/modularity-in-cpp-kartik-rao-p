#include "color_code_test.h"
#include "color_code_definitions.h"
#include <stdio.h>

int main() {
    printf("Color Code Manual:\n");
    for (int i = 1; i <= numberOfMajorColors * numberOfMinorColors; ++i) {
        ColorPair cp = GetColorFromPairNumber(i);
        char buffer[50];
        ColorPair_ToString(&cp, buffer);
        printf("%d: %s\n", i, buffer);
    }
    printf("\n");

    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    printf("All tests passed!\n");
    return 0;
}
