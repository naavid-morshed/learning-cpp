#include <iostream>
using namespace std;

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

int main() {
    int x = 1;

    cout << x << "\n" << first::x << "\n" << second::x << endl;

    return 0;
}