#include <iostream>
#include <string>
struct bodyoptions {
	int ves;
	int rost;
	int age;
};
//������ 1
struct bodyoptions createBodyoptions(int d, int m, int y) {
	struct bodyoptions new_bodyoptions;
	new_bodyoptions.ves = d;
	new_bodyoptions.rost = m;
	new_bodyoptions.age= y;
	return new_bodyoptions;
}
//������ 2
// std::cin ������ scanf_s � �++
// std::cout ������ printf � �++
void createBodyoptions_2(struct bodyoptions* new_bodyoptions2) {
	int ves, rost, age;
	std::cout << "Input ves: ";
	std::cin >> ves;
	std::cout << "Input rost: ";
	std::cin >> rost;
	std::cout << "Input age: ";
	std::cin >> age;
	(* new_bodyoptions2).ves = ves; // * ������������� ����������� * �� ���������� �-�
	(* new_bodyoptions2).rost = rost;
	(* new_bodyoptions2).age = age;
}
//������ 3
struct bodyoptions createBodyoptions_3(struct bodyoptions body) {
	struct bodyoptions new_bodyoptions3;
	new_bodyoptions3.ves = body.ves;
	new_bodyoptions3.rost = body.rost;
	new_bodyoptions3.age = body.age;
	return new_bodyoptions3;
}
int main() {
	struct bodyoptions* main_bodyoptions;
	main_bodyoptions = new struct bodyoptions[365];
	bodyoptions parametr= { 56, 182, 20 };
	main_bodyoptions[0] = createBodyoptions_3(parametr); // �������� ������ � �������� �����������, ��� �������� ������
	// �������� ������ 2, ����� ������������ ��� ���������
	std::cout << "Input your bodyoptions 2020\n";
	createBodyoptions_2(&main_bodyoptions[1]);
	std::cout << "Input your bodyoptions 2021\n";
	createBodyoptions_2(&main_bodyoptions[2]);
	std::cout << "Input your bodyoptions 2022\n";
	createBodyoptions_2(&main_bodyoptions[3]);
}
//������ 4
void input(struct bodyoptions* parametr2) {
	std::cout << "Input rost: ";
	std::cin >> ( (* parametr2).rost);
	std::cout << "Input ves: ";
	std::cin >> ((*parametr2).ves);
	std::cout << "Input age: ";
	std::cin >> ((* parametr2).age);
}

