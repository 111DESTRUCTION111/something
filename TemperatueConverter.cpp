#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    ifstream fahrenheitTemperature;
    ofstream celsiusTemperature;
    string cityName;
    double temperature;

    fahrenheitTemperature.open("FahrenheitTemperature.txt");
    celsiusTemperature.open("CelsiusTemperature.txt");

    while (!fahrenheitTemperature.fail()) {
        fahrenheitTemperature >> cityName;
        fahrenheitTemperature >> temperature;
        temperature = (temperature - 32.0) * 5.0 / 9.0;
        celsiusTemperature << cityName << " " << temperature << endl;
    }

    fahrenheitTemperature.close();
    celsiusTemperature.close();

    return 0;
}