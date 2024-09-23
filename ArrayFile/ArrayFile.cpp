/* Завдання 1 номер 1 */
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void inputArrayFromConsole() {
    int n;
    cout << "Введіть розмір масиву: ";
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }

    for (auto k : arr) {
        cout << k << " ";
    }
    cout << endl;
}

int main() {
    srand(static_cast<unsigned>(time(nullptr)));
    inputArrayFromConsole();
    return 0;
}
/* Завдання 2 номер 1 */

#include <iostream>

int findLastMaxIndex(int* arr, int n, int T) {
    int max_value = -1;
    int max_index = -1;

    int* ptr = arr;
    for (int i = 0; i < n; ++i, ++ptr) {
        if (*ptr > T && *ptr > 0) {
            if (*ptr >= max_value) {
                max_value = *ptr;
                max_index = i;
            }
        }
    }

    return max_index;
}

int main() {
    int n;

    std::cout << "Введіть кількість елементів масиву: ";
    std::cin >> n;

    int* arr = new int[n];

    std::cout << "Введіть елементи масиву: " << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    int T;
    std::cout << "Введіть число T: ";
    std::cin >> T;

    int result = findLastMaxIndex(arr, n, T);

    if (result != -1) {
        std::cout << "Номер останнього максимального елемента: " << result << std::endl;
    } else {
        std::cout << "Немає додатних елементів більших за T." << std::endl;
    }

    delete[] arr;

    return 0;
}
