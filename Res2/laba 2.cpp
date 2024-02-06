#include <iostream>
using namespace std;
int main()
{
    //Пункт 1

    setlocale(0, "");
    int N; // переменная для изначальной длинны массива
    cin >> N;
    if (N < 0)
        cout << "error";
    else {
        int* A = (int*)calloc(N, sizeof(int)); // создаем динамический массив
        for (int i = 0; i < N; i++) // Заполняем массив цифрами по условию
            A[i] = i + 1;
        cout << "Исходный массив\n";
        for (int i = 0; i < N; i++)
            cout << A[i] << "   ";
        int S;// Переменная для добавления новых чисел в массив
        std::cout << endl << "Введите количество чисел, которое вы хотите ввести: ";
        cin >> S;
        if (N + S < 0)
            cout << "Ошибка";
        else {
            N = N + S;// Задаем новую длинну массива
            int* A1 = (int*)realloc(A, N * sizeof(int));// Изменяем длину массива на заданную пользователем
            if (S < 0) // Если число отрицательное то выводим сообщение о срезе и показываем результат
            {
                cout << "Вы срезали массив" << endl;
                for (int i = 0; i < N; i++)
                    cout << A1[i] << "   ";
                free(A1);
                return 0;
            }
            cout << "Введите " << S << " чис(ел)(ла)\n";
            bool flag = true;
            for (int i = N - S; i < N; i++)
            {
                cin >> A1[i];
                if (A1[i] == 1)
                {
                    flag = false;
                }
            }
            if (flag)
            {
                A1[N - 1] = 999;
            }
            //Выводим получившийся массив
            cout << "Массив после преобразования" << endl;
            for (int i = 0; i < N; i++)
                cout << A1[i] << "   ";
            free(A1);
        }
    }
}