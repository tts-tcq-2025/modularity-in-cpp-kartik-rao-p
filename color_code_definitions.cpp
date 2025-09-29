#include "color_code_definitions.hpp"
#include <stdio.h>
#include <string.h>

// Definitions for color names and counts
const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};
const int numberOfMajorColors =
    sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);

const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};
const int numberOfMinorColors =
    sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

// ColorPair structure functions
ColorPair ColorPair_create(MajorColor major, MinorColor minor) {
    ColorPair cp;
    cp.majorColor = major;
    cp.minorColor = minor;
    return cp;
}

MajorColor ColorPair_getMajor(ColorPair* colorPair) {
    return colorPair->majorColor;
}

MinorColor ColorPair_getMinor(ColorPair* colorPair) {
    return colorPair->minorColor;
}

void ColorPair_ToString(ColorPair* colorPair, char* buffer) {
    strcpy(buffer, MajorColorNames[colorPair->majorColor]);
    strcat(buffer, " ");
    strcat(buffer, MinorColorNames[colorPair->minorColor]);
}

ColorPair GetColorFromPairNumber(int pairNumber) {
    int zeroBasedPairNumber = pairNumber - 1;
    MajorColor majorColor =
        (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    MinorColor minorColor =
        (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return ColorPair_create(majorColor, minorColor);
}

int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
    return major * numberOfMinorColors + minor + 1;
}
