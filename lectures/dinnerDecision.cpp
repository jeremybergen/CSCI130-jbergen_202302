/*
Name: Jeremy Bergen

Dinner decision program
*/
#include <iostream>
#include <string>
#include <random>

using namespace std;

void promptName(string&);
void greetVictim(string);
void getInfo(int&, int&, int&);
string chooseLocation(int, int, int);

int main() {
    string victimName;
    int distance, price, temperature;
    string whereToGo;

    srand(time(0));

    promptName(victimName);
    greetVictim(victimName);

    getInfo(distance, price, temperature);

    whereToGo = chooseLocation(distance, price, temperature);

    if (whereToGo == "ERROR") {
        cout << "You had an error, check your parameters or something" << endl;
        return 1;
    }
    cout << "Your next meal will be...(drumroll...............) " << endl << whereToGo << endl;

    return 0;
}

string chooseLocation(int distance, int price, int temperature) {
    /*
    distance
    0-1: Bravo's Pizza
    1-3: McDonald's
    3-20: Los Jilberto's
    20+: Buffalo Wild Wings

    price
    <1: Dollar Store
    1-10: Wendy's
    10-50: Goat and Clover
    50+: Olive Garden

    temperature
    <30: Zoup
    30-60: iHop
    60-100: Graff Dairy
    >100: Dairy Queen
    */
    int randChoice = random()%3;
    switch(randChoice) {
        case 0:
            /*
                distance
                0-1: Bravo's Pizza
                1-3: McDonald's
                3-20: Los Jilberto's
                20+: Buffalo Wild Wings
            */
            if (distance < 1) {
                return "Bravo's Pizza";
            } else if (distance < 3) {
                return "McDonald's";
            } else if (distance < 20) {
                return "Los Jilberto's";
            } else {
                return "Buffalo Wild Wings";
            }
            break;
        case 1:
            /*
                price
                <1: Dollar Store
                1-10: Wendy's
                10-50: Goat and Clover
                50+: Olive Garden
            */
            if (price < 1)
                return "Dollar Store";
            else if (price < 10)
                return "Wendy's";
            else if (price < 50)
                return "Goat and Clover";
            else
                return "Olive Garden";
            break;
        case 2:
            /*
                temperature
                <30: Zoup
                30-60: iHop
                60-100: Graff Dairy
                >100: Dairy Queen
            */
            if (temperature < 30) return "Zoup";
            else if (temperature < 60) return "iHop";
            else if (temperature < 100) return "Graff Dairy";
            else return "Diary Queen";
            break;
        default:
            cout << "We should never get here because random()%3 will always be between 0-2" << endl;
            return "ERROR";
    }
    // if (distance < 1) {
    //     return "Bravo's Pizza";
    // }
    // if (distance < 1 || price < 1 || temperature < 30) {

    // }
}

void getInfo(int &distance, int &price, int &temperature) {
    cout << "How far do you want to travel? ";
    cin >> distance;

    cout << "How much do you want to spend? ";
    cin >> price;

    cout << "What is the temperature? ";
    cin >> temperature;
}

void promptName(string &name) {
    cout << "Please enter your full name: " << endl;
    getline(cin, name);
}

void greetVictim(string name) {
    cout << "Welcome " << name << " to our dinner selection." << endl;
    cout << "May the odds be ever in your favor..." << endl;
}