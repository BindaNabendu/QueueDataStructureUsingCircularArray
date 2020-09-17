//
// Created by Nabendu Bikash on 15-Sep-20.
//

#ifndef QUEUEDATASTRUCTUREUSINGCIRCULARARRAY_CIRCLENUMBER_H
#define QUEUEDATASTRUCTUREUSINGCIRCULARARRAY_CIRCLENUMBER_H


class CircleNumber {
private:
    int number;
    int incrementOrDecrementValue;

    
public:
    CircleNumber(int limit);
    void setIncrementOrDecrementValue(int value);
    int getIncrementOrDecrementValue();
    int add(int secondNumber);
    int subtract(int secondNumber);
    int increment();
    int decrement();

};


#endif //QUEUEDATASTRUCTUREUSINGCIRCULARARRAY_CIRCLENUMBER_H
