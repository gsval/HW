#include<iostream>
#include <string>
struct Dimension { //�� �����
	int height;// ������
	int depth; // �������(�����)
	int width //������
};
void input(struct Dimension* sizes) { // ���� ���������� �����
	std::cout << "Input height: ";
	std::cin >> (( * sizes).height);
	std::cout << "Input depth: ";
	std::cin >> (( * sizes).depth);
	std::cout << "Input width: ";
	std::cin >> ((* sizes).width);
}
float calculateSquare(struct Dimension sizes) { //����������� �������
	float s, s_lateral, s_2, s_3; //s_lateral ������� ������� s_2 ����� � ���, s_3 ������� � ������� � ������ ����� �����
	s_lateral = 2 * (sizes.height * sizes.width); //������ s ���� ������� ������
	s_2 = 2 * (sizes.depth * sizes.width); //������� s ������ � ����
	s_3 = 2 * (sizes.height * sizes.width); //������� s ������� � ������� � ������ ����� 
	s = s_lateral + s_2 + s_3;//������� �������
	 return s
}
float calculateDye(struct Dimension sizes, float consumption){//������� ����������� 
	int s;
	s= calculateSquare(sizes);
	float dye_need;
	dye_need= s * consumption; //������������ ������ ���������� ������
	return dye_need;
} 
float calculateV(struct Dimension sizes) {
	float v;
	v = sizes.height * sizes.depth * sizes.width;
	return v;
}
float calculatePaintingCost(float paintConsumption, float paintCost,float paintWorkCost) { //������� ������� ��������� ��������  
	//consumption �������� ������ ������ �� �2
	//paintCost ��������� ������ �� ��
	// workCost ��������� ������ �� �������� ��� / �� m2
	float cost_paint; //������� ������
	cost_paint= paintConsumption * paintCost * paintWorkCost;
	return cost_paint;
}
float calculateCupboardCost(struct Dimension sizes, float cupboardCost , float s) {//������� ������� ��������� ������ �����
	//cupboardCost ��������� �����
	float cupboard_cost;
	cupboard_cost = s * cupboardCost;
	return cupboard_cost;
}
float weight_cupboard(struct Dimension sizes, float weight, float s) {//������� ������� ����� �����
	float weight_cupboard = weight * s;
	return weight_cupboard;
}
float cost_pod(struct Dimension sizes, int floorsCount, float riseCost) {//������� ������� ������� �� ���� �� �������� ���������� ������ � ��������� �������
	float pod_cost;
	pod_cost = floorsCount * riseCost;
	return pod_cost;
}
float calculateCost(struct Dimension sizes, float paintConsumption, float paintWorkCos, float paintCost, float cupboardCost, float weight, int floorsCount) {
	//������� ������� ������ ��������� � ���������
	float end;
	float square = calculateSquare(sizes);
	end = calculatePaintingCost(paintConsumption, paintCost, paintWorkCost) + calculateCupboardCost(sizes, cupboardCost, s) + cost_pod(sizes, floorsCount, riseCost) + deliveryCost;
}

int main() {
	// ������ ������, ��������� ������ �� ��������, ��������� ������
	float paintConsumption = 0.8, paintWorkCost = 35.00, paintCost = 50.00;
	// ��������� ��������� ����� �� �2
	float cupboardCost = 650;
	// ��� ��/�2
	float weight = 0.9;
	// ����� ������
	int floorsCount = 5;
	float deliveryCost = 500.00;
	float riseCost = 2.50;
	struct Dimension cupboard;
	std::cout << "CUPBOARD PARAMETERS\n";
	input(&cupboard);
	float cost;
	
	
	float s;
	s = calculateCost(cupboard);
	float cost_pod;
	cost_pod = calculateCupboardCost(cupboard, cupboardCost, s);
	float paint_Cost;
	paint_Cost= calculatePaintingCost(paintConsumption, paintWorkCost, paintCost);
	float delivery_Cost;
	delivery_Cost = weight_cupboard(paintConsumption, paintWorkCost, paintCost);

	std::cout << "Cost by position:" << "\n" << "- cupboard cost: " << cost_pod << "\n" << "- painting cost: " << paint_Cost << "\n" << "- delivery cost (with rise): " << delivery_Cost << "\n";
	cost = calculateCost(cupboard, cupboardCost, paintConsumption, paintCost, paintWorkCost, weight, floorsCount, riseCost, deliveryCost);

	std::cout << "Total cost: " << cost;
	std::cout << "Total cost: " << cost;
	return 0;
}
