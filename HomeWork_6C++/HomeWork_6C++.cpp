// HomeWork_6C++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <string>

class HomeWork 
{
public: void Zadanie1()
    {
        int n;
        int m;
        std::cin >> n >> m;
        std::vector<int> A(n);
        std::vector<int> B(m);

        for (int i = 0; i < n; i++)
        {
            std::cin >> A[i];
        }
        for (int i = 0; i < m; i++)
        {
            std::cin >> B[i];
        }
        std::sort(A.begin(), A.end());

        for (int i = 0; i < m; i++)
        {
            int KOLVO = std::lower_bound(A.begin(), A.end(), B[i]) - A.begin();
            std::cout << KOLVO << " ";
        }
    }
    void Zadanie2()
    {
        int n;
        std::cin >> n;

        std::unordered_set<std::string> database;

        for (int i = 0; i < n; ++i) {
            std::string name;
            std::cin >> name;

            // Если имя не занято, добавляем его в базу данных
            if (database.find(name) == database.end()) {
                std::cout << "OK" << std::endl;
                database.insert(name);
            }
            else {
                // Иначе формируем новое имя
                int index = 1;
                std::string newName = name + std::to_string(index);

                // Пока новое имя занято, увеличиваем индекс
                while (database.find(newName) != database.end()) {
                    ++index;
                    newName = name + std::to_string(index);
                }

                // Выводим новое имя и добавляем его в базу данных
                std::cout << newName << std::endl;
                database.insert(newName);
            }
        }
    }
};

int main()
{
    HomeWork a;
  ///  a.Zadanie1();
    a.Zadanie2();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
