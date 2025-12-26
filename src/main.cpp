#include <iostream>
using namespace std;

// Prints the current state of the array
void printArray(int arr[], int n) {
    if (n == 0) {
        cout << "Array is empty\n";
        return;
    }

    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Array operations with step-by-step explanation
void arrayOperations() {
    int arr[100];
    int n = 0;
    int choice;

    while (true) {
        cout << "\n--- Array Operations ---\n";
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Display\n";
        cout << "4. Back\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 4)
            break;

        // Insert operation
        if (choice == 1) {
            if (n == 100) {
                cout << "Array is full\n";
                continue;
            }

            int value;
            cout << "Enter value: ";
            cin >> value;

            cout << "\nStep 1: Array before insertion\n";
            printArray(arr, n);

            cout << "Step 2: Insert element at index " << n << endl;
            arr[n] = value;
            n++;

            cout << "Step 3: Array after insertion\n";
            printArray(arr, n);

            cout << "\nTime Complexity: O(1)\n";
            cout << "Space Complexity: O(1)\n";
        }

        // Delete operation
        else if (choice == 2) {
            if (n == 0) {
                cout << "Array is empty\n";
                continue;
            }

            int pos;
            cout << "Enter position (0 to " << n - 1 << "): ";
            cin >> pos;

            if (pos < 0 || pos >= n) {
                cout << "Invalid position\n";
                continue;
            }

            cout << "\nStep 1: Array before deletion\n";
            printArray(arr, n);

            cout << "Step 2: Shift elements left from index " << pos << endl;
            for (int i = pos; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }
            n--;

            cout << "Step 3: Array after deletion\n";
            printArray(arr, n);

            cout << "\nTime Complexity: O(n)\n";
            cout << "Space Complexity: O(1)\n";
        }

        // Display operation
        else if (choice == 3) {
            printArray(arr, n);
            cout << "\nTime Complexity: O(n)\n";
            cout << "Space Complexity: O(1)\n";
        }

        else {
            cout << "Invalid choice\n";
        }
    }
}


// Stack operations (to be implemented)
void stackOperations() {
    int stack[100];   // Stack array
    int top = -1;     // Top pointer
    int choice;

    while (true) {
        cout << "\n--- Stack Operations ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Back\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 5)
            break;

        // PUSH OPERATION
        if (choice == 1) {
            if (top == 99) {
                cout << "Stack Overflow (stack is full)\n";
                continue;
            }

            int value;
            cout << "Enter value to push: ";
            cin >> value;

            cout << "\nStep 1: Stack before push\n";
            if (top == -1)
                cout << "Stack is empty\n";
            else {
                for (int i = top; i >= 0; i--)
                    cout << stack[i] << " ";
                cout << endl;
            }

            cout << "Step 2: Increment top pointer\n";
            top++;

            cout << "Step 3: Insert element at top index " << top << endl;
            stack[top] = value;

            cout << "Step 4: Stack after push\n";
            for (int i = top; i >= 0; i--)
                cout << stack[i] << " ";
            cout << endl;

            cout << "\nTime Complexity: O(1)\n";
            cout << "Space Complexity: O(1)\n";
        }

        // POP OPERATION
        else if (choice == 2) {
            if (top == -1) {
                cout << "Stack Underflow (stack is empty)\n";
                continue;
            }

            cout << "\nStep 1: Stack before pop\n";
            for (int i = top; i >= 0; i--)
                cout << stack[i] << " ";
            cout << endl;

            cout << "Step 2: Remove element at top index " << top << endl;
            int removed = stack[top];

            cout << "Step 3: Decrement top pointer\n";
            top--;

            cout << "Popped element: " << removed << endl;

            cout << "Step 4: Stack after pop\n";
            if (top == -1)
                cout << "Stack is empty\n";
            else {
                for (int i = top; i >= 0; i--)
                    cout << stack[i] << " ";
                cout << endl;
            }

            cout << "\nTime Complexity: O(1)\n";
            cout << "Space Complexity: O(1)\n";
        }

        // PEEK OPERATION
        else if (choice == 3) {
            if (top == -1) {
                cout << "Stack is empty\n";
            } else {
                cout << "Top element: " << stack[top] << endl;
            }

            cout << "\nTime Complexity: O(1)\n";
            cout << "Space Complexity: O(1)\n";
        }

        // DISPLAY OPERATION
        else if (choice == 4) {
            if (top == -1) {
                cout << "Stack is empty\n";
            } else {
                cout << "Stack (top -> bottom): ";
                for (int i = top; i >= 0; i--)
                    cout << stack[i] << " ";
                cout << endl;
            }

            cout << "\nTime Complexity: O(n)\n";
            cout << "Space Complexity: O(1)\n";
        }

        else {
            cout << "Invalid choice\n";
        }
    }
}


// Queue operations (to be implemented)
void queueOperations() {
    int deque[100];
    int front = -1, rear = -1;
    int size = 100;
    int choice;

    while (true) {
        cout << "\n--- Doubly Ended Circular Queue ---\n";
        cout << "1. Insert at Front\n";
        cout << "2. Insert at Rear\n";
        cout << "3. Delete from Front\n";
        cout << "4. Delete from Rear\n";
        cout << "5. Display\n";
        cout << "6. Back\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 6)
            break;

        // INSERT AT FRONT
        if (choice == 1) {
            if ((front == 0 && rear == size - 1) || (front == rear + 1)) {
                cout << "Queue Overflow\n";
                continue;
            }

            int value;
            cout << "Enter value: ";
            cin >> value;

            cout << "\nStep 1: Current queue\n";
            if (front == -1)
                cout << "Queue is empty\n";
            else {
                int i = front;
                while (true) {
                    cout << deque[i] << " ";
                    if (i == rear) break;
                    i = (i + 1) % size;
                }
                cout << endl;
            }

            if (front == -1) {
                cout << "Step 2: Queue empty, initialize front and rear\n";
                front = rear = 0;
            } else if (front == 0) {
                cout << "Step 2: Circular move front to end\n";
                front = size - 1;
            } else {
                cout << "Step 2: Decrement front\n";
                front--;
            }

            cout << "Step 3: Insert element at front index " << front << endl;
            deque[front] = value;

            cout << "Step 4: Queue after insertion\n";
            int i = front;
            while (true) {
                cout << deque[i] << " ";
                if (i == rear) break;
                i = (i + 1) % size;
            }
            cout << endl;

            cout << "\nTime Complexity: O(1)\n";
            cout << "Space Complexity: O(1)\n";
        }

        // INSERT AT REAR
        else if (choice == 2) {
            if ((front == 0 && rear == size - 1) || (front == rear + 1)) {
                cout << "Queue Overflow\n";
                continue;
            }

            int value;
            cout << "Enter value: ";
            cin >> value;

            cout << "\nStep 1: Current queue\n";
            if (front == -1)
                cout << "Queue is empty\n";
            else {
                int i = front;
                while (true) {
                    cout << deque[i] << " ";
                    if (i == rear) break;
                    i = (i + 1) % size;
                }
                cout << endl;
            }

            if (front == -1) {
                cout << "Step 2: Queue empty, initialize front and rear\n";
                front = rear = 0;
            } else if (rear == size - 1) {
                cout << "Step 2: Circular move rear to start\n";
                rear = 0;
            } else {
                cout << "Step 2: Increment rear\n";
                rear++;
            }

            cout << "Step 3: Insert element at rear index " << rear << endl;
            deque[rear] = value;

            cout << "Step 4: Queue after insertion\n";
            int i = front;
            while (true) {
                cout << deque[i] << " ";
                if (i == rear) break;
                i = (i + 1) % size;
            }
            cout << endl;

            cout << "\nTime Complexity: O(1)\n";
            cout << "Space Complexity: O(1)\n";
        }

        // DELETE FROM FRONT
        else if (choice == 3) {
            if (front == -1) {
                cout << "Queue Underflow\n";
                continue;
            }

            cout << "\nStep 1: Current queue\n";
            int i = front;
            while (true) {
                cout << deque[i] << " ";
                if (i == rear) break;
                i = (i + 1) % size;
            }
            cout << endl;

            cout << "Step 2: Remove element at front index " << front << endl;
            int removed = deque[front];

            if (front == rear) {
                cout << "Step 3: Queue becomes empty\n";
                front = rear = -1;
            } else if (front == size - 1) {
                cout << "Step 3: Circular move front to start\n";
                front = 0;
            } else {
                cout << "Step 3: Increment front\n";
                front++;
            }

            cout << "Removed element: " << removed << endl;

            cout << "\nTime Complexity: O(1)\n";
            cout << "Space Complexity: O(1)\n";
        }

        // DELETE FROM REAR
        else if (choice == 4) {
            if (front == -1) {
                cout << "Queue Underflow\n";
                continue;
            }

            cout << "\nStep 1: Current queue\n";
            int i = front;
            while (true) {
                cout << deque[i] << " ";
                if (i == rear) break;
                i = (i + 1) % size;
            }
            cout << endl;

            cout << "Step 2: Remove element at rear index " << rear << endl;
            int removed = deque[rear];

            if (front == rear) {
                cout << "Step 3: Queue becomes empty\n";
                front = rear = -1;
            } else if (rear == 0) {
                cout << "Step 3: Circular move rear to end\n";
                rear = size - 1;
            } else {
                cout << "Step 3: Decrement rear\n";
                rear--;
            }

            cout << "Removed element: " << removed << endl;

            cout << "\nTime Complexity: O(1)\n";
            cout << "Space Complexity: O(1)\n";
        }

        // DISPLAY
        else if (choice == 5) {
            if (front == -1) {
                cout << "Queue is empty\n";
            } else {
                cout << "Queue elements: ";
                int i = front;
                while (true) {
                    cout << deque[i] << " ";
                    if (i == rear) break;
                    i = (i + 1) % size;
                }
                cout << endl;
            }

            cout << "\nTime Complexity: O(n)\n";
            cout << "Space Complexity: O(1)\n";
        }

        else {
            cout << "Invalid choice\n";
        }
    }
}


// Singly Linked List Node
struct SNode {
    int data;
    SNode* next;
};

// Doubly Linked List Node
struct DNode {
    int data;
    DNode* prev;
    DNode* next;
};

// Print singly linked list
void printSinglyList(SNode* head) {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    SNode* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

// Print doubly linked list
void printDoublyList(DNode* head) {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    DNode* temp = head;
    cout << "NULL <-> ";
    while (temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

void singlyLinkedListOperations() {
    SNode* head = NULL;
    int choice;

    while (true) {
        cout << "\n--- Singly Linked List ---\n";
        cout << "1. Insert at Index\n";
        cout << "2. Delete at Index\n";
        cout << "3. Display\n";
        cout << "4. Back\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 4)
            break;

        // INSERT AT INDEX
        if (choice == 1) {
            int value, pos;
            cout << "Enter value: ";
            cin >> value;
            cout << "Enter index: ";
            cin >> pos;

            cout << "\nStep 1: Create new node\n";
            SNode* newNode = new SNode();
            newNode->data = value;
            newNode->next = NULL;

            cout << "Step 2: Current list\n";
            printSinglyList(head);

            if (pos == 0) {
                cout << "Step 3: Insert at head\n";
                newNode->next = head;
                head = newNode;
            } else {
                cout << "Step 3: Traverse to node before index\n";
                SNode* temp = head;
                for (int i = 0; i < pos - 1 && temp != NULL; i++) {
                    temp = temp->next;
                }

                if (temp == NULL) {
                    cout << "Invalid index\n";
                    delete newNode;
                    continue;
                }

                cout << "Step 4: Adjust pointers\n";
                newNode->next = temp->next;
                temp->next = newNode;
            }

            cout << "Step 5: List after insertion\n";
            printSinglyList(head);

            cout << "\nTime Complexity: O(n)\n";
            cout << "Space Complexity: O(1)\n";
        }

        // DELETE AT INDEX
        else if (choice == 2) {
            if (head == NULL) {
                cout << "List is empty\n";
                continue;
            }

            int pos;
            cout << "Enter index: ";
            cin >> pos;

            cout << "\nStep 1: Current list\n";
            printSinglyList(head);

            if (pos == 0) {
                cout << "Step 2: Delete head node\n";
                SNode* temp = head;
                head = head->next;
                delete temp;
            } else {
                cout << "Step 2: Traverse to node before index\n";
                SNode* temp = head;
                for (int i = 0; i < pos - 1 && temp->next != NULL; i++) {
                    temp = temp->next;
                }

                if (temp->next == NULL) {
                    cout << "Invalid index\n";
                    continue;
                }

                cout << "Step 3: Bypass node to be deleted\n";
                SNode* delNode = temp->next;
                temp->next = delNode->next;
                delete delNode;
            }

            cout << "Step 4: List after deletion\n";
            printSinglyList(head);

            cout << "\nTime Complexity: O(n)\n";
            cout << "Space Complexity: O(1)\n";
        }

        else if (choice == 3) {
            printSinglyList(head);
        }

        else {
            cout << "Invalid choice\n";
        }
    }
}


void doublyLinkedListOperations() {
    DNode* head = NULL;
    int choice;

    while (true) {
        cout << "\n--- Doubly Linked List ---\n";
        cout << "1. Insert at Index\n";
        cout << "2. Delete at Index\n";
        cout << "3. Display\n";
        cout << "4. Back\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 4)
            break;

        // INSERT AT INDEX
        if (choice == 1) {
            int value, pos;
            cout << "Enter value: ";
            cin >> value;
            cout << "Enter index: ";
            cin >> pos;

            cout << "\nStep 1: Create new node\n";
            DNode* newNode = new DNode();
            newNode->data = value;
            newNode->prev = NULL;
            newNode->next = NULL;

            cout << "Step 2: Current list\n";
            printDoublyList(head);

            if (pos == 0) {
                cout << "Step 3: Insert at head\n";
                newNode->next = head;
                if (head != NULL)
                    head->prev = newNode;
                head = newNode;
            } else {
                cout << "Step 3: Traverse to node before index\n";
                DNode* temp = head;
                for (int i = 0; i < pos - 1 && temp != NULL; i++) {
                    temp = temp->next;
                }

                if (temp == NULL) {
                    cout << "Invalid index\n";
                    delete newNode;
                    continue;
                }

                cout << "Step 4: Update links\n";
                newNode->next = temp->next;
                newNode->prev = temp;
                if (temp->next != NULL)
                    temp->next->prev = newNode;
                temp->next = newNode;
            }

            cout << "Step 5: List after insertion\n";
            printDoublyList(head);

            cout << "\nTime Complexity: O(n)\n";
            cout << "Space Complexity: O(1)\n";
        }

        // DELETE AT INDEX
        else if (choice == 2) {
            if (head == NULL) {
                cout << "List is empty\n";
                continue;
            }

            int pos;
            cout << "Enter index: ";
            cin >> pos;

            cout << "\nStep 1: Current list\n";
            printDoublyList(head);

            if (pos == 0) {
                cout << "Step 2: Delete head node\n";
                DNode* temp = head;
                head = head->next;
                if (head != NULL)
                    head->prev = NULL;
                delete temp;
            } else {
                cout << "Step 2: Traverse to node at index\n";
                DNode* temp = head;
                for (int i = 0; i < pos && temp != NULL; i++) {
                    temp = temp->next;
                }

                if (temp == NULL) {
                    cout << "Invalid index\n";
                    continue;
                }

                cout << "Step 3: Update neighboring links\n";
                temp->prev->next = temp->next;
                if (temp->next != NULL)
                    temp->next->prev = temp->prev;

                delete temp;
            }

            cout << "Step 4: List after deletion\n";
            printDoublyList(head);

            cout << "\nTime Complexity: O(n)\n";
            cout << "Space Complexity: O(1)\n";
        }

        else if (choice == 3) {
            printDoublyList(head);
        }

        else {
            cout << "Invalid choice\n";
        }
    }
}


// Linked list operations
void linkedListOperations() {
    int choice;

    while (true) {
        cout << "\n--- Linked List Menu ---\n";
        cout << "1. Singly Linked List\n";
        cout << "2. Doubly Linked List\n";
        cout << "3. Back\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 3)
            break;

        if (choice == 1)
            singlyLinkedListOperations();
        else if (choice == 2)
            doublyLinkedListOperations();
        else
            cout << "Invalid choice\n";
    }
}

struct BSTNode {
    int data;
    BSTNode* left;
    BSTNode* right;
};

BSTNode* createNode(int value) {
    BSTNode* node = new BSTNode();
    node->data = value;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void inorder(BSTNode* root) {
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(BSTNode* root) {
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(BSTNode* root) {
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

BSTNode* insertBST(BSTNode* root, int value) {
    if (root == NULL) {
        cout << "Insert position found, creating new node\n";
        return createNode(value);
    }

    if (value < root->data) {
        cout << "Value < " << root->data << " → move left\n";
        root->left = insertBST(root->left, value);
    } else {
        cout << "Value >= " << root->data << " → move right\n";
        root->right = insertBST(root->right, value);
    }

    return root;
}

void searchBST(BSTNode* root, int key) {
    if (root == NULL) {
        cout << "Reached NULL → element not found\n";
        return;
    }

    cout << "Visiting node: " << root->data << endl;

    if (root->data == key) {
        cout << "Element found!\n";
    } else if (key < root->data) {
        cout << "Key < " << root->data << " → go left\n";
        searchBST(root->left, key);
    } else {
        cout << "Key > " << root->data << " → go right\n";
        searchBST(root->right, key);
    }
}

BSTNode* findMin(BSTNode* root) {
    while (root->left != NULL)
        root = root->left;
    return root;
}

BSTNode* deleteBST(BSTNode* root, int key) {
    if (root == NULL) {
        cout << "Element not found\n";
        return root;
    }

    if (key < root->data) {
        cout << "Key < " << root->data << " → go left\n";
        root->left = deleteBST(root->left, key);
    }
    else if (key > root->data) {
        cout << "Key > " << root->data << " → go right\n";
        root->right = deleteBST(root->right, key);
    }
    else {
        cout << "Node to delete found: " << root->data << endl;

        // Case 1 & 2: 0 or 1 child
        if (root->left == NULL) {
            BSTNode* temp = root->right;
            cout << "Node has 0 or 1 child → bypass node\n";
            delete root;
            return temp;
        }
        else if (root->right == NULL) {
            BSTNode* temp = root->left;
            cout << "Node has 1 child → bypass node\n";
            delete root;
            return temp;
        }

        // Case 3: Two children
        cout << "Node has 2 children → find inorder successor\n";
        BSTNode* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteBST(root->right, temp->data);
    }

    return root;
}


// Binary search tree operations (to be implemented)
void bstOperations() {
    BSTNode* root = NULL;
    int choice;

    while (true) {
        cout << "\n--- Binary Search Tree ---\n";
        cout << "1. Insert\n";
        cout << "2. Search\n";
        cout << "3. Delete\n";
        cout << "4. Inorder Traversal\n";
        cout << "5. Preorder Traversal\n";
        cout << "6. Postorder Traversal\n";
        cout << "7. Back\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 7)
            break;

        if (choice == 1) {
            int value;
            cout << "Enter value to insert: ";
            cin >> value;

            cout << "\nInsertion steps:\n";
            root = insertBST(root, value);

            cout << "\nInorder traversal after insertion: ";
            inorder(root);
            cout << "\nTime Complexity: O(h)\n";
            cout << "Space Complexity: O(h)\n";
        }

        else if (choice == 2) {
            int key;
            cout << "Enter value to search: ";
            cin >> key;

            cout << "\nSearch steps:\n";
            searchBST(root, key);

            cout << "\nTime Complexity: O(h)\n";
            cout << "Space Complexity: O(h)\n";
        }

        else if (choice == 3) {
            int key;
            cout << "Enter value to delete: ";
            cin >> key;

            cout << "\nDeletion steps:\n";
            root = deleteBST(root, key);

            cout << "\nInorder traversal after deletion: ";
            inorder(root);
            cout << "\nTime Complexity: O(h)\n";
            cout << "Space Complexity: O(h)\n";
        }

        else if (choice == 4) {
            cout << "Inorder: ";
            inorder(root);
            cout << "\nTime Complexity: O(n)\n";
        }

        else if (choice == 5) {
            cout << "Preorder: ";
            preorder(root);
            cout << "\nTime Complexity: O(n)\n";
        }

        else if (choice == 6) {
            cout << "Postorder: ";
            postorder(root);
            cout << "\nTime Complexity: O(n)\n";
        }

        else {
            cout << "Invalid choice\n";
        }
    }
}


// Sorting algorithms (to be implemented)
// Helper function to print array
void printSortArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

/* ---------------- BUBBLE SORT ---------------- */
void bubbleSort(int arr[], int n) {
    int comparisons = 0, swaps = 0;

    cout << "\n--- Bubble Sort (Step-by-Step) ---\n";

    for (int i = 0; i < n - 1; i++) {
        cout << "\nPass " << i + 1 << ":\n";
        for (int j = 0; j < n - i - 1; j++) {
            comparisons++;
            cout << "Compare " << arr[j] << " and " << arr[j + 1] << endl;

            if (arr[j] > arr[j + 1]) {
                swaps++;
                cout << "Swap\n";
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            printSortArray(arr, n);
        }
    }

    cout << "\nFinal Sorted Array:\n";
    printSortArray(arr, n);

    cout << "\nOperation Count:\n";
    cout << "Comparisons: " << comparisons << endl;
    cout << "Swaps: " << swaps << endl;

    cout << "\nHow Time Complexity is Derived:\n";
    cout << "- Two nested loops\n";
    cout << "- Comparisons grow approximately as n × n\n";
    cout << "Time Complexity: O(n^2)\n";
    cout << "Space Complexity: O(1)\n";
}

/* ---------------- INSERTION SORT ---------------- */
void insertionSort(int arr[], int n) {
    int shifts = 0;

    cout << "\n--- Insertion Sort (Step-by-Step) ---\n";

    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        cout << "\nInsert element " << key << endl;

        while (j >= 0 && arr[j] > key) {
            shifts++;
            cout << "Shift " << arr[j] << " to the right\n";
            arr[j + 1] = arr[j];
            j--;
            printSortArray(arr, n);
        }

        arr[j + 1] = key;
        cout << "Place " << key << " at correct position\n";
        printSortArray(arr, n);
    }

    cout << "\nFinal Sorted Array:\n";
    printSortArray(arr, n);

    cout << "\nOperation Count:\n";
    cout << "Shifts: " << shifts << endl;

    cout << "\nHow Time Complexity is Derived:\n";
    cout << "- Each element may shift across sorted portion\n";
    cout << "- Worst case shifts ≈ n^2\n";
    cout << "Time Complexity: O(n^2)\n";
    cout << "Space Complexity: O(1)\n";
}

/* ---------------- SELECTION SORT ---------------- */
void selectionSort(int arr[], int n) {
    int comparisons = 0, swaps = 0;

    cout << "\n--- Selection Sort (Step-by-Step) ---\n";

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        cout << "\nSelecting minimum for index " << i << endl;

        for (int j = i + 1; j < n; j++) {
            comparisons++;
            cout << "Compare " << arr[minIndex] << " and " << arr[j] << endl;
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
                cout << "New minimum found\n";
            }
        }

        if (minIndex != i) {
            swaps++;
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
        printSortArray(arr, n);
    }

    cout << "\nFinal Sorted Array:\n";
    printSortArray(arr, n);

    cout << "\nOperation Count:\n";
    cout << "Comparisons: " << comparisons << endl;
    cout << "Swaps: " << swaps << endl;

    cout << "\nHow Time Complexity is Derived:\n";
    cout << "- Nested loops always run fully\n";
    cout << "- Total comparisons ≈ n^2\n";
    cout << "Time Complexity: O(n^2)\n";
    cout << "Space Complexity: O(1)\n";
}

/* ---------------- MERGE SORT ---------------- */
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[50], R[50];

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

void mergeSort(int arr[], int left, int right) {
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

/* ---------------- SORTING MENU ---------------- */
void sortingAlgorithms() {
    int arr[50], n, choice;

    cout << "\nEnter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    while (true) {
        cout << "\n--- Sorting Algorithms ---\n";
        cout << "1. Bubble Sort\n";
        cout << "2. Insertion Sort\n";
        cout << "3. Selection Sort\n";
        cout << "4. Merge Sort\n";
        cout << "5. Back\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 5)
            break;

        int temp[50];
        for (int i = 0; i < n; i++)
            temp[i] = arr[i];

        if (choice == 1) bubbleSort(temp, n);
        else if (choice == 2) insertionSort(temp, n);
        else if (choice == 3) selectionSort(temp, n);
        else if (choice == 4) {
            cout << "\n--- Merge Sort ---\n";
            mergeSort(temp, 0, n - 1);
            printSortArray(temp, n);

            cout << "\nHow Time Complexity is Derived:\n";
            cout << "- Array divided into halves (log n levels)\n";
            cout << "- Each level processes n elements\n";
            cout << "Time Complexity: O(n log n)\n";
            cout << "Space Complexity: O(n)\n";
        }
        else cout << "Invalid choice\n";
    }
}


// Searching algorithms (to be implemented)
/* ---------------- LINEAR SEARCH ---------------- */
void linearSearch(int arr[], int n, int key) {
    int comparisons = 0;

    cout << "\n--- Linear Search (Step-by-Step) ---\n";

    for (int i = 0; i < n; i++) {
        comparisons++;
        cout << "Compare key " << key << " with arr[" << i << "] = " << arr[i] << endl;

        if (arr[i] == key) {
            cout << "Element found at index " << i << endl;

            cout << "\nOperation Count:\n";
            cout << "Comparisons: " << comparisons << endl;

            cout << "\nHow Time Complexity is Derived:\n";
            cout << "- Elements checked one by one\n";
            cout << "- In worst case, all n elements are checked\n";
            cout << "Time Complexity: O(n)\n";
            cout << "Space Complexity: O(1)\n";
            return;
        }
    }

    cout << "Element not found\n";

    cout << "\nOperation Count:\n";
    cout << "Comparisons: " << comparisons << endl;

    cout << "\nHow Time Complexity is Derived:\n";
    cout << "- Full traversal required\n";
    cout << "Time Complexity: O(n)\n";
    cout << "Space Complexity: O(1)\n";
}

/* ---------------- BINARY SEARCH ---------------- */
void binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    int comparisons = 0;

    cout << "\n--- Binary Search (Step-by-Step) ---\n";
    cout << "NOTE: Array must be sorted\n";

    while (low <= high) {
        int mid = (low + high) / 2;
        comparisons++;

        cout << "Low=" << low << ", High=" << high
             << ", Mid=" << mid << " → arr[mid]=" << arr[mid] << endl;

        if (arr[mid] == key) {
            cout << "Element found at index " << mid << endl;

            cout << "\nOperation Count:\n";
            cout << "Comparisons: " << comparisons << endl;

            cout << "\nHow Time Complexity is Derived:\n";
            cout << "- Search space reduced by half each step\n";
            cout << "- Total steps ≈ log2(n)\n";
            cout << "Time Complexity: O(log n)\n";
            cout << "Space Complexity: O(1)\n";
            return;
        }
        else if (key < arr[mid]) {
            cout << "Key < arr[mid] → search left half\n";
            high = mid - 1;
        }
        else {
            cout << "Key > arr[mid] → search right half\n";
            low = mid + 1;
        }
    }

    cout << "Element not found\n";

    cout << "\nOperation Count:\n";
    cout << "Comparisons: " << comparisons << endl;

    cout << "\nHow Time Complexity is Derived:\n";
    cout << "- Array divided into halves repeatedly\n";
    cout << "Time Complexity: O(log n)\n";
    cout << "Space Complexity: O(1)\n";
}

/* ---------------- SEARCHING MENU ---------------- */
void searchingAlgorithms() {
    int arr[50], n, choice, key;

    cout << "\nEnter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    while (true) {
        cout << "\n--- Searching Algorithms ---\n";
        cout << "1. Linear Search\n";
        cout << "2. Binary Search\n";
        cout << "3. Back\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 3)
            break;

        cout << "Enter key to search: ";
        cin >> key;

        if (choice == 1) {
            linearSearch(arr, n, key);
        }
        else if (choice == 2) {
            binarySearch(arr, n, key);
        }
        else {
            cout << "Invalid choice\n";
        }
    }
}


int main() {
    cout << "DSA Learning Assistant\n";

    int choice;
    while (true) {
        cout << "\n--- DSA topic list ---\n";
        cout << "1. Array Operations\n";
        cout << "2. Linked List Operations\n";
        cout << "3. Stack Operations\n";
        cout << "4. Queue Operations\n";
        cout << "5. Binary Search Tree\n";
        cout << "6. Sorting Algorithms\n";
        cout << "7. Searching Algorithms\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 8) {
            cout << "Exiting program...\n";
            break;
        }

        switch (choice) {
            case 1: arrayOperations(); break;
            case 2: linkedListOperations(); break;
            case 3: stackOperations(); break;
            case 4: queueOperations(); break;
            case 5: bstOperations(); break;
            case 6: sortingAlgorithms(); break;
            case 7: searchingAlgorithms(); break;
            default: cout << "Invalid choice\n";
        }
    }

    return 0;
}
