﻿#include <iostream>
using namespace std;

void task1();
void task2();
void task3();
void task4();
void task5();





int main()
{
	setlocale(LC_ALL, "RU");
	//task1();
	//task2();
	//task3();
	//task4();
	task5();
	

}


//1. Создайте массив из 10 элементов, организуйте ввод значений элементов массива с клавиатуры(целые числа).
// Выведите на экран в отдельной строке максимальный и минимальный элемент массива.
void task1()
{
	const int SIZE = 10;
	int array[SIZE];
	int i = 0;
	int j = 0;
	
	cout << " Введите число: ";
	cout << "\n\n";
	for (i = 0; i < SIZE; i++)                    //Вводим с клавиатуры числа
	{
		cout << i + 1 << "\\" << SIZE << ": ";
		cin >> array[i];                          
	}
	int min_array = array[0];                     // Назначаем минимальное число первому числу в массиве [0]
	int max_array = array[0];                     // Назначаем максимальное  число первому числу в массиве [0]

	for (i = 1, j = 1; i < SIZE; i++, j++)        // Проходим циклом сразу для двух условий i и j
	{
		if (array[i] < min_array)                 // По условию ищем минимальное число
		{
			min_array  = array[i];              
		}

		if (array[j] > max_array)                 // По условию ищем макимальное число
		{
			max_array = array[j];
		}
	}
	     cout << "Минимальное число в массиве: " << min_array << endl;    // Выводим на экран найденное минимальное  значение
		 cout << "Максимальное число в массиве: " << max_array;           // Выводим на экран найденное максимальное значение
}


// Создайте массив из 10 элементов, организуйте ввод значений элементов массива с клавиатуры(целые числа).
// Запросите ввод искомого значения с клавиатуры.
// Организуйте поиск введенного пользователем значения  с помощью алгоритма линейного поиска, если значение найдено в массиве — вывести его индекс,
// если искомое значение не найдено — вывести “ - 1”.
// В отдельной строке выведите количество произведенных сравнений за время поиска.

void task2()
{
	const int SIZE = 10;
	int array[SIZE];
	int i = 0;
	int num;
	int search;
	cout << "Введите число: ";
	cout << "\n\n";

	for (i = 0; i < SIZE; i++)
	{
		cout << i + 1 << "\\" << SIZE << " : ";
		cin >> array[i];

	}
	cout << "Введите искомое число: ";
	cin >> num;

	for (i = 0; i < SIZE; i++)
	{
		if (array[i] == num)
		{
			cout << "Индекс искомого числа в массиве  i = " << i;
			i = SIZE;
		}
		else if(!(SIZE - i- 1))
		{
			cout << "-1";
		}
	}
	
}


//3.  Создайте массив из 10 элементов, организуйте ввод значений элементов массива с клавиатуры(целые числа, значения должны быть упорядочены).
//Запросите ввод искомого значения с клавиатуры.
//Организуйте поиск введенного пользователем значения с помощью алгоритма бинарного поиска, если значение найдено в массиве вывести его индекс,
//если искомое значение не найдено — вывести “ - 1”.В отдельной строке выведите количество произведенных сравнений за время поиска.
void task3()
{
	const int SIZE = 10;
	int array[SIZE];       // Массив чисел
	int i = 0;
	int num = 0;           // Искомое число
	int index;
	int left = 0;          // Левая граница массива
	int right = SIZE;      // Правая граница массива
	int search = -1;       // Найденный элемент массива равен -1(элемент не найден)
	int count = 0;
	cout << "Введите в упорядочном порядке числа: ";
    cout << "\n\n";
	for (i = 0; i < SIZE; i++)
	{
		cout << i + 1 << "\\" << SIZE << " : ";
		cin >> array[i];

	}
	cout << "Введите искомое число: " ;
	cin >> num;
	while (left <= right)
	{
		count++;
		int mid = (left + right) / 2; // Серидина массива
		if (num == array[mid])
		{
			
			search = array[mid];
			index = mid;              // Число найдено
			
			break;
		}
		if (num < array[mid])         // Если искомое число меньше чем сумма середины массива
		{
			right = mid - 1;          // Ищем в левой части
		}
		else                          // иначе   
		{
			left = mid + 1;           //  Ищем в правой части
		}
		                     //Счетчик циклов
	}
	
	if (search == -1)                 // Проверяем изменилась ли  переменная search 
	{
		cout << "-1";                 // Если элемент не найден выводим "-1"    
	}
	else
	{
		cout << "Индекс искомого числа: " << "array[i]" << " = " << index<< endl;
		cout << "Количество сравнений: "<< count;
	}
	return;
}


