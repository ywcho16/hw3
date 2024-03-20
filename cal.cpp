#include <iostream>
using namespace std;
const float PI = 3.141592;
void main() {
	float c, C, dt, t, num, anal;
	//// f(x) = C*sin(c*t)
	//// differentiation
	//cout << " c C ? = ";
	//cin >> c >> C;
	//cout << " t dt ? = ";
	//cin >> t >> dt;
	//anal = c * C * cos(c * PI / t);
	//num = C * (sin(c * (PI / t + PI / dt)) - sin(c * PI / t)) / (PI / dt);
	//cout << " num " << num << " anal " << anal << endl;
	//cout << " error = " << (anal - num) / anal * 100 << "%\n";

	//// integration
	//float a, b;
	//int N;
	//cout << " a b N = ";
	//cin >> a >> b >> N;
	//anal = -C * (cos(c * PI / b) - cos(c * PI / a)) / c;
	//dt = ((PI / b) - (PI / a)) / N;
	//num = 0;
	//for (int i = 0; i < N; i++) {
	//	num += C * sin(c * (PI / a + dt * i)) * dt;
	//}
	//cout << " num " << num << " anal " << anal << endl;
	//cout << " error = " << (num - anal) / anal * 100 << "%\n";

	// f(x) = C*cos(c*t)
	// differentiation
	cout << " c C ? = ";
	cin >> c >> C;
	cout << " t dt ? = ";
	cin >> t >> dt;
	anal = -c * C * sin(c * PI / t);
	num = C * (cos(c * (PI / t + PI / dt)) - cos(c * PI / t)) / (PI / dt);
	cout << " num " << num << " anal " << anal << endl;
	cout << " error = " << (anal - num) / anal * 100 << "%\n";

	// integration
	float a, b;
	int N;
	cout << " a b N = ";
	cin >> a >> b >> N;
	anal = C * (sin(c * PI / b) - sin(c * PI / a)) / c;
	dt = ((PI / b) - (PI / a)) / N;
	num = 0;
	for (int i = 0; i < N; i++) {
		num += C * cos(c * (PI / a + dt * i)) * dt;
	}
	cout << " num " << num << " anal " << anal << endl;
	cout << " error = " << (num - anal) / anal * 100 << "%\n";
}