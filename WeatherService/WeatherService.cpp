#include <iostream>
#include "JsonService.h"
#include "XmlService.h"
#include "Weather.h"

int main()
{
    JsonService j;
    Weather w = j.getWeather("weather.json");
    w.Description();
    XmlService xs;
    Weather wxs = xs.getWeather("weather.xml");
    wxs.Description();
}
