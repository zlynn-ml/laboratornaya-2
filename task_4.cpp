/*Задание 4. Ввести тип потребителя H/P/C, потребление,
долю ночного потребления в процентах 0..100 и признак задолженности 0/1.
Через switch задать дневной тариф: 0.25, 0.20, 0.40.
Ночной тариф на 30% ниже дневного. Разделить потребление на дневную и ночную части.
Если есть задолженность и рассчитанная сумма превышает 50, добавить фиксированный сбор 3,
но для типа P этот сбор не применяется. Проверить все входные данные и вывести дневную,
ночную часть и итог.*/
#include <iostream>
using namespace std;
int main() {
	char type;
	float sum, potr, dolya, tarif, sum_night, sum_day;
	int dolg;
	cin >> type;
	switch (type) {
	case 'h':
	case 'H':
		tarif = 0.25;
		break;
	case 'p':
	case 'P':
		tarif = 0.2;
		break;
	case 'c':
	case 'C':
		tarif = 0.4;
		break;
	default:
		cout << "error";
		return 0;
	}
	cin >> potr >> dolya >> dolg;
	if (potr >= 0 && dolya >= 0 && dolya <= 100 && dolg >= 0 && dolg <= 1) {
		dolya /= 100;
		sum_night = dolya * tarif * 0.7 * potr;
		sum_day = (1 - dolya) * tarif * potr;
		sum = sum_day + sum_night;
		if (sum > 50 && dolg == 1 && tarif != 0.2)
			sum += 3;
		cout << "\nDay: " << sum_day << "\nNight: " << sum_night << "\nAll: " << sum;
	}
	else
		cout << "error";
	return 0;
}