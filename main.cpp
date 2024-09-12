#include <iostream>

using namespace std;

int main() {

    int age{0};
    int maximumHealthRateByTanaka{0};
    int maximumHealthRateByGellish{0};
    int maximumHealthRateByNas{0};
    int maximumHealthRateByAthletes{0};

    cout << "Enter your age: ";
    cin >> age;

    maximumHealthRateByAthletes = 220 - age;
    maximumHealthRateByTanaka = 208 - 0.7 * age;
    maximumHealthRateByGellish = 207 - 0.7 * age;
    maximumHealthRateByNas = 211 - 0.64 * age;

    cout << "Suggested MHR values by young athletes : "
            << maximumHealthRateByAthletes << endl;
    cout << "Suggested MHR values by Tanaka : "
         << maximumHealthRateByTanaka << endl;
    cout << "Suggested MHR values by Gellish : "
         << maximumHealthRateByGellish << endl;
    cout << "Suggested MHR values by Nas : "
         << maximumHealthRateByNas << endl;

    cout << "Your MHR value should be in between "
        << maximumHealthRateByGellish  << " - " << maximumHealthRateByNas << endl;
    return 0;
}