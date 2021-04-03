#include <iostream>

int main() {
    system("clear");    
    
    char likeMelons;
    int slices;

    std::cout << "Oi dyou like melons? "; std::cin >> likeMelons;

    if (likeMelons == 'y') {
        std::cout << "YOO Epic how many melon slices dyou eat in a day? "; std::cin >> slices;

        if (slices >= 69420) {
            std::cout << "ALL HAIL THE MELON KING YAYAYA";
        } else {
            std::cout << "Lmao normie only eats " << slices << " slices of melon in a day. Shame.";
        }

    } else {
        std::cout << "Kil";
    }

    return 0;
}
    