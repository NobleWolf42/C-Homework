/*
Output each floating-point value with two digits after the decimal point, which can be achieved by executing
cout << fixed << setprecision(2); once before all other cout statements.

(1) Prompt the user to enter five numbers, being five people's weights. Store the numbers in a vector of doubles. Output the vector's numbers on one line, each number followed by one space. (2 pts)

Ex:

    *Enter weight 1:
    *236.0
    *Enter weight 2:
    *89.5
    *Enter weight 3:
    *142.0
    *Enter weight 4:
    *166.3
    *Enter weight 5:
    *93.0
    *You entered: 236.00 89.50 142.00 166.30 93.00

(2) Also output the total weight, by summing the vector's elements. (1 pt)

(3) Also output the average of the vector's elements. (1 pt)

(4) Also output the max vector element. (2 pts)


Ex:

    *Enter weight 1:
    *236.0
    *Enter weight 2:
    *89.5
    *Enter weight 3:
    *142.0
    *Enter weight 4:
    *166.3
    *Enter weight 5:
    *93.0
    *You entered: 236.00 89.50 142.00 166.30 93.00 

    *Total weight: 726.80
    *Average weight: 145.36
    *Max weight: 236.00

*/
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {

    //Declaring variables
    int N = 5;
    double total = 0, max = 0;
    vector<double> userWeight(N);

    //Setting precision
    cout << fixed << setprecision(2);

    //Getting user input
    for (int i = 0; i < N; ++i) {
        double tempInt;
        cout << "Enter weight " << i + 1 << ":" << endl;
        cin >> tempInt;
        userWeight.at(i) = tempInt;
    }

    //Outputting input, and getting total, average, and max weight
    cout << "You entered: ";
    for (size_t i = 0; i < userWeight.size(); ++i) {
        cout << userWeight.at(i) << " ";
        total = total + userWeight.at(i);
        if (userWeight.at(i) > max) {
            max = userWeight.at(i);
        }
    }
    cout << endl << endl;

    //Outputting total, max, and average weight
    cout << "Total weight: " << total << endl << "Average weight: " << total / N << endl << "Max weight: " << max << endl;

    return 0;
}