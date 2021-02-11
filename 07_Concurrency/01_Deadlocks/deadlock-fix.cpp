#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

int shared_data = 0;
mutex *locks = NULL;
int thread_size;

void thread_function(int id) {
	for (int i = 0; i < thread_size; i++)
		locks[i].lock();
	shared_data = id;
	cout << "Thread " << id << " set data to " << id << endl;
	for (int i = thread_size - 1; i >= 0; i--)
		locks[i].unlock();
}

/*
void thread_function(int id) {
        if (id % 2)
                for (int i = 0; i < thread_size; i++)
                        locks[i].lock();
        else
                for (int i = thread_size - 1; i >= 0; i--)
                        locks[i].lock();
        shared_data = id;
        cout << "Thread " << id << " set data to " << id << endl;

        if (id % 2)
                for (int i = thread_size - 1; i >= 0; i--)
                        locks[i].unlock(); else

        for (int i = 0; i < thread_size; i++)
                locks[i].unlock();
}
*/

int main(int argc, char** argv) {
        thread_size = atoi(argv[1]);
        thread* threads = new thread[thread_size];
        locks = new mutex[thread_size];

        for (int i = 0; i < thread_size; i++)
                threads[i] = thread(thread_function, i);

        for (int i = 0; i < thread_size; i++)
                threads[i].join();
        // Wait until threads are complete before main() continues
        delete[] locks;
        delete[] threads;

        return 0;
}

