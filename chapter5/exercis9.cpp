
//	9. Напишите программу, соответствующую описанию программы из упражнения 8,
//	но с использованием объекта string вместо символьного массива. Включите
//	заголовочный файл string и применяйте операции отношений для выполне­
//	ния проверки.


#include <iostream>
#include <string>

int main(int argc, char ** argv){

    std::cout << "Enter words (to complete, type the word done) :\n";
    std::string text{};
    int words{};

    while (std::cin >> text){
        if(text == "done"){
             break;
        }
        words++;
    }

    std::cout << words;

    return 0;
}

