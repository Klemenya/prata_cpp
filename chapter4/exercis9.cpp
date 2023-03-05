//	9. Выполните упражнение 6 , но вместо объявления массива из трех структур
//	CandyBar используйте операцию new для динамического размещения массива.



#include <iostream>
#include <string>

struct CandyBar{
    std::string nameOfBox;
    double weight;
    int calories;
};



int main(int argc, char ** argv){
    const int SIZE = 3;
    CandyBar *snack = new CandyBar[SIZE];

    for(int i(0); i < SIZE; ++i){
        std::cout << "Enter name of box " << i+1 << ": ";
        std::cin >> (snack+i)->nameOfBox;
        std::cout << "Weight of box " << i+1 << ": ";
        std::cin >> (snack+i)->weight;
        std::cout << "Calories in box " << i+1 << ": ";
        std::cin >> (snack+i)->calories;
    }

    for(int i(0); i < SIZE; ++i){
        std::cout << "Name of box " << i+1 << ": " << snack[i].nameOfBox << std::endl;
        std::cout << "Weight of box " << i+1 << ": " << snack[i].weight << std::endl;
        std::cout << "Calories in box " << i+1 << ": "  << snack[i].calories << std::endl;
    }

    return 0;
}


