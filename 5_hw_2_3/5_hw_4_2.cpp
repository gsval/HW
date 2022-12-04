#include <iostream>
#include <string>
struct family {
    std::string last_name;
    int vozrast;
    std::string who;

};
int main() {
    struct family* chisla;
    struct family me = { "Kate",15, "daughter" }, mother = { "Alika",45,"mother" }, dad = { "James",50,"dad" };
    chisla = new struct family[365];
    chisla[0].last_name = me.last_name;
    chisla[0].vozrast = me.vozrast;
    chisla[0].who = me.who;

    chisla[1].last_name = mother.last_name;
    chisla[1].vozrast = mother.vozrast;
    chisla[1].who = mother.who;

    chisla[2].last_name = dad.last_name;
    chisla[2].vozrast = dad.vozrast;
    chisla[2].who = dad.who;
}