#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    // Xəta: i <= 5 yazıldığı üçün mövcud olmayan 5-ci indeksə müraciət edir
    for (int i = 0; i <= 5; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}
