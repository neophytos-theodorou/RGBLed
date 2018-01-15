#include "RGBLed.h"

RGBLed::RGBLed(int redPin, int greenPin, int bluePin, boolean commonAnode){
    _redPin = redPin;
    _greenPin = greenPin;
    _bluePin = bluePin;
    _commonAnode = _commonAnode;

    pinMode(_redPin, OUTPUT);
    pinMode(_greenPin, OUTPUT);
    pinMode(_bluePin, OUTPUT);
}

void RGBLed::setColour(int red, int green, int blue){
    if(_commonAnode){
        red = 255 - red;
        green = 255 - green;
        blue = 255 - blue;
    }
    analogWrite(_redPin, red);
    analogWrite(_greenPin, green);
    analogWrite(_bluePin, blue);

}

void RGBLed::setColour(RGBColour colour){
    setColour(colour.red, colour.green, colour.blue);
}

void RGBLed::transition(RGBColour start, RGBColour end, int steps, int transDelay){
    float redStep = float(end.red - start.red) / steps;
    float greenStep = float(end.green - start.green) / steps;
    float blueStep = float(end.blue - start.blue) / steps;

    for(int i = 0; i < steps; i++){
        setColour(
            int(start.red + i * redStep),
            int(start.green + i * greenStep),
            int(start.blue + i * blueStep));
        delay(transDelay);
    }
}