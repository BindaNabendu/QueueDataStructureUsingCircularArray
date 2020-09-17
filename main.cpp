#include <iostream>
#include "Queue.h"
#include "CircleNumber.h"

using namespace std;

int main() {
/*
//----------file to check is circular number working or not -----------------------
    CircleNumber a(100);
    a.setIncrementOrDecrementValue(99);
    cout << a.increment() << endl;

    a.setIncrementOrDecrementValue(97);
    cout << a.add(6);
    a.setIncrementOrDecrementValue(2);
    cout << endl << a.subtract(6);
//---------------------------------------------------------------------------------
*/
    Queue studentList("List of student");
    studentList.push(4);
    studentList.printAllInfo();
    studentList.pop();

    return 0;
}
