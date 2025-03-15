#include "RoomBaseQueue.h"

RoomBaseQueue::RoomBaseQueue() : front(nullptr), rear(nullptr), size(0) {}

RoomBaseQueue::~RoomBaseQueue() {
    while (!isEmpty()) {
        dequeue();
    }
}

void RoomBaseQueue::enqueue(const RoomBase& value) {
    Node* newNode = new Node{ value, nullptr };
    if (isEmpty()) {
        front = rear = newNode;
    }
    else {
        rear->next = newNode;
        rear = newNode;
    }
    size++;
}

RoomBase RoomBaseQueue::dequeue() {
    if (isEmpty()) {
        std::cerr << "Queue is empty! Cannot dequeue.\n";
        return RoomBase(); // Return default RoomBase object
    }

    RoomBase value = front->data;
    Node* temp = front;
    front = front->next;
    delete temp;
    size--;

    if (front == nullptr) {
        rear = nullptr;
    }

    return value;
}

RoomBase RoomBaseQueue::peek() const {
    if (isEmpty()) {
        std::cerr << "Queue is empty! No front element.\n";
        return RoomBase();
    }
    return front->data;
}

bool RoomBaseQueue::isEmpty() const {
    return front == nullptr;
}

int RoomBaseQueue::getSize() const {
    return size;
}

void RoomBaseQueue::display() const {
    if (isEmpty()) {
        std::cout << "Queue is empty!\n";
        return;
    }

    Node* temp = front;
    while (temp) {
        //temp->data.display(); // Assuming RoomBase has a display() method
        temp = temp->next;
    }
    std::cout << "\n";
}

