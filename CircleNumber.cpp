//
// Created by Nabendu Bikash on 15-Sep-20.
//

#include "CircleNumber.h"

CircleNumber::CircleNumber(int limit) {
    number = limit;
    incrementOrDecrementValue = 0;
}

void CircleNumber::setIncrementOrDecrementValue(int value) {
    incrementOrDecrementValue = value;
}

int CircleNumber::getIncrementOrDecrementValue() {
    return incrementOrDecrementValue;
}

int CircleNumber::increment() {
    if (incrementOrDecrementValue == number){
        incrementOrDecrementValue=0;
    } else{
        incrementOrDecrementValue++;
    }
    return incrementOrDecrementValue;
}

int CircleNumber::decrement() {
    if (incrementOrDecrementValue == 0){
        incrementOrDecrementValue = number;
    } else{
        incrementOrDecrementValue--;
    }
    return incrementOrDecrementValue;
}

int CircleNumber::add(int secondNumber) {
    int result=0;
    int firstNumber = this->incrementOrDecrementValue;
    result = firstNumber+secondNumber;
    if (result>number){
        int temp=result-number;
        result=-1;
        result=result+temp;
    }
    return result;
}

int CircleNumber::subtract(int secondNumber) {
    int result=0;
    int firstNumber = this->incrementOrDecrementValue;
    result = firstNumber-secondNumber;
    if (result<0){
        int temp=-result;
        result=number+1;
        result=result-temp;
    }
    return result;
}