//	8. Выполните упражнение 7, но с применением операции new для размещения
//	структуры в свободном хранилище вместо объявления структурной перемен­
//	ной. Кроме того, сделайте так, чтобы программа сначала запрашивала диаметр
//	пиццы, а потом - наименование компании.


#include <iostream>
#include <cstring>

struct Pizza{
    char manufacturer[30];
    int diameter;
    double weight;
};

int main(int argc, char** argv){

    Pizza *pizza = new Pizza;

    std::cout << "Enter diameter of pizza: ";
    std::cin >> pizza->diameter;
    std::cin.get();


    std::cout << "Enter a name of manufacturer: ";
    std::cin.getline(pizza->manufacturer,30);

    std::cout << "Enter weight of pizza";
    std::cin >> pizza->weight;


    std::cout << pizza->manufacturer << std::endl;
    std::cout << pizza->diameter << std::endl;
    std::cout << pizza->weight << std::endl;
    return 0;
}
