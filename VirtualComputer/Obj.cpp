#include <iostream>

class Obj {
	public:
		int getNumber() {
			return number;
		}
		void setNumber(int value) {
			number = value;
		}
	private:
		int number = 0;
};