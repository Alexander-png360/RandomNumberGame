#include <iostream>

int main(){

    srand(time(0)); //number seed
    
    //initial variables
    int numbertoguess = rand() % 100 + 1; //random number itself
    int usernumberguess = 0; // user guess initial
    
    //comment this out to play the game
    std::cout << "Random Number is " << numbertoguess << '\n';
    
    std::cout<< "Pick A Number: ";
    
    std::cin >> usernumberguess; //user guess

    if (numbertoguess == usernumberguess)
    {
        std::cout << "Right Number"; //result if right number
    }
    else{
        std::cout << "Wrong Number"; //result if wrong number
    }
    




    return 0;
}