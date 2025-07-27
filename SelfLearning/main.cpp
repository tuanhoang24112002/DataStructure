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

int main(){
    
    thread t(say_hello);
    thread t1(say_hello);
    t.join(); // Wait for the thread to finish
    t1.join(); // Wait for the second thread to finish
    return 0;
}
