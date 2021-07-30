#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <sys/stat.h>
#include <time.h>


#define numberOfResources = 4;
#define fileName = "sample4_in.txt";

int numberOfCustomers = 5;
int available[4]; 
int max[5][4];
int allocation[5][4];
int need[5][4];

char **cmdinput;//input from the command line, now allowed to be used globably


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
    

	if(argc<2) {
		printf("Input file name missing")
		return -1;
	}

	char *point;
	long cmdInputConv = strtol(argv[1],&point, 10);

	numberOfResources[0] = cmdInputConv;
	cmdInputConv = strtol(argv[2], &p, 10);

	numberOfResources[1] = cmdInputConv;
	cmdInputConv = strtol(argv[3], &p, 10);

	numberOfResources[2] = cmdInputConv;
	cmdInputConv = strtol(argv[4], &p, 10);
	
	numberOfResources[3] = cmdInputConv;



	

	cmdinput = argv;
	ReadFile(fileName);

	printf("Number of Customers: ");
	scanf("%d",numberOfCustomers);

	printf("CurrentlyAvailable Resources %d %d %d %d\n",Available[0],Available[1],Available[2],Available[3])




}

int safeAlgortihm () { 
	int safe = 0;



}

int reqAlgorithm (){

}

int readFile(char* fileName, Thread** threads)//use this method in a suitable way to read file
{
	FILE *in = fopen(fileName, "r");
	if(!in)
	{
		printf("Child A: Error in opening input file...exiting with error code -1\n");
		return -1;
	}

	struct stat st;
	fstat(fileno(in), &st);
	char* fileContent = (char*)malloc(((int)st.st_size+1)* sizeof(char));
	fileContent[0]='\0';	
	while(!feof(in))
	{
		char line[100];
		if(fgets(line,100,in)!=NULL)
		{
			strncat(fileContent,line,strlen(line));
		}
	}
	fclose(in);

	char* command = NULL;
	int threadCount = 0;
	char* fileCopy = (char*)malloc((strlen(fileContent)+1)*sizeof(char));
	strcpy(fileCopy,fileContent);
	command = strtok(fileCopy,"\r\n");
	while(command!=NULL)
	{
		threadCount++;
		command = strtok(NULL,"\r\n");
	}
	*threads = (Thread*) malloc(sizeof(Thread)*threadCount);

	char* lines[threadCount];
	command = NULL;
	int i=0;
	command = strtok(fileContent,"\r\n");
	while(command!=NULL)
	{
		lines[i] = malloc(sizeof(command)*sizeof(char));
		strcpy(lines[i],command);
		i++;
		command = strtok(NULL,"\r\n");
	}

	for(int k=0; k<threadCount; k++)
	{
		char* token = NULL;
		int j = 0;
		token =  strtok(lines[k],";");
		while(token!=NULL)
		{
//this loop tokenizes each line of input file
//write your code here to populate instances of Thread to build a collection
		}
	}
	return threadCount;
}
