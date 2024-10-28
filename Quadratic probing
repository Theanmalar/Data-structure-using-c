#include <stdio.h>
#define TABLE_SIZE 10

int hashTable[TABLE_SIZE];

// Initialize hash table
void initHashTable() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        hashTable[i] = -1;
    }
}

// Hash function
int hashFunction(int key) {
    return key % TABLE_SIZE;
}

// Insert element into hash table using quadratic probing
void insert(int key) {
    int index = hashFunction(key);
    int i = 1;

    // Quadratic probing
    while (hashTable[index] != -1) {
        index = (index + i * i) % TABLE_SIZE;
        i++;
        if (i == TABLE_SIZE) {
            printf("Table is full\n");
            return;
        }
    }
    hashTable[index] = key;
    printf("Inserted %d at index %d\n", key, index);
}

// Search for an element in the hash table
int search(int key) {
    int index = hashFunction(key);
    int i = 1;

    // Quadratic probing for search
    while (hashTable[index] != -1) {
        if (hashTable[index] == key) {
            return index;
        }
        index = (index + i * i) % TABLE_SIZE;
        i++;
        if (i == TABLE_SIZE) {
            return -1;
        }
    }
    return -1;
}

// Display hash table
void display() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        if (hashTable[i] != -1)
            printf("Index %d: %d\n", i, hashTable[i]);
        else
            printf("Index %d: ~\n", i);
    }
}

int main() {
    initHashTable();

    // Insert elements
    insert(23);
    insert(43);
    insert(13);
    insert(27);

    // Display hash table
    printf("Hash Table:\n");
    display();

    // Search for an element
    int key = 43;
    int index = search(key);
    if (index != -1) {
        printf("Element %d found at index %d\n", key, index);
    } else {
        printf("Element %d not found\n", key);
    }

    return 0;
}
