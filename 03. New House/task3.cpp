#include <iostream>
using namespace std;
#include <iomanip>

int main() {
    string flowerType;
    int flowersCount, budget;
    double discount, price, flowersCost;

    discount = 0.0;

    
    cin >> flowerType >> flowersCount >> budget;

    if (flowerType == "Roses") {

        price = 5;
        flowersCost = price * flowersCount;
        
        if (flowersCount > 80){

            discount = 0.10 * flowersCost;
        }

        flowersCost -= discount;}
    else if(flowerType == "Dahlias") {

        price = 3.80;
        flowersCost = price * flowersCount;
        
        if (flowersCount > 90){

            discount = 0.15 * flowersCost;
        }

        flowersCost -= discount;

    }
    else if(flowerType == "Tulips") {

        price = 2.80;
        flowersCost = price * flowersCount;
    
        if (flowersCount > 80){

            discount = 0.15 * flowersCost;
        }

        flowersCost -= discount;

    }
    else if(flowerType == "Narcissus") {

        price = 3;
        flowersCost = price * flowersCount;
    
        if (flowersCount < 120){

            discount = 0.15 * flowersCost;
        }

        flowersCost += discount;

    }
    else if(flowerType == "Gladiolus") {

        price = 2.50;
        flowersCost = price * flowersCount;
    
        if (flowersCount < 80){

            discount = 0.20 * flowersCost;
        }

        flowersCost += discount;

    }

    if(budget <= flowersCost){
        cout << "Not enough money, you need " <<  fixed << setprecision(2) << showpoint << (flowersCost - budget) << " leva more." << endl;
    } else {
        cout << "Hey, you have a great garden with " << flowersCount << " " << flowerType << " and "
     << fixed << setprecision(2) << showpoint << (budget - flowersCost) << " leva left." << endl;

    }


    return 0;
}
