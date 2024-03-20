#include <iostream>
using namespace std;
const float PI = 3.141592;
const float e = 2.7182818;
void main() {
    float c, C, dt, t, num, anal;
    // f(x) = C*tan(c*t)
    // differentiation
    cout << "C*tan(c*t)" << endl;
    cout << " c C ? = ";
    cin >> c >> C;
    cout << " t dt ? = ";
    cin >> t >> dt;

    anal = c * C / (cos(c * t * PI / 180) * cos(c * t * PI / 180));
    num = C * (tan(c * (t + dt) * PI / 180) - tan(c * t * PI / 180)) / dt * 180 / PI;
    cout << " num " << num << " anal " << anal << endl;
    cout << " error = " << (num - anal) / anal * 100 << "%\n";

    // integration
    float a, b;
    int N;
    cout << " a b N = ";
    cin >> a >> b >> N;

    anal = C / c * (log(cos(c * a * PI / 180)) - log(cos(c * b * PI / 180)));
    dt = (b - a) / N;
    num = 0;
    for (int i = 0; i < N; i++) {
        num += C * tan(c * (a + dt * i) * PI / 180) * dt * PI/180;
    }
    cout << " num " << num << " anal " << anal << endl;
    cout << " error = " << (anal - num) / anal * 100 << "%\n";
}