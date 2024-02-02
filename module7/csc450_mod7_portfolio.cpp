#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

mutex coutMutex; // Protects countUp and countDown.

// A function that counts up to 20 from 0.
void countUp() {
    for (int i = 0; i <= 20; i++) {
        lock_guard<mutex> lock(coutMutex);
        cout << "Count Up: " << i << endl;
    }
}

// A function that counts down from 20 to 0.
void countDown() {
    for (int i = 20; i >= 0; i--) {
        lock_guard<mutex> lock(coutMutex);
        cout <<"Count down: " << i << endl;
    }
}

int main()
{
    // Creating two threads to operate concurrently. 
    thread threadUp(countUp);
    thread threadDown(countDown);

    // Joining threads.
    threadUp.join();
    threadDown.join();
}
