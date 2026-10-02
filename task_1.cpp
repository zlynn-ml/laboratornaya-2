/*Задание 1. Ввести объём потреблённой электроэнергии.
Значение должно быть неотрицательным.
Первые 100 единиц оплачиваются по 0.20, следующие 100 — по 0.30,
всё сверх 200 — по 0.45.
Без циклов рассчитать стоимость для любого значения и вывести,
какой диапазон потребления был достигнут.
*/ 
#include <iostream>
using namespace std;
int main() {
	float electro, sum;
	sum = 0;
	cin >> electro;
	if (electro >= 0) {
		if (electro > 100) {
			sum = 100 * 0.2;
			electro -= 100;
			if (electro > 100) {
				sum += 100 * 0.3;
				electro -= 100;
				sum += electro * 0.45;
				cout << "diapazon 200+\n";
			}
			else {
				sum += electro * 0.3;
				cout << "diapazon [100;200]\n";
			}
		}
		else {
			sum = electro * 0.2;
			cout << "diapazon [0;100]\n";
		}
		cout << sum;
	}
	else
		cout << "error";
	return 0;
}