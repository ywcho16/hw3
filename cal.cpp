#include <iostream>
using namespace std;
const float PI = 3.141592;
void main() {
	float c, C, dt, t, num, anal;
	// f(x) = C*sin(c*t)
	// differentiation
	cout << " Csin(c*t) "<<endl;
	cout << " c C ? = ";
	cin >> c >> C;
	cout << " t dt ? = ";
	cin >> t >> dt;
	anal = c * C * cos(c * t * PI / 180);
	num = C * (sin(c  * (t+dt) * PI / 180) - sin(c * t * PI / 180) )/  dt * 180 / PI;
	cout << " num " << num << " anal " << anal << endl;
	cout << " error = " << (anal - num) / anal * 100 << "%\n";

	// integration
	float a, b;
	int N;
	cout << " a b N = ";
	cin >> a >> b >> N;
	anal = -C * (cos(c * PI * b/180) - cos(c * a * PI / 180)) / c;
	dt = ( b - a ) / N;
	num = 0;
	for (int i = 0; i < N; i++) {
		num += C * sin(c * (a + dt * i) * PI / 180) * dt*PI/180;
	}
	cout << " num " << num << " anal " << anal << endl;
	cout << " error = " << (num - anal) / anal * 100 << "%\n";

	
}