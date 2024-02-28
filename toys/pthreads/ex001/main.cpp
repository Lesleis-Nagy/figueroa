//
// Created by L. Nagy on 27/02/2024.
//

#include <iostream>
#include <pthread.h>

void *
print_message_function(void *ptr);

int
main(int argc, char *argv[]) {

    pthread_t thread1, thread2;

    char message1[255] = "Thread 1";
    char message2[255] = "Thread 2";

    int iret1, iret2;

    // Create independent threads, each will run a function.
    iret1 = pthread_create(&thread1,
                           NULL,
                           print_message_function,
                           (void*) message1);

    iret2 = pthread_create(&thread2,
                           NULL,
                           print_message_function,
                           (void*) message2);

    // Wait until threads complete before main continues. Unless we wait
    // we run the risk of executing an exit that will terminate the
    // process and all threads before the threads have completed.

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    std::cout << "Thread 1 returns: " << iret1 << std::endl;
    std::cout << "Thread 2 returns: " << iret2 << std::endl;

    exit(0);

}

void *print_message_function(void *ptr) {
    char *message;
    message = (char *) ptr;
    std::cout << message << "\n";
    return NULL;
}
