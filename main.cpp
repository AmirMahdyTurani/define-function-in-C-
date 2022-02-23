#include <iostream>

using namespace std;

int sum(int, int)

int main() {
    cout << sum(10, 10) << endl;
}

int sum(int a, int b) {
    int sum = a + b;
    return sum;
}
