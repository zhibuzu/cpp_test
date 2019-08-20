#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

#define THREAD_NUM 5

void * print_hello(void * thread_id) {
    long tid = (long)thread_id;
    fprintf(stdout, "this thread id is %ld\n", tid);

    pthread_exit(NULL);
}

int main() {
    pthread_t ths[THREAD_NUM];
    int rc;

    for (long i = 0; i < THREAD_NUM; ++i) {
        fprintf(stdout, "creating thread id is %ld\n", i);
        rc = pthread_create(&ths[i], NULL, print_hello, (void *)i);
        if (rc) {
            fprintf(stderr, "create thread[%ld] failed, rc is %d\n", i, rc);
            exit(-1);
        }
    }
    fprintf(stdout, "complete\n");
    pthread_exit(NULL);
    return 0;
}