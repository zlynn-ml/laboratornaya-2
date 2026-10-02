/*Задание 3. Ввести код потребителя H — квартира,
P — частный дом, C — коммерческий объект и потребление.
Через switch задать базовую ставку 0.25, 0.20 и 0.40.
Если потребление превышает 300,
часть сверх 300 оплачивается по ставке, увеличенной на 50%.
Вывести тип потребителя и итоговую стоимость.
*/
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	char code;
	float potreblenie, sum;
	cin >> code;
	cin >> potreblenie;
	switch (code) {
	case 'h':
	case 'H':
		if (potreblenie > 300) {
			sum = 300 * 0.25;
			sum += (potreblenie - 300) * 0.25 * 1.5;
		}
		else
			sum = potreblenie * 0.25;
		cout << "квартира\n" << sum;
		break;
	case 'p':
	case 'P':
		if (potreblenie > 300) {
			sum = 300 * 0.2;
			sum += (potreblenie - 300) * 0.2 * 1.5;
		}
		else
			sum = potreblenie * 0.2;
		cout << "частный дом\n" << sum;
		break;
	case 'c':
	case 'C':
		if (potreblenie > 300) {
			sum = 300 * 0.4;
			sum += (potreblenie - 300) * 0.4 * 1.5;
		}
		else
			sum = potreblenie * 0.4;
		cout << "коммерческий объект\n" << sum;
		break;
	default:
		cout << "error";
		return 0;
	}
	return 0;
}