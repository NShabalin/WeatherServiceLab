#include <iostream>
#include "XmlService.h"
#include "Weather.h"

int main()
{
    XmlService xs;
    Weather w = xs.getWeather("weather.xml");
    w.Description();
    return 0;
}
