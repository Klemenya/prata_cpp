//    7.Вильям Вингейт (William Wingate) заведует службой анализа рынка пиццы.
//	О каждой пицце он записывает следующую информацию:
//	• наименование компании - производителя пиццы , которое может состоять
//		из более чем одного слова;
//	• диаметр пиццы;
//	• вес пиццы.
//	• Разработайте структуру, которая может содержать всю эту информацию, и
//	напишите программу, использующую структурную переменную этого типа.
//	Программа должна запрашивать у пользователя каждый из перечисленных
//	показателей и затем отображать введенную информацию . Применяйте cin
//	(или его методы) и cout.

#include <iostream>
#include <string>

struct Pizza{
    std::string manufacturer;
    int diameter;
    double weight;
};


int main(int argc, char** argv){
    Pizza pizza;
    std::cout << "Enter the pizza company: ";
    getline(std::cin, pizza.manufacturer);
    std::cout << "Enter the diameter of the pizza: ";
    std::cin >> pizza.diameter;
    std::cout << "Enter the weight of the pizza: ";
    std::cin >> pizza.weight;
    std::cout << std::endl;

    std::cout << "Pizza company: " << pizza.manufacturer << std::endl;
    std::cout << "Diameter of the pizza: " << pizza.diameter << std::endl;
    std::cout << "Weight of the pizza: " << pizza.weight << std::endl;
    return 0;
}
