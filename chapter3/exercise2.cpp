//	2.Напишите короткую программу, которая запрашивает рост в футах и дюймах и
//        вес в фунтах. (Для хранения этой информации используйте три переменных. )
//        Программа должна выдать индекс массы тела (body mass index - BMI). Чтобы
//        рассчитать BMI, сначала преобразуйте рост в футах и дюймах в рост в дюйма.х
//        (1 фут = 12 дюймов). Затем преобразуйте рост в дюймах в рост в метрах, умно­
//        жив на О.0254. Далее преобразуйте вес в фунтах в массу в килограммах, раз­
//        делив на 2.2. После этого рассчитайте BMI, разделив массу в килограммах на
//        квадрат роста в метрах. Для представления различных коэффициентов преоб­
//        разования используйте символические константы.


#include <iostream>
#include <cmath>

int main(int argc, char **argv){
    const int inchInFoot = 12;
    const double inchInMeter = 0.0254;
    const double kgInPound = 2.2;
    int heightFoot, heightInch,  weightPounds;
    std::cout << "Enter your height (foots): _\b";
    std::cin >> heightFoot;
    std::cout << "Enter your height (inch) : _\b";
    std::cin >> heightInch;
    std::cout << "Enter your weight (pounds): _\b";
    std::cin >> weightPounds;
    
    heightInch += heightFoot *  inchInFoot;
    double heightInMeter = heightInch *  inchInMeter;
    double kg = weightPounds / kgInPound;
    double bmi = kg / pow(heightInMeter,2);

    std::cout << "BMI is: " << bmi << std::endl;




    return 0;
}
