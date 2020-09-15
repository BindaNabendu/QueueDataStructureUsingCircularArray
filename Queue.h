//
// Created by Nabendu Bikash on 14-Sep-20.
//

#ifndef QUEUEDATASTRUCTUREUSINGCIRCULARARRAY_QUEUE_H
#define QUEUEDATASTRUCTUREUSINGCIRCULARARRAY_QUEUE_H
#include "string"
#include "iostream"

using namespace std;
//const int SIZE =  5;


class Queue {
private:
    const string QUEUENAME;
    const int SIZE=5;
   // static int size =4;
public:
    const int datasize=5;
    int data[datasize];

    int head,tail;

public:
    Queue(std::string QueueName);

    void push(int data);
    void pop();
    int peek();
    bool isEmpty();

    void printAllInfo();
};


#endif //QUEUEDATASTRUCTUREUSINGCIRCULARARRAY_QUEUE_H
