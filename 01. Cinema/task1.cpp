#include <iostream>
using namespace std;
#include <iomanip>

int main() {
    string movie;
    int rows, columns, seats;
    double allTicketsCost;
    double price = 0.0; // Initialize price to avoid uninitialized variable warning

    cin >> movie >> rows >> columns;

    seats = rows * columns;

    if (movie == "Premiere") {

        price = 12.00;
        allTicketsCost = price * seats;

    }else if(movie == "Normal") {

        price = 7.50;
        allTicketsCost = price * seats;

    }else{
        price = 5.00;
        allTicketsCost = price * seats;
    }


    // Add more cases for different movies if needed using else-if statements

    // Perform further calculations or actions based on the movie and input values

    cout << fixed << setprecision(2) << allTicketsCost << " leva" << endl;

    return 0;
}
