//	8. Напишите программу, которая использует массив char и цикл для чтения по
//	одному слову за раз до тех пор, пока не будет введено слово done. Затем про­
//	грамма должна сообщить количество введенных слов (исключая done ) . Пример
//	запуска должен быть таким:
//	Вводите слова ( для завершения введите слово done ) :
//		anteater birthday category dumpster
//		envy finagle geometry done for sure
//		Вы в вели 7 слов .
//	Вы должны включить заголовочный файл cstring и применять функцию
//	strcmp() для выполнения проверки.


#include <iostream>
#include <cstring>

int main(int argc, char ** argv){

    std::cout << "Enter words (to complete, type the word done) :\n";
    char arr[255]{};
    char ch{};
    int words(0);

    while(strcmp(arr, "done")){ 
        int idx = 0;
        while(std::cin.get(ch) && (ch!=' ') ){
            arr[idx] = ch;
            arr[idx+1] = '\0';
            ++idx;
        }
        ++words;
    }

    std::cout << words;

    return 0;
}

