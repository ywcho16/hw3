//#include <iostream>
//using namespace std;
//const float PI = 3.141592;
//const float e = 2.7182818;
//void main() {
//	float c, C, dt, t, num, anal;
//	// f(x) = C*tan(c*t)
//	// differentiation
//	cout << "C*tan(c*t)"<<endl;
//	cout << " c C ? = ";
//	cin >> c >> C;
//	cout << " t dt ? = ";
//	cin >> t >> dt;
//	anal = c * C * 1 / cos(c * PI / t) * 1 / cos(c * PI / t);
//	num = C * (tan(c * (PI / t + PI / dt)) - tan(c * PI / t)) / (PI / dt);
//	cout << " num " << num << " anal " << anal << endl;
//	cout << " error = " << (num - anal) / anal * 100 << "%\n";
//
//	// integration
//	float a, b;
//	int N;
//	cout << " a b N = ";
//	cin >> a >> b >> N;
//	anal = C * (log(c * PI / b) / log(e) - log(c * PI / a) / log(e)) / c;
//	dt = ((PI / b) - (PI / a)) / N;
//	num = 0;
//	for (int i = 0; i < N; i++) {
//		num += C * tan(c * (PI / a + dt * i)) * dt;
//	}
//	cout << " num " << num << " anal " << anal << endl;
//	cout << " error = " << (anal - num) / anal * 100 << "%\n";
//}