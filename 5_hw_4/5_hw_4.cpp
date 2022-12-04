#include <iostream>
#include <string>

struct meal { //приём пищи
    std::string time;
    std::string eda; //мясщ, овощи и тд
    int callcalories;
};

int main() {
    struct meal* chisla;
    struct meal zavtrak = { "7:30" , "omlet", 120 }, obed = { "12:30","meat and sup",450 }, dinner = { "19:30","cake and kebab",829 };

    chisla = new struct meal[365]; // 365 элементов
    chisla[0].time = zavtrak.time;
    chisla[0].eda = zavtrak.eda;
    chisla[0].callcalories = zavtrak.callcalories;

    chisla[1].time = obed.time;
    chisla[1].eda = obed.eda;
    chisla[1].callcalories = obed.callcalories;

    chisla[2].time = dinner.time;
    chisla[2].eda = dinner.eda;
    chisla[2].callcalories = dinner.callcalories;

}


