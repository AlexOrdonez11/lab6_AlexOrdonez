

#ifndef OJOS_H
#define OJOS_H
#include<string>
using namespace std;
class Ojos{
	private:
		string color;
		bool nocturnos;
	public:
		Ojos();
		Ojos(string, bool);
		string getColor();
		string getNocturnos();
};
#endif
