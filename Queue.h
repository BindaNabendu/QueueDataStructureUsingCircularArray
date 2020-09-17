//
// Created by Nabendu Bikash on 14-Sep-20.
//

#ifndef QUEUEDATASTRUCTUREUSINGCIRCULARARRAY_QUEUE_H
#define QUEUEDATASTRUCTUREUSINGCIRCULARARRAY_QUEUE_H
#include "string"
#include "iostream"
#include "CircleNumber.h"

using namespace std;
//const int SIZE =  5;


class Queue {
private:
    const string QUEUENAME;
    int data[100];

    CircleNumber *head, *tail;

public:
    Queue(string QueueName);

    void push(int data);
    void pop();
    int peek();
    bool isEmpty();

    void printAllInfo();
};


#endif //QUEUEDATASTRUCTUREUSINGCIRCULARARRAY_QUEUE_H
