//
// Created by Nabendu Bikash on 14-Sep-20.
//

#include "Queue.h"

//constractor
Queue::Queue(string queueName)
 :QUEUENAME(queueName) // to declare constant value using constructor
{
    this->head=new CircleNumber(circleNumberLimit);
    this->tail = new CircleNumber(circleNumberLimit);
}

void Queue::push(int data) {
        if (head->subtract(tail->getIncrementOrDecrementValue()) == 0) {
            this->data[head->getIncrementOrDecrementValue()] = data;
        } else {
            this->data[tail->getIncrementOrDecrementValue()] = data;
        }
        tail->increment();

}

void Queue::pop() {
    if((head->getIncrementOrDecrementValue() == tail->getIncrementOrDecrementValue())|| this->head->subtract(tail->getIncrementOrDecrementValue())<0){
        cout << "Queue is empty. Cannot poped..";
        return;
    } else{
        head->increment();
    }
}

int Queue ::peek() {
    if((head->getIncrementOrDecrementValue() == tail->getIncrementOrDecrementValue())|| this->head->subtract(tail->getIncrementOrDecrementValue())<0){
        cout << "Queue is empty. Cannot poped..";
        return 0;
    } else {
        return data[head->getIncrementOrDecrementValue()];
    }
}

bool Queue::isEmpty() {
    if((head->getIncrementOrDecrementValue() == tail->getIncrementOrDecrementValue())|| this->head->subtract(tail->getIncrementOrDecrementValue())<0){
        cout << "Queue is empty. Cannot poped..";
        return true;
    } else{
        return false;
    }
}
void Queue::printAllInfo() {
    cout << QUEUENAME <<endl;
    cout <<"head: " << this->head->getIncrementOrDecrementValue() <<endl;
    cout <<"tail: " << this->tail->getIncrementOrDecrementValue() <<endl;
    CircleNumber i(circleNumberLimit);
    for ( i.setIncrementOrDecrementValue(head->getIncrementOrDecrementValue()); i.getIncrementOrDecrementValue() < tail->getIncrementOrDecrementValue(); i.increment()) {
        cout << "data [" << i.getIncrementOrDecrementValue() <<"]=" << data[i.getIncrementOrDecrementValue()];
    }
    cout <<"----------------------------------"<<endl;
}