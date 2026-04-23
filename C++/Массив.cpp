// то что делал я 

#include <iostream>
using namespace std;
int main() {

	double x[] = { -1.5, 0.1, 12, 0, -2.2, 0.5, -1, 0.3 };

	// Масса всего массивов в Байтах 
	int n = sizeof(x) / sizeof(x[0]);


    double min = x[0];  // инициализируем первым элементом
    double max = x[0]; // инициализируем первым элементом
    // double min[0], max[0];

	// ищим минимальный масив 
	for (int i = 1; i < n; i++) {
		if (x[i] < min)
			min = x[i];
		if (x[i] > max)
			max = x[i];
	}
	for (int i = 0; i < n; i++) {
		if (x[i] < 0)
			x[i] = min;

		else if (x[i] > 0)
			x[i] = max;
	}
	cout << "Реузультат:\n";
	for (int i = 0; i < n; i++) {
		cout << x[i] << " ";
	}
	return 0;
}









// как сказала переделать ии

#include <iostream>
using namespace std;

int main() {
    double x[] = { -1.5, 0.1, 12, 0, -2.2, 0.5, -1, 0.3 };
    int n = sizeof(x) / sizeof(x[0]);

    double min = x[0];  // инициализируем первым элементом
    double max = x[0];  // инициализируем первым элементом

    // ищем минимальный и максимальный элементы
    for (int i = 1; i < n; i++) {
        if (x[i] < min)
            min = x[i];
        if (x[i] > max)
            max = x[i];
    }

    // заменяем отрицательные на min, положительные на max
    for (int i = 0; i < n; i++) {
        if (x[i] < 0)
            x[i] = min;
        else if (x[i] > 0)
            x[i] = max;
        // 0 остается без изменений
    }

    cout << "Результат:\n";
    for (int i = 0; i < n; i++) {
        cout << x[i] << " ";
    }

    return 0;
}