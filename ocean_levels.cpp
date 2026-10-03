#include <iostream>
using namespace std;

int main()
{
    const double ANNUAL_RATE = 1.5;

    int years5 = 5;
    int years7 = 7;
    int years10 = 10;

    double increase5 = ANNUAL_RATE * years5;
    double increase7 = ANNUAL_RATE * years7;
    double increase10 = ANNUAL_RATE * years10;

    cout << "After " << years5 << " years: " << increase5 << " millimeters higher" << endl;
    cout << "After " << years7 << " years: " << increase7 << " millimeters higher" << endl;
    cout << "After " << years10 << " years: " << increase10 << " millimeters higher" << endl;

    return 0;
}
