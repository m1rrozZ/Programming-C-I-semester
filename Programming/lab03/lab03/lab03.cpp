#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

class Tasks
{
public:
    /*
    * Створити програму, яка обчислює і друкує середнє значення декількох
    * цілих чисел. Вважайте, що остання зчитуємо величина є міткою (числом)
    * 9999.
    */
    void Calculate()
    {
        vector<int> numbers;
        int num;

        cout << "Task 1. Введiть числа вiд 1 до 9999. (9999 повинно бути кiнцевим числом)." << endl;

        while (true)
        {
            cin >> num;

            if (num == 9999)
            {
                break;
            }

            numbers.push_back(num);
        }

        int sum = 0;
        for (int n : numbers)
        {
            sum += n;
        }

        double average = static_cast<double>(sum) / numbers.size();
        cout << "Среднее значение: " << average << endl;
        cout << "" << endl;
    };

    /*
    * Створити програму, яка обчислює і друкує добуток
    * непарних цілих від 1 до 15
    */
    void Loop()
    {
        int mult = 1;
        for (int i = 1; i <= 15; i += 2)
        {
            mult *= i;
        }

        cout << "Task 3. Добуток непарних цiлих чисел вiд 1 до 15 = " << mult << endl;
        cout << " " << endl;
    }

    /*
    * Створити програму, яка зчитує послідовність пар чисел, які означають
    * 1) номер продукту; 2) кількість, продану за день.
    */
    void Shop()
    {
        short n;
        cout << "Task 3. Введiть номер продукту.. (вiд 1 до 5)" << endl;

        while (true)
        {
            cin >> n;
            if (n < 1 || n > 5)
            {
                cout << "Введiть номер продукту.. (вiд 1 до 5)" << endl;
                continue;
            }

            break;
        }

        float price = 0.0f;
        float totalsales = 0.0f;
        int sell;

        switch (n)
        {
        case 1:
            price = 2.98f;
            break;
        case 2:
            price = 4.50f;
            break;
        case 3:
            price = 9.98f;
            break;
        case 4:
            price = 4.49f;
            break;
        case 5:
            price = 6.87;
            break;
        }

        for (int i = 1; i <= 7; ++i)
        {
            cout << "Введiть кiлькiсть продажу продукту " << n << " за " << i << " день: " << endl;
            cin >> sell;

            totalsales += sell * price;
        }

        cout << "Загальна роздрібна вартість всіх проданих за тиждень продуктів #" << n << ": " << totalsales << endl;
        cout << "" << endl;
    }

    /*
    * Пифагоровi трiйки
    */
    void Pifagor()
    {
        int max = 500;
        cout << "Task 4. Всі трійки Піфагора: " << endl;
        for (int a = 1; a <= max; ++a)
        {
            for (int b = a; b <= max; ++b)
            {
                for (int c = b; c <= max; ++c)
                {
                    if (a * a + b * b == c * c)
                    {
                        cout << "( " << a << ", " << b << ", " << c << ")" << endl;
                    }
                }
            }
        }
    }

    void Pi()
    {
        const int n = 10;
        double pi = 0.0;
        vector<double> pi_Num;

        for (int i = 0; i <= n; ++i)
        {
            double res = (i % 2 == 0 ? 1.0 : -1.0) / (2 * i + 1);
            pi += res;

            pi_Num.push_back(pi * 4.0);
        }

        cout << setw(15) << "Число членiв" << " | " << setw(20) << "Приближення π\n";
        cout << "-------------------------------\n";
        for (int i = 0; i < n; i++) {
            cout << setw(15) << (i + 1) << " | " << setw(20) << pi_Num[i] << "\n";
        }
    }
};

int main()
{
    setlocale(LC_ALL, "Ukrainian");
    const char* start = "Start.\n";

   
    cout << "" << endl;

    Tasks tasks;

    // Task 1.
    tasks.Calculate();

    // Task 2.
    tasks.Loop();

    // Task 3.
    tasks.Shop();

    // Task 4.
    tasks.Pifagor();

    // Task 5.
    tasks.Pi();

    return 0;
}
