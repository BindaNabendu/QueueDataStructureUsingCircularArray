//
// Created by Nabendu Bikash on 14-Sep-20.
//

#include "Queue.h"

Queue::Queue(std::string queueName)

//:SIZE(arraySize),
 :QUEUENAME(queueName) // to declare constant value using constructor
{
    this->head = 0;
    this->tail = 0;
}

void Queue::push(int data) {
    if(head-tail == 0) {
        this->data[head] = data;
    } else{
        this->data[tail] = data;
    }
    if (this->tail == 99){
        if(this->head != 0)
        this->tail = 0;
    }
}

void Queue::printAllInfo() {
    cout << QUEUENAME <<endl;
    cout << this->head <<endl;
    cout << this->tail <<endl;
}