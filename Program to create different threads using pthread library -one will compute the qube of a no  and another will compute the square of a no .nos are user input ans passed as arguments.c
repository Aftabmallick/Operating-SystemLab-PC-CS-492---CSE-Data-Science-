#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#define nthreads 2
void *thread_fn(int z);
pthread_mutex_t mutex1=PTHREAD_MUTEX_INITIALIZER;
int counter =0;
int main(){
	pthread_t thread_id[nthreads];
	int i,j,z;
	printf("Enter no:");
	scanf("%d",&z);
	for(i=0;i<nthreads;i++)
		pthread_create(&thread_id[i],NULL,thread_fn,z);
	for(i=0;i<nthreads;i++)
		pthread_join(thread_id[i],NULL);
}
void *thread_fn(int z){
	int i=pthread_self();
	printf("\n Thread np =%d\n",i);
	if(i==1)
	printf("%d",z*z*z);
	else
		printf("%d",z*z);
}
