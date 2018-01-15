#ifndef RGBLED_H
#include <Arduino.h>

struct RGBColour{
    byte red;
    byte green;
    byte blue;
};

class RGBLed{
public:
    RGBLed(int redPin, int greenPin, int bluePin, boolean commonAnode=false);
    void setColour(int red, int green, int blue);
    void setColour(RGBColour colour);
    //TODO: Implement setColour that accepts rgb hex code
    void transition(RGBColour start, RGBColour end, int steps, int delay);
private:
    int _redPin;
    int _greenPin;
    int _bluePin;
    boolean _commonAnode; 
};

static const RGBColour RED = {255, 0, 0};
static const RGBColour GREEN = {0, 255, 0};
static const RGBColour BLUE = {0, 0, 255};
static const RGBColour YELLOW = {255, 255, 0};
static const RGBColour WHITE = {255, 255, 255};
static const RGBColour PURPLE = {128, 0, 128};
static const RGBColour OFF {0, 0, 0};

#define RGBLED_H
#endif