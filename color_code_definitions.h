#ifndef COLOR_CODE_DEFINITIONS_H
#define COLOR_CODE_DEFINITIONS_H

#include <stdio.h>
#include <string.h>

// Define enums for Major and Minor Colors
typedef enum {
    WHITE, RED, BLACK, YELLOW, VIOLET
} MajorColor;

typedef enum {
    BLUE, ORANGE, GREEN, BROWN, SLATE
} MinorColor;

// External declarations for color names and counts
extern const char* MajorColorNames[];
extern const int numberOfMajorColors;
extern const char* MinorColorNames[];
extern const int numberOfMinorColors;

// Structure to represent a color pair
typedef struct {
    MajorColor majorColor;
    MinorColor minorColor;
} ColorPair;

// Function declarations
ColorPair ColorPair_create(MajorColor major, MinorColor minor);
MajorColor ColorPair_getMajor(ColorPair* colorPair);
MinorColor ColorPair_getMinor(ColorPair* colorPair);
void ColorPair_ToString(ColorPair* colorPair, char* buffer);

ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(MajorColor major, MinorColor minor);

#endif
