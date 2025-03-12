#pragma once
#ifndef ROOMBASEQUEUE_H
#define ROOMBASEQUEUE_H

#include <iostream>
#include "RoomBase.h" // Include RoomBase class

class RoomBaseQueue {
private:
    struct Node {
        RoomBase data;
        Node* next;
    };

    Node* front;
    Node* rear;
    int size;

public:
    RoomBaseQueue();
    ~RoomBaseQueue();

    void enqueue(const RoomBase& value);
    RoomBase dequeue();
    RoomBase peek() const;
    bool isEmpty() const;
    int getSize() const;
    void display() const;
};

#endif // ROOMBASEQUEUE_H
