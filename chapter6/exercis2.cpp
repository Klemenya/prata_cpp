//------------------------------------------------------------------------------
//    2. Напишите программу, читающую в массив doube до 10 значений пожертво­-
//    ваний. (Или, если хотите, используйте шаблонный объект array. ) Программа 
//    должна прекращать ввод при получении нечисловой величины. Она должна 
//    выдавать среднее значение полученных чисел, а также количество значений в 
//    массиве, превышающих среднее. 
//------------------------------------------------------------------------------

#include <iostream>

int main(int argc, char ** argv){
    char str[30] = "12.73645 kajdhf";
    char *end;
    double ld = atof(str);
    std::cout << ld << std::endl;
    return 0;
}