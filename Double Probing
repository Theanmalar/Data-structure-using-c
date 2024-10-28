#include <stdio.h>
#define TABLE_SIZE 10
#define PRIME 7  // A prime number less than TABLE_SIZE for secondary hash function

int hashTable[TABLE_SIZE];

// Initialize hash table
void initHashTable() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        hashTable[i] = -1;
    }
}

// Primary hash function
int hashFunction1(int key) {
    return key % TABLE_SIZE;
}

// Secondary hash function
int hashFunction2(int key) {
    return PRIME - (key % PRIME);
}

// Insert element into hash table using double hashing
void insert(int key) {
    int index = hashFunction1(key);
    int step = hashFunction2(key);

    int i = 0;
    while (hashTable[(index + i * step) % TABLE_SIZE] != -1) {
        i++;
        if (i == TABLE_SIZE) {
            printf("Table is full, could not insert %d\n", key);
            return;
        }
    }
    hashTable[(index + i * step) % TABLE_SIZE] = key;
    printf("Inserted %d at index %d\n", key, (index + i * step) % TABLE_SIZE);
}

// Search for an element in the hash table
int search(int key) {
    int index = hashFunction1(key);
    int step = hashFunction2(key);

    int i = 0;
    while (hashTable[(index + i * step) % TABLE_SIZE] != -1) {
        if (hashTable[(index + i * step) % TABLE_SIZE] == key) {
            return (index + i * step) % TABLE_SIZE;
        }
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
