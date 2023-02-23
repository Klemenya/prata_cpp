//	5. Напишите программу, в которой функция main() вызывает определяемую
//        пользователем функцию, принимающую в качестве аргумента значение
//        температуры по Цельсию и возвращающую эквивалентное значение
//        температуры по Фаренгейту. Программа должна выдать запрос на ввод
//        значения по Цельсию и отобразить следующий результат:
//                Please enter а Celsius value: 20
//                20 degrees Celsiusis 68 degrees Fahrenheit.
//        Вот формула для этого преобразования:
//        Температура в градусах по Фаренгейту = 1,8 * Температура в градусах по
//        Целъсию + 32

#include <iostream>

double celsiusToFahr(int);

int main(int argc, char** argv){
    int  celsius;
    std::cout << "Please enter a Celsius value: ";
    std::cin >> celsius;
    std::cout << celsius << " degrees Celsiusis " << celsiusToFahr(celsius);
    std::cout << " degrees Fahrenheit." << std::endl;
    return 0;
}

double celsiusToFahr(int celsius){
    return (1.8 * celsius + 32);
}
