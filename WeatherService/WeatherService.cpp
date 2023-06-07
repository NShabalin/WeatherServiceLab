#include <iostream>
#include "JsonService.h"
#include "Weather.h"
#include "Service.h"

int main()
{
    JsonService js;
    Weather w = js.getWeather("weather.json");
    w.Description();
}
