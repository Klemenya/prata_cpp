//------------------------------------------------------------------------------
//    2. Напишите программу, читающую в массив doube до 10 значений пожертво­-
//    ваний. (Или, если хотите, используйте шаблонный объект array. ) Программа 
//    должна прекращать ввод при получении нечисловой величины. Она должна 
//    выдавать среднее значение полученных чисел, а также количество значений в 
//    массиве, превышающих среднее. 
//------------------------------------------------------------------------------

#include <iostream>

int main(int argc, char ** argv){
    const int SIZEARR = 10;
    double arr[SIZEARR]{};
    int i{};
    double sum{};
    std::cout << "Please, enter the number: \n";
    std::cout << "Number 1#: ";
    while (i < SIZEARR && std::cin >>arr[i] ){
        sum+=arr[i];
        ++i;
        if(i < SIZEARR){
            std::cout << "Number " << i+1 << "#: ";
        }
        
    }
    double averageValue = sum / i;
    std::cout << "\nAverage value: " << averageValue << std::endl;

    for(int j{}; j < i;++j){
        if(arr[j]>averageValue){
            std::cout << "this number " << arr[j] << " is greater than average value" << std::endl;
        }
    }

    return 0;
}