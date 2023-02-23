//	7. Напишите программу, которая выдает запрос на ввод значений часов и минут.
//        Функция main() должна передать эти два значения функции, имеющей тип
//        void, которая отобразит эти два значения в следующем виде:
//                Enter the number of hours: 9
//                Enter the number of minutes: 28
//                Time: 9:2 8

#include <iostream>

void printTime(int, int);

int main(int argc, char **argv){
    int hours, minutes;
    std::cout << "Enter the number of hours: ";
    std::cin >> hours;
    std::cout << "Enter the number of minutes: ";
    std::cin >> minutes;
    printTime(hours, minutes);

    return 0;
}

void printTime(int hours, int minutes){
    std::cout << "Time: " << hours << ':' << minutes << std::endl;
}
