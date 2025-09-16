#include "color_code_test.h"
#include "color_code_definitions.h" // Include the definitions
#include <stdio.h>
#include <assert.h>

void testNumberToPair(int pairNumber,
                      MajorColor expectedMajor,
                      MinorColor expectedMinor)
{
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    char colorPairStr[50];
    ColorPair_ToString(&colorPair, colorPairStr);
    printf("Got pair %s\n", colorPairStr);
    assert(ColorPair_getMajor(&colorPair) == expectedMajor);
    assert(ColorPair_getMinor(&colorPair) == expectedMinor);
}

void testPairToNumber(MajorColor major,
                      MinorColor minor,
                      int expectedPairNumber)
{
    int pairNumber = GetPairNumberFromColor(major, minor);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}
