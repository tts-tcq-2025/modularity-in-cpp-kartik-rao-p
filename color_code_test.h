#ifndef COLOR_CODE_TEST_H
#define COLOR_CODE_TEST_H

#include "color_code_definitions.hpp" // Include the definitions

// Function declarations for testing
void testNumberToPair(int pairNumber,
                      MajorColor expectedMajor,
                      MinorColor expectedMinor);

void testPairToNumber(MajorColor major,
                      MinorColor minor,
                      int expectedPairNumber);

#endif
