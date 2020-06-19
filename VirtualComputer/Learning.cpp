#include <iostream>
#include <math.h>

#include "Obj.cpp"

class Learning {
	public:
		 void main() {
			 std::cout << "Hello World\n";
			 Obj arr[10];

			 for (int i = 0; i < 10; i++) {
				 arr[i] = Obj();
				 arr[i].setNumber((int)pow((i + 1), 2));
			 }

			 for (int i = 0; i < 10; i++) {
				 std::cout << i << " = " << arr[i].getNumber() << std::endl;
			 }
		 }
};