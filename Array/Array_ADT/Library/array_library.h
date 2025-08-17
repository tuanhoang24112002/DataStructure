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
void linear_search(Array arr, int value);
void binary_search(Array arr, int value);
void swap(int &a, int &b);
int rbinary_search(Array arr, int value, int low, int high);
int Get(Array arr, int index);
void Set(Array &arr, int index, int value);
void Max(Array arr);
void Min(Array arr);
int Sum(Array arr);
int Average(Array arr);
void Reverse(Array &array);
void Reverse2(Array &array);
bool is_sorted(Array arr);
void insert_sorted(Array &arr, int value);