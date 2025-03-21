#include <iostream>
#include <ctime>

int main(){

    int event = rand() % 5 + 1;

    switch (event)
    {
    case 1:
        std::cout << "It is raining tacos";
        break;

    case 2:
        std::cout << "A volcano just erupted (DONT LOOK THERE AND LOOK STUPUID RUN YOU DUMBASS)";
        break;

    case 3:
        std::cout << "Think of it yourself i'm too lazy";
        break;

    case 4:
        std::cout << "There's a flood outside at 3 meters tall (You're probably dead lol)";
        break;
    
    case 5:
        std::cout <<"FLOOR IS LAVA";
        break;
    }
    
    return 0;
}