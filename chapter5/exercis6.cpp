//	5. Предположим, что вы продаете книгу по программированию на языке С++ для 
//	начинающих. Напишите программу, которая позволит ввести ежемесячные 
//	объемы продаж в течение года (в количестве книг, а не в деньгах) . Программа 
//	должна использовать цикл , в котором выводится приглашение с названием ме­
//	сяца, применяя массив указателей на char (или массив объектов s t r ing, если 
//	вы предпочитаете его) , инициализированный строками - названиями месяцев, 
//	и сохраняя введенные значения в массиве int. Затем программа должна найти 
//	сумму содержимого массива и выдать общий объем продаж за год. 

//	6. Выполните упражнение 5 , но используя двумерный массив для сохранения дан­
//	ных о месячных продажах за 3 года. Выдайте общую сумму продаж за каждый 
//	год и за все годы вместе. 


#include <iostream>

int main(int argc, char **argv){
    const char *months[12] {"January", "February", "March",
                             "April", "May", "June",
                             "July", "August", "September",
                             "October", "November", "December" };

    int arrBooks[3][12];
    int books(0), sumOfBooks(0), totalSum(0);


    for(int year(0); year < 3; ++year){
        for(int i(0); i < 12; ++i){
            std::cout << "Please, enter the number of book sold in " << months[i] << ": ";
            std::cin >> arrBooks[year][i];
        }
    }

    for(int year(0); year < 3; ++year){
        for(int i(0); i<12; ++i){
            std::cout <<"In "<< months[i] << " sold " << arrBooks[year][i];
            std::cout << " books."<< std::endl;
            sumOfBooks += arrBooks[year][i];
        }
        std::cout << "In " << year+1 << " year sales " << sumOfBooks <<"\n\n";
        totalSum += sumOfBooks;
        sumOfBooks = 0;
    }
    std::cout << "Total sales - " << totalSum << std::endl;

    return 0;
}
