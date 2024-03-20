#include <iostream>
using namespace std;
const float PI = 3.141592;
const float e = 2.7182818;
void main() {
	float c, C, dt, t, num, anal;
	// f(x) = C*log(c*t)
	// differentiation
	cout << "Clog(ct)"<<endl;
	cout << " c C ? = ";
	cin >> c >> C;
	cout << " t dt ? = ";
	cin >> t >> dt;
	anal = C / t;
	num = C * (log(c * (t + dt)) - log(c * t)) / dt;
	cout << " num " << num << " anal " << anal << endl;
	cout << " error = " << (anal - num) / anal * 100 << "%\n";

	// integration
	float a, b;
	int N;
	cout << " a b N = ";
	cin >> a >> b >> N;
	anal = C * (b * log(b) - a * log(a) - b + a + log(c) * (b - a));
	dt = (b - a) / N;
	num = 0;
	for (int i = 0; i < N; i++) {
		num += C * log(c * (a + dt * i)) * dt;
	}
	cout << " num " << num << " anal " << anal << endl;
	cout << " error = " << (anal - num) / anal * 100 << "%\n";
}