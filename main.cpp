#include <iostream>

using namespace std;

int main()
{
    int array[5];
    int lenArray, i, j, tmp;

    lenArray = 5;
    i = 0;
    j = 0;
    cout << "scrivi 5 numeri" << endl;
    for (i = 0; i <= lenArray - 1; i++) {
        cout << "elemento " << i << endl;
        cin >> array[i];
    }
    for (i = 0; i <= lenArray - 1; i++) {
        j = 0;
        for (j = i + 1; j <= lenArray - 1; j++) {
            if (array[j] < array[i]) {
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
    for (i = 0; i <= lenArray - 1; i++) {
        cout << "indice " << i << " elemento " << array[i] << endl;
    }
    return 0;
}
