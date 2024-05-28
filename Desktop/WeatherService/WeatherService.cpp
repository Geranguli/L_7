#include <string>
#include <iostream>
#include "Weather.h"
#include "JsonService.h"
#include "XmlService.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    Weather weather("Киров", 49.6601, 58.5966, 5.69, "дождь", 4.27, 100);
    weather.print();

    JsonService js;
    Weather wJson = js.getWeather("weather.json");

    XmlService xs;
    Weather wXml = xs.getWeather("weather.xml");
    wXml.print();

    return 0;
}
