#include "color_code_test.h"        // Include the test functions
#include "color_code_definitions.h" // Include the definitions
#include <stdio.h>

// Define a type for our callback function
typedef void (*PairNumberProcessor)(int pairNumber);

void iterateColorPairNumbers(PairNumberProcessor processor) {
    for (int i = 1; i <= numberOfMajorColors * numberOfMinorColors; ++i) {
        processor(i);
    }
}

void printColorPairEntryProcessor(int pairNumber) {
    ColorPair cp = GetColorFromPairNumber(pairNumber);
    char buffer[50];
    ColorPair_ToString(&cp, buffer);
    printf("%d: %s\n", pairNumber, buffer);
}

void printColorCodeManual() {
    printf("Color Code Manual:\n");
    iterateColorPairNumbers(printColorPairEntryProcessor);
    printf("\n");
}

int main() {

    printColorCodeManual();

    // Run the tests
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    printf("All tests passed!\n");
    return 0;
}
