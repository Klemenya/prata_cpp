//	10. Напишите программу, использующую вложенные циклы, которая запрашивает 
//	у пользователя значение количества строк для отображения. Затем она должна 
//	отобразить указанное число строк со звездочками, с одной звездочкой в первой 
//	строке, двумя - во второй и т.д: В каждой строке звездочкам должны предше­
//	ствовать точки - в таком количестве, чтобы общее число символов в каждой 
//	строке было равно количеству строк. Пример запуска программы должен вы­
//	глядеть следующим образом: 
//	Введите количество строк : 5 
//		....*
//		...**
//		..***
//		.****
//		*****

#include <iostream>

int main(int argc, char **argv){
    std::cout << "Enter the number of lines: ";
    int nums;
    std::cin >> nums;

    for(int i(0); i<nums; ++i){
        for(int j(0); j<nums; ++j){
            if( i+j+1 < nums){
                std::cout <<' ';
            } else {
                std::cout << '*';
            }
        }
        std::cout << std::endl;
    }
    return 0;
}
