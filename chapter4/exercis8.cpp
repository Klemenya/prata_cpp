//	8. Выполните упражнение 7, но с применением операции new для размещения
//	структуры в свободном хранилище вместо объявления структурной перемен­
//	ной. Кроме того, сделайте так, чтобы программа сначала запрашивала диаметр
//	пиццы, а потом - наименование компании.


#include <iostream>
#include <string>

struct Pizza{
    char manufacturer[30];
    int diameter;
    double weight;
};


int main(int argc, char** argv){
    Pizza *pizza = new Pizza;


    std::cout << "Enter the diameter of the pizza: ";
    std::cin >> (pizza->diameter);
    std::cin.get();

    std::cout << "Enter the pizza company: ";
    std::cin.get(pizza->manufacturer,30).get();

    std::cout << "Enter the weight of the pizza: ";
    std::cin >> pizza->weight;

    std::cout << "\nPizza company: " << pizza->manufacturer << std::endl;
    std::cout << "Diameter of the pizza: " << pizza->diameter << std::endl;
    std::cout << "Weight of the pizza: " << pizza->weight << std::endl;
    return 0;
}
