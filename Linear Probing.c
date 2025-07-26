#include <stdio.h>

#define TABLE_SIZE 10

int hashTable[TABLE_SIZE];  // Hash table
int currentSize = 0;

// Hash function
int hashFunction(int key) {
    return key % TABLE_SIZE;
}

// Insert function using linear probing
void insert(int key) {
    if (currentSize == TABLE_SIZE) {
        printf("Hash Table is full!\n");
        return;
    }
    
    int index = hashFunction(key);
    
    // Linear probing to find the next free slot
    while (hashTable[index] != 0) {
        index = (index + 1) % TABLE_SIZE; // Move to the next slot
    }
    
    hashTable[index] = key;
    currentSize++;
}

// Display the hash table
void display() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        printf("Index %d: %d\n", i, hashTable[i]);
    }
}

int main() {
    // Initialize hash table with 0 (assuming 0 means an empty slot)
    for (int i = 0; i < TABLE_SIZE; i++) {
        hashTable[i] = 0;
    }
    
    // Insert elements into the hash table
    insert(12);
    insert(22);
    insert(42);
    
    display();
    
    return 0;
}
