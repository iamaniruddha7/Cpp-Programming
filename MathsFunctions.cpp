#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double x = 16;
    double y = 8;
    double z, a, b, c, d, e, f, g;
    z = max(x,y);
    a = min(x,y);
    b = sqrt(x);
    c = round(y);
    d = abs(y);
    e = ceil(y);
    f = pow(x, y);
    g = floor(x);
    cout << z << "\n";
    cout << a << "\n";
    cout << b << "\n";
    cout << c << "\n";
    cout << d << "\n";
    cout << e << "\n";
    cout << f << "\n";
    cout << g << "\n";
    //cout << a << "\n";

    return 0;
}