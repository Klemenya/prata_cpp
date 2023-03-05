//    7.Вильям Вингейт (William Wingate) заведует службой анализа рынка пиццы.
//	О каждой пицце он записывает следующую информацию:
//		• наименование компании - производителя пиццы , которое может состоять
//		из более чем одного слова;
//		• диаметр пиццы;
//		• вес пиццы.
//		• Разработайте структуру, которая может содержать всю эту информацию, и
//		напишите программу, использующую структурную переменную этого типа.
//	Программа должна запрашивать у пользователя каждый из перечисленных
//	показателей и затем отображать введенную информацию . Применяйте cin
//	(или его методы) и cout.

#include <iostream>
#include <cstring>

struct Pizza{
    char manufacturer[30];
    int diameter;
    double weight;
};

int main(int argc, char** argv){

    Pizza pizza;
    std::cout << "Enter a name of manufacturer: ";
    std::cin.getline(pizza.manufacturer,30);
    std::cout << "Enter diameter of pizza: ";
    std::cin >> pizza.diameter;
    std::cout << "Enter weight of pizza";
    std::cin >> pizza.weight;


    std::cout << pizza.manufacturer << std::endl;
    std::cout << pizza.diameter << std::endl;
    std::cout << pizza.weight << std::endl;
    return 0;
}

