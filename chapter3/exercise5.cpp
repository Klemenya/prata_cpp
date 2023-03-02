// 	5.Напишите программу, которая запрашивает текущую численность населения
//        Земли и текущую численность населения США (или любой другой страны).
//        Сохраните эту информацию в переменных типа long long. В качестве резуль­
//        тата программа должна отображать процентное соотношение численности
//        населения США (или выбранной страны) и всего мира. Результат выполнения
//        программы должен выглядеть следующим образом:
//                Enter the world's population: 6898758899
//                Enter the population of the US : 310783781
//                The population of the US is 4.50492 % of the world population.
//        Можете поискать в Интернете более точные значения.

#include <iostream>
//#include <climits>

int main(int argc, char **argv){
    std::cout << "Enter the world's population: ";
    //std::cout << "\n" << INT_MAX;
    long long worldsPopulation;
    std::cin >> worldsPopulation;
    
    std::cout << "Enter the population of the US : ";
    long long usaPopulation;
    std::cin >> usaPopulation;
    
    std::cout << "The population of the US is "
              << (usaPopulation * 100) / static_cast<float>(worldsPopulation)
              << " % of the world population." << std::endl;
    return 0;
}