//4.  Создайте массив из 10 элементов, организуйте ввод значений элементов массива с клавиатуры(целые числа)
//.Упорядочьте элементы массива по возрастанию методом прямого выбора,
//выведите упорядоченный массив на экран в одну строку, с одним пробелом между элементами массива.

void task4()
{
	const int SIZE = 10;
	int array[SIZE];
	int i = 0;
	int j = 0;
	int tmp = 0;                               // Переменная для временного хранения

	cout << "Введите число: ";
	cout << "\n\n";

	for (i = 0; i < SIZE; i++)
	{
		cout << i + 1 << "\\" << SIZE << " : ";
		cin >> array[i];
	}
	for (i = 0; i < SIZE - 1; i++)             // SIZE -1 потому что нет смысла на последнем шаге сравнивать число самим с собой
	{
		int min = i;
		for (j = i + 1; j < SIZE; j++)         // j приравниваем  к i + 1, берем начало от первого цикла
		{
			if (array[j] < array[min])         //  Сравниваем каждый элемент в цикле с минимальным элементом
			{
				min = j;                       //  Если находим, перезаписываем минимальный индекс где хранится минимальное число
			}

		}
		if (i != min)                          // Если не равно значит был найден элемент меньше чем был
		{
			tmp = array[i];                    // Производим  обмен
			array[i] = array[min];
			array[min] = tmp;
		}
	}
	cout << "Упорядоченный массив: ";
	for (i = 0; i < SIZE; i++)
	{
		cout << array[i] << " ";
	}
}

//5. Создайте массив из 10 элементов, организуйте ввод значений элементов массива с клавиатуры(целые числа).
//Упорядочьте элементы массива по убыванию методом “пузырька”, выведите упорядоченный массив на экран в одну строку, с одним пробелом между элементами массива.

void task5()
{
	const int SIZE = 10;
	int array[SIZE];
	int i = 0;

	cout << "Введите число: ";
	cout << "\n\n";

	for (i = 0; i < SIZE; i++)
	{
		cout << i + 1 << "\\" << SIZE << " : ";
		cin >> array[i];
	}


}












//1.  Создайте массив из 10 элементов, организуйте ввод значений элементов массива с клавиатуры(целые числа).
// Выведите на экран в отдельной строке максимальный и минимальный элемент массива.
//2.  Создайте массив из 10 элементов, организуйте ввод значений элементов массива с клавиатуры(целые числа).
// Запросите ввод искомого значения с клавиатуры.Организуйте поиск введенного пользователем значения
//  с помощью алгоритма линейного поиска, если значение найдено в массиве — вывести его индекс,
//если искомое значение не найдено — вывести “ - 1”.В отдельной строке выведите количество произведенных сравнений за время поиска.
//3.  Создайте массив из 10 элементов, организуйте ввод значений элементов массива с клавиатуры(целые числа, значения должны быть упорядочены).
//Запросите ввод искомого значения с клавиатуры.
//Организуйте поиск введенного пользователем значения с помощью алгоритма бинарного поиска, если значение найдено в массиве вывести его индекс, если искомое значение не найдено — вывести “ - 1”.В отдельной строке выведите количество произведенных сравнений за время поиска.
//4.  Создайте массив из 10 элементов, организуйте ввод значений элементов массива с клавиатуры(целые числа)
//.Упорядочьте элементы массива по возрастанию методом прямого выбора, выведите упорядоченный массив на экран в одну строку, с одним пробелом между элементами массива.
//5. Создайте массив из 10 элементов, организуйте ввод значений элементов массива с клавиатуры(целые числа).
//Упорядочьте элементы массива по убыванию методом “пузырька”, выведите упорядоченный массив на экран в одну строку, с одним пробелом между элементами массива.