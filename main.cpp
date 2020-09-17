#include <iostream>
#include "Queue.h"
#include "CircleNumber.h"

using namespace std;

int main() {
//    Queue studentSet("Student data base");
//    //studentSet.push(3);
//
//    studentSet.printAllInfo();

    CircleNumber a(100);
    a.setIncrementOrDecrementValue(99);
    cout << a.increment() << endl;

    a.setIncrementOrDecrementValue(97);
    cout << a.add(6);
    a.setIncrementOrDecrementValue(2);
    cout << endl << a.subtract(6);

    return 0;
}
