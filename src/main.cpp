#include <iostream>
#include "func1.h"
#include "func2.h"
#include "Calc.h"

using namespace std;

int main(){
    func1("hello");
    func2("world");
    Calc *c = new Calc();
    int res = c->add(23,45);
    cout << res << endl;
	cin.get();
    return 0;
}