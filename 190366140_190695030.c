#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <sys/stat.h>
#include <time.h>


#define numberOfResources = 4;
#define numberOfCustomers = 5;

typedef struct thread //represents a single thread, you can add more members if required
{
	char tid[4]; //id of the thread as read from file
	unsigned int startTime;
	int state;
	pthread_t handle;
	int retVal;
} Thread;

int main(int argc, char *argv[]) { 

//Declare Available Max Allocation and need array
    
    int available[numberOfResources]; 
    int max[numberOfCustomers][numberOfResources];
	int allocation[numberOfCustomers][numberOfResources];
	int need[numberOfCustomers][numberOfResources];
	


}
