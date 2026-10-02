/*Задание 2. Ввести расход воды и признак льготы 0 / 1.
Первые 10 единиц стоят 1.0 за единицу, сверх 10 — 1.5.
Льгота уменьшает на 20 % только стоимость первых 10 единиц,
но не повышенной части.При отрицательном расходе вывести ошибку.
Вывести стоимость каждой части и итог.*/
#include <iostream>
using namespace std;
int main() {
	float voda, lgota, sum;
	cin >> voda;
	cin >> lgota;
	if (voda >= 0) {
		if (voda > 10) {
			if (lgota == 1)
				sum = 10 * 0.8;
			else
				sum = 10;
			cout << "[0;10]: " << sum << endl;
			voda -= 10;
			sum += voda * 1.5;
			cout << "[10;+]: " << voda * 1.5 << endl;
		}
		else {
			if (lgota == 1)
				sum = voda * 0.8;
			else
				sum = voda;
			cout << "[0;10]: " << sum << endl;
		}
		cout << "all: " << sum;
	}
	else
		cout << "error";
	return 0;
}