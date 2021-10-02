#include <iostream>

#include "LinkedNodeShort.h"

using namespace std;

int main() {

	LinkedNode<string>* node = new LinkedNode<string>();

	node -> SetData("10");

	cout << node -> GetData() << endl;

}

