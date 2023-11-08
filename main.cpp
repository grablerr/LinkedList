#include<LinkedList.cpp>
#include<iostream>

using namespace Linkedlist;
using namespace std;

void hanoiTower(int n, Linkedlist::LinkedList<int>& source, Linkedlist::LinkedList<int>& auxiliary, Linkedlist::LinkedList<int>& target) {
    if (n > 0) {
        hanoiTower(n - 1, source, target, auxiliary);

        target.push_tail(source[0]);
        source.pop_head();

        std::cout << "Source: ";
        source.printTower();
        std::cout << "Auxiliary: ";
        auxiliary.printTower();
        std::cout << "Target: ";
        target.printTower();
        std::cout << "-------------------" << std::endl;

        hanoiTower(n - 1, auxiliary, source, target);
    }
}

int main() {
    setlocale(LC_ALL, "ru");

    Linkedlist::LinkedList<int> list1;

    // Заполняем list1 случайными значениями
    for (int i = 0; i < 5; ++i) {
        list1.push_tail(rand() % 100);
    }

    // Выводим содержимое list1
    std::cout << "list1: ";
    list1.printTower();

    // Копируем list1 в list2 с помощью конструктора копирования
    Linkedlist::LinkedList<int> list3(list1);

    // Выводим содержимое list3 (копии list1)
    std::cout << "list3 (копия list1): ";
    list3.printTower();

    // Добавляем элементы в начало list1
    int i1 = 42;
    int i2 = 99;
    list1.push_head(i1);
    list1.push_head(i2);

    // Выводим обновленное содержимое list1
    std::cout << "list1 после push_head: ";
    list1.printTower();

    // Удаляем первый элемент из list1
    list1.pop_head();

    // Выводим содержимое list1 после удаления
    std::cout << "list1 после pop_head: ";
    list1.printTower();

    // Выводим длину list1
    std::cout << "Длинна list1: " << list1.length() << std::endl;

    // Получаем элемент по индексу
    int elementAtIndex = list1[2];
    std::cout << "Элемент по индексу 2: " << elementAtIndex << std::endl;

    // Разворачиваем list1
    list1.reverse();

    // Выводим развернутое содержимое list1
    std::cout << "Реверс list1: ";
    list1.printTower();

    cout << endl;
    //Задача
    cout << "Решение задачи"<< endl;
    cout << endl;
    int numDiscs = 3;
    Linkedlist::LinkedList<int> sourceTower;
    Linkedlist::LinkedList<int> auxiliaryTower;
    Linkedlist::LinkedList<int> targetTower;

    for (int i = numDiscs; i > 0; i--) {
        sourceTower.push_tail(i);
    }

    std::cout << "Начальное состояние башен:" << std::endl;
    std::cout << "Source: ";
    sourceTower.printTower();
    std::cout << "Auxiliary: ";
    auxiliaryTower.printTower();
    std::cout << "Target: ";
    targetTower.printTower();
    std::cout << "-------------------" << std::endl;

    hanoiTower(numDiscs, sourceTower, auxiliaryTower, targetTower);

    return 0;
}