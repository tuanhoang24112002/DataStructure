typedef struct {
    int A[10];
    int size;
    int length;
}Array;


void print_hello();
void display(Array arr);
void append(Array &arr, int value);
void insert(Array &arr, int index, int value);
void delete_element(Array &arr, int index);