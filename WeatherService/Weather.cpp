#include "Weather.h"
#include <iostream>

Weather::Weather(std::string city, double lon, double lat, double temperature, std::string weather, double windSpeed, int clouds)
{
	this->city = city;
	this->lon = lon;
	this->lat = lat;
	this->temperature = temperature;
	this->weather = weather;
	this->windSpeed = windSpeed;
	this->clouds = clouds;
}

void Weather::Description()
{
	std::cout << "City: " << city << "\n";
	std::cout << "Longitude: " << lon << "\n";
	std::cout << "Latitude: " << lat << "\n";
	std::cout << "Temperature: " << temperature << "\n";
	std::cout << "Weather: " << weather << "\n";
	std::cout << "Wind speed: " << windSpeed << "\n";
	std::cout << "Clouds: " << clouds << "\n";
}
