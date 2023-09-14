#include <iostream>
using namespace std;

string getPlanetName(int planetCode) {
    string planetName;

    switch (planetCode) {
        case 1:
            planetName = "Mercury";
            break;
        case 2:
            planetName = "Venus";
            break;
        case 3:
            planetName = "Earth";
            break;
        case 4:
            planetName = "Mars";
            break;
        case 5:
            planetName = "Jupiter";
            break;
        case 6:
            planetName = "Saturn";
            break;
        case 7:
            planetName = "Uranus";
            break;
        case 8:
            planetName = "Neptune";
            break;
        default:
            planetName = "Unknown planet";
            break;
    }

    return planetName;
}

int main() {
    int planetCode;
    cin >> planetCode;
    string planetName = getPlanetName(planetCode);
    cout<<planetName<<endl;
    return 0;
}
