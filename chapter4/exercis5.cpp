//      5. Структура CandyBar содержит три члена. Первый из них хранит название ко­
//      робки конфет. Второй - ее вес (который может иметь дробную часть) , а тре­
//      тий - число калорий (целое значение) . Напишите программу, объявляющую
//      эту структуру и создающую переменную типа CandyBar по имени snack, ини­
//      циализируя ее члены значениями "Mocha Munch " , 2.3 и 350, соответственно.
//      Инициализация должна быть частью объявления snack. И, наконец, программа
//      должна отобразить содержимое этой переменной.

#include <iostream>
#include <string>

struct CandyBar{
    std::string nameOfBox;
    double weight;
    int calories;
};



int main(int argc, char ** argv){

    CandyBar snack{"Mocha Munch", 2.3, 350};

    std::cout << "Name of box : " << snack.nameOfBox << std::endl;
    std::cout << "Weight of box : " << snack.weight << std::endl;
    std::cout << "Calories : " << snack.calories << std::endl;

    return 0;
}
