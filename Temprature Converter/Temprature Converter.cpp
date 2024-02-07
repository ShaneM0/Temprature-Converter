// Code made by _sm0

#include <iostream>

#include <ctime>

#include <cstdlib>

using namespace std;

class temp {
public:

    // Variables
    string answer; // This is the yes and no answers only
    string conversionAnswer; // Celsius or Fahrenheit answer only
    double f; // Fahrenheit
    double c; // Celsius

    // Introduction for the user that opens the program
    void introduction() {
        cout << "Are you ready to answer your question about the temprature?" << "\n" << "\n";
        cin >> answer;
        cout << "\n" << "\n";

        if (answer == "Yes" || answer == "YES" || answer == "yes") {
            conversion();
        }
        else if (answer == "No" || answer == "NO" || answer == "no") {
            // If the user puts a invalid answer in, the program closes
            cout << "Closing.." << endl;
        }
    }

    // Start of the program for real
    void conversion() {
        cout << "What would you like to convert? (Celsius) or (Fahrenheit)." << "\n" << "\n";
        cin >> conversionAnswer; // Asks What Would You Want To Convert
        cout << "\n" << "\n";

        if (conversionAnswer == "Celsius" || conversionAnswer == "celsius") {
            cout << "What number would you like to convert?" << "\n" << "\n";
            cin >> c;

            c = c * 1.8 + 32; // Conversion Method For Celsius to Fahrenheit

            cout << "Your number is: °" << c << "!" << "\n" << "\n"; // Prints the answer

            // Checking if the user wants to do it again, otherwise the program closes.
            cout << "Again?" << "\n";
            cin >> answer;

            if (answer == "Yes" || answer == "yes" || answer == "YES") {
                conversion();
                cout << "\n" << "\n";
            }
            else if (answer == "No" || answer == "no" || answer == "NO") {
                cout << "Closing..." << endl;
            }
            else {
                // If the user puts a invalid answer in, the program closes
                cout << "Invalid Input";
            }
        }
        else if (conversionAnswer == "Fahrenheit" || conversionAnswer == "fahrenheit") {
            cout << "What number would you like to convert?" << "\n" << "\n";
            cin >> f;

            f = (f - 32) / 1.8; // Conversion Method For Fahrenheit to Celsius
            cout << "\n" << "\n";

            cout << "Your number is: °" << f << "!" << "\n" << "\n"; // Prints the answer

            // Checking if the user wants to do it again, otherwise the program closes.
            cout << "Again?" << "\n";
            cin >> answer;

            if (answer == "Yes" || answer == "yes" || answer == "YES") {
                conversion();
                cout << "\n" << "\n";
            }
            else if (answer == "No" || answer == "no" || answer == "NO") {
                cout << "Closing..." << endl;
            }
            else {

                // If the user puts a invalid answer in, the program closes
                cout << "Invalid Input";
            }
        }
        else {
            cout << "Invalid Input"; // If the output is wrong it sends a error
        }
    }
};

int main() {
    temp temp;
    temp.introduction();
}