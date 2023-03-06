//      9. Выполните упражнение 6 , но вместо объявления массива из трех структур
//      CandyBar используйте операцию new для динамического размещения массива.




#include <iostream>
#include <string>

struct CandyBar{
    std::string nameOfBox;
    double weight;
    int calories;
};



int main(int argc, char ** argv){

    CandyBar *snack = new CandyBar[3];

    for(int i(0); i <3; ++i){
        std::cout << "Enter name of box " << i+1 << ": ";
        getline(std::cin, snack[i].nameOfBox);
        std::cout << "Weight of box " << i+1 << ": ";
        std::cin >> snack[i].weight;
        std::cout << "Calories in box " << i+1 << ": ";
        std::cin >> snack[i].calories;
        std::cout << std::endl;
        std::cin.get();
    }

    for(int i(0); i<3; ++i){
        std::cout << "Name of box " << i+1 << ": " << snack[i].nameOfBox << std::endl;
        std::cout << "Weight of box " << i+1 << ": " << snack[i].weight << std::endl;
        std::cout << "Calories " << i+1 << ": "  << snack[i].calories << std::endl;
    }
    
    delete [] snack;

    return 0;
}
