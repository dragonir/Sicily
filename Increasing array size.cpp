
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<string>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<stack>
#include<iomanip>
using namespace std;
struct sqlist {
    int *items, size, capacity;
    sqlist():size(0), capacity(4) {
        // initial capacity = 4
        items = new int[capacity];
    }
    void doubleCapacity(){
        capacity *= 2;
        int* newItems = new int[capacity];
        memcpy(newItems, items, sizeof(int)*size);
        delete[] items;
        items = newItems;
    }
    void add(int value) {
        if (size >= capacity) {
            doubleCapacity();
        }
        items[size++] = value;
    }
};
int main(){
	
}
