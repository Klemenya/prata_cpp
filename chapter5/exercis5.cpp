//	5. Предположим, что вы продаете книгу по программированию на языке С++ для
//	начинающих. Напишите программу, которая позволит ввести ежемесячные
//	объемы продаж в течение года (в количестве книг, а не в деньгах) . Программа
//	должна использовать цикл , в котором выводится приглашение с названием ме­
//	сяца, применяя массив указателей на char (или массив объектов string, если
//	вы предпочитаете его) , инициализированный строками - названиями месяцев,
//	и сохраняя введенные значения в массиве int. Затем программа должна найти
//	сумму содержимого массива и выдать общий объем продаж за год.

#include <iostream>

int main(int argc, char **argv){
    const char *months[12] {"January", "February", "March",
                             "April", "May", "June",
                             "July", "August", "September",
                             "October", "November", "December" };

    int arrBooks[12];
    int books(0), sumOfBooks(0);


    for(int i(0); i < 12; ++i){
        std::cout << "Please, enter the number of book sold in " << months[i] << ": ";
        std::cin >> arrBooks[i];
        sumOfBooks += arrBooks[i];
    }

    for(int i(0); i<12; ++i){
        std::cout <<"In "<< months[i] << " sold " << arrBooks[i];
        std::cout << " books."<< std::endl;
    }

    std::cout << "Total sales - " << sumOfBooks << std::endl;

    return 0;
}

