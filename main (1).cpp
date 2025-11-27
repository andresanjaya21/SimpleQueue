#include <iostream>
using namespace std;

#define MAX 5
int queue[MAX];
int front = -1, rear = -1;

void enqueue(int data) {
    if (rear == MAX - 1) {
        cout << "Queue penuh!\n";
    } else {
        if (front == -1) front = 0;
        rear++;
        queue[rear] = data;
    }
}

void dequeue() {
    if (front == -1) {
        cout << "Queue kosong!\n";
    } else {
        cout << "Data keluar: " << queue[front] << endl;
        front++;
        if (front > rear) {
            front = rear = -1;
        }
    }
}

void tampil() {
    if (front == -1) {
        cout << "Queue kosong!\n";
    } else {
        cout << "Isi queue: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    tampil();

    dequeue();
    tampil();

    return 0;
}