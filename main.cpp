#include <iostream>

int main() {
    int x;
    double v;
    double i;
    double r;
    std::cout <<"Enter the following:\n";
    std::cout <<"Option 1 : Voltage and resistance is given\n";
    std::cout <<"Option 2 : Current and resistance is given\n";
    std::cout <<"Option 3 : voltage and current is given\n";
    std::cin >> x;
    switch (x) {
        case 1:
            std::cout <<"Enter voltage :";
            std::cin >> v;
            std::cout << "Enter resistance : ";
            std::cin >> r;
            i = v / r;
            std::cout << "The current is :" << i;
            break;

        case 2:
            std::cout << "Enter current : ";
            std::cin >> i;
            std::cout << "Enter resistance : ";
            std::cin >> r;
            v = i * r;
            std::cout << "The voltage is:" << v;
            break;
        case 3:
            std::cout << "Enter voltage : ";
            std::cin >> v;
            std::cout << "Enter current : ";
            std::cin >> i;
            r = v/i;
            std::cout <<"The resistance is " << r ;
            break;
        default:break;

    }


    }









