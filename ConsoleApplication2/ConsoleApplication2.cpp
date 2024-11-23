// obedinen.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

//typedef struct { 
//    float area, perimetr; /* Общие компоненты: площадь и периметр */
//    int type;  /* Метка активного компонента */
//    union {  /* Переменный компонент */
//        float r;  /* радиус окружности */
//        float a[2];  /* две стороны прямоугольника */
//        float b[3];  /* три стороны треугольника */
//    } geomfig;  /* Имя объединения - переменного компонента */
//} fig;
//fig f;

typedef struct Male {
    char name[100];
    char status;
    int child;
};

struct Female {
    char name[100];
    int yearBirth;
};

union {
    Male male;
    Female female;
} person;

int main()
{
    int n;
    std::cout << "Количество анкет: ";
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {

        std::cout << "Фамилия: ";
        char name[100];
        std::cin >> name;

        std::cout << "Пол(м/ж): ";
        char gender;
        std::cin >> gender;


        if (gender == "м") {
            person.male;
            person.male.name = name;

            std::cout << "Семейоне положение(холост/женат): ";
            std::cin >> person.male.status;

            std::cout << "Количество детей: ";
            std::cin >> person.male.child;
        }
        else
        {
            person.female;
            person.female.name = name;

            std::cout << "Год рождения: ";
            std::cin >> person.female.yearBirth;
        }
    }

    std::cout << "Список холостых мужчин без детей: \n";
    if (person.male.status = "холост" && person.male.child == 0)
    {
        std::cout << person.male.name << "\n";
    }
    else
    {
        std::cout << "Холостых мужчин без детей не найдено";
    }

    return 0;
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
