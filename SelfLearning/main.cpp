#include <iostream>
#include <thread>
#include <chrono>
#include <atomic>
#include <vector>
#include <mutex>

using namespace std;
mutex mtx;
void say_hello() {
    lock_guard<mutex> lock(mtx); // Lock the mutex to prevent
    static int count = 0;
    cout << "Hello from thread! for the " << count<<" times" <<endl;
    count++;
    this_thread::sleep_for(chrono::seconds(1)); // Simulate some work
}

void count_even(int startNum, int endNun)
{
    int sum_even = 0;
    for (int i = startNum; i <= endNun; i++) {
        if (i % 2 == 0) {
            sum_even += i;
        }
    }
    cout << "Sum of even numbers: " << sum_even << endl;
}

void count_odd(int startNum, int endNun)
{
    int sum_odd = 0;
    for (int i = startNum; i <= endNun; i++) {
        if (i % 2 != 0) {
            sum_odd += i;
        }
    }
    cout << "Sum of odd numbers: " << sum_odd << endl;
}

int main(){
    auto start = chrono::high_resolution_clock::now();

    // thread t1(count_even, 1, 1000000);
    // thread t2(count_odd, 1, 1000000);
    // t1.join();
    // t2.join();
    count_even(1, 1000000);
    count_odd(1, 1000000);

    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> elapsed = end - start;
    cout << "Total execution time: " << elapsed.count() << " seconds" << endl;

    return 0;
}
