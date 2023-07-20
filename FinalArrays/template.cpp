#include<iostream>
#include<cstdlib>
#include<ctime>

int main() {
	setlocale(LC_ALL, "RU");
	int n, m;

	//задача 1.сортировка первых N элементов!!
	/*
	std::cout << "ЗАДАЧА 1\nИзначальный массив:\n";
	const int size1 = 10;
	int arr1[size1]{};

	srand(time(NULL));
	for (int i = 0; i < size1; i++) {
		arr1[i] = rand() % (10 + 1 - 1) + 1;// rand()%10+1 //1..10
		std::cout << arr1[i] << ' ';
	}
	std::cout << std::endl;
	
	std::cout << "Введите количество елементов для сортировки -> ";
	std::cin >> n;

	while (n<2|| n>size1) {
		std::cout << "Ошибка ввода!Повторите ввод -> ";
		std::cin >> n;
	}
	//пузырьковая сортировка!
	for (int i = n - 1; i > 0; i--)
		for (int j = 0; j < i; j++)
			if (arr1[j] > arr1[j + 1])
				std::swap(arr1[j], arr1[j + 1]);
	std::cout << "Итоговый массив:\n";
	for (int i = 0; i < size1; i++) {
	std::cout << arr1[i]<<' ';
	}
	std::cout << std::endl;
	*/


	//задача 2. температура в январе 
	/*
	std::cout << "Задача 2.\nТемпература в янаваре:\n";
	const int january_days = 31;
	int january_temperature[january_days]{};
	for (int day_number = 0; day_number < january_days; day_number++) {
		january_temperature[day_number] = rand() % (-5 + 1 - (-30)) + (-30);// сокращенный  rand()% 26-30;
		std::cout << january_temperature[day_number] << ", ";
	}
	std::cout << "\b\b.\nВведите число -> ";
	std::cin>>n;
	int sum = 0;//для суммы температур января!
	int counter = 0;//для подсчета темперпатур <N
	for (int day_number = 0; day_number < january_days; day_number++) {
		sum += january_temperature[day_number];
		if (january_temperature[day_number] < n)
			counter++;
	}
	std::cout <<"Средняя температура: " << sum / double(january_days) << std::endl;
	std::cout << "Количество дней когда температура ниже " << n << ": " << counter << "\n\n";
	`*/
	//задача 3. вхождение в диапазон
	
	std::cout << "Задача 3.\nвведите начало диапазона-> ";
	std::cin >> n;
	std::cout << "введите конец диапазона-> ";
	std::cin >> m;

	const int size3 = 20;
	int arr3[size3]{};

	std::cout << "ИТОГ: \n";
	srand(time(NULL));
	for (int i = 0; i < size3; i++)  {
		arr3[i] = rand() % 100;

		//if (arr3[i] >= n && arr3[i] <= m)
			//std::cout << 1 + 1 << ". " << arr3[i] << "!\n";
		//else
			//std::cout << 1 + 1 << ". " << arr3[i] << "\n";
		std::cout << i + 1 << ". " << arr3[i] << (arr3[i] >= n && arr3[i] <= m ? "!" : "") << "\n";
	}





	return 0;
}