#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    return 0;
}
