#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>
#include<unistd.h>
#include<stdlib.h>
 
sem_t mutex;
void* thread_t1(void* arg)
{
    sem_wait(&mutex);
    printf("1 ");
    sleep(2);
    sem_post(&mutex);
}
void* thread_t2(void* arg)
{
    sem_wait(&mutex);
    printf("2 ");
    sleep(2);
    sem_post(&mutex);
}
void* thread_t3(void* arg)
{
    sem_wait(&mutex);
    printf("3 ");
    sleep(2);
    sem_post(&mutex);
}
void* thread_t4(void* arg)
{
    sem_wait(&mutex);
    printf("4 ");
    sleep(2);
    sem_post(&mutex);
}  
 
int main()
{
    sem_init(&mutex, 0, 1);
    pthread_t T1,T2,T3,T4;
    pthread_create(&T1,NULL,thread_t1,NULL);
    sleep(2);
    pthread_create(&T2,NULL,thread_t2,NULL);
    sleep(2);
    pthread_create(&T3,NULL,thread_t3,NULL);
    sleep(2);
    pthread_create(&T4,NULL,thread_t4,NULL);
    sleep(2);
    pthread_join(T1,NULL);
    pthread_join(T2,NULL);
    pthread_join(T3,NULL);
    pthread_join(T4,NULL); 
    sem_destroy(&mutex);
    return 0;
}
