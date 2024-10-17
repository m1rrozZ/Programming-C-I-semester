#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>

using namespace std;

class Multiplication
{
public:
    void Mult()
    {
        cout << "Перевiримо табличку множення! \n"
            "P.S. - щоб закiнчити программу введiть </>"
            << endl;

        while (true)
        {
            int rand_num1 = rand() % 10;
            int rand_num2 = rand() % 10;
            int correct_answer = rand_num1 * rand_num2;
            string exit_p;

            while (true)
            {
                cout << "Скiльки буде.. " << rand_num1 << " * " << rand_num2 << " = " << endl;
                cin >> exit_p;

                if (exit_p == "</>")
                {
                    return;
                }

                try
                {
                    int answer = atoi(exit_p.c_str()); // Преобразование ответа в число

                    if (answer == correct_answer)
                    {
                        int rand_num = rand() % 4;
                        switch (rand_num)
                        {
                        case 0:
                            cout << "Дуже добре!" << endl;
                            break;
                        case 1:
                            cout << "Вiдмiнно!" << endl;
                            break;
                        case 2:
                            cout << "Чудова робота!" << endl;
                            break;
                        case 3:
                            cout << "Продовжуйте працювати так само добре!" << endl;
                            break;
                        }
                        break;
                    }
                    else
                    {
                        int rand_num = rand() % 4;
                        switch (rand_num)
                        {
                        case 0:
                            cout << "Нi, спробуйте ще раз." << endl;
                            break;
                        case 1:
                            cout << "Невiрно, спробуйте ще раз." << endl;
                            break;
                        case 2:
                            cout << "Не опускайте руки!" << endl;
                            break;
                        case 3:
                            cout << "Нi, продовжуйте вашi спроби." << endl;
                            break;
                        }

                        break;

                    }
                }
                catch (const exception& e)
                {
                    cerr << e.what() << '\n';
                }
            }
        }
    };
};

class Task3
{
    private:
        float x1, x2, y1, y2;

    public:
        inline float distance()
        {
            while (true)
            {
                string input;

                cin.ignore();

                cout << "Введiть значення для x2: " << endl;
                getline(cin, input);
                x2 = (input.empty()) ? 0 : stof(input);

                cout << "Введiть значення для x1:" << endl;
                getline(cin, input);
                x1 = (input.empty()) ? 0 : stof(input);

                cout << "Введiть значення для y2: " << endl;
                getline(cin, input);
                y2 = (input.empty()) ? 0 : stof(input);

                cout << "Введiть значення для y1:" << endl;
                getline(cin, input);
                y1 = (input.empty()) ? 0 : stof(input);

                break;
            }

            
            float res_D = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
            cout << "Result: " << res_D << endl;
            return res_D;
        }

};

int main()
{
    setlocale(LC_ALL, "Ukrainian");
    srand(time(0));

    cout << "Start program." << endl;

    Multiplication multiplication;
    multiplication.Mult();

    Task3 task;
    task.distance();
    return 0;
}
