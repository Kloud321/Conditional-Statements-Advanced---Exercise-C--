#include <iostream>
using namespace std;
#include <iomanip>

int main() {

    int gradus;

    string daytime, outfit, shoes;
   

    cin >> gradus >> daytime;

    if ( gradus >=10 && gradus <= 18){
        if(daytime == "Morning"){
            outfit = "Sweatshirt";
            shoes = "Sneakers";
        } else if (daytime == "Afternoon"){
            outfit = "Shirt";
            shoes = "Moccasins";
        }else if (daytime == "Evening"){
            outfit = "Shirt";
            shoes = "Moccasins";
        }
       
    }

    else if (gradus > 18 && gradus <= 24){

         if(daytime == "Morning"){
            outfit = "Shirt";
            shoes = "Moccasins";
        } else if (daytime == "Afternoon"){
            outfit = "T-Shirt";
            shoes = "Sandals";
        }else if (daytime == "Evening"){
            outfit = "Shirt";
            shoes = "Moccasins";
        }
    }

    else if (gradus >= 25){
        
         if(daytime == "Morning"){
            outfit = "T-Shirt";
            shoes = "Sandals";
        } else if (daytime == "Afternoon"){
            outfit = "Swim Suit";
            shoes = "Barefoot";
        }else if (daytime == "Evening"){
            outfit = "Shirt";
            shoes = "Moccasins";
        }
    }
    // Add more cases for different movies if needed using else-if statements

    // Perform further calculations or actions based on the movie and input values

    cout << "It's "<< gradus << " degrees, get your " << outfit << " and " << shoes << "." << endl;

    return 0;
}
