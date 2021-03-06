#ifndef _SLAVE_STRUCT_H_
#define _SLAVE_STRUCT_H_

#include <semaphore.h>

typedef struct SlaveStruct {
	char *fileAvailableSemaphoreName;
	sem_t *fileAvailableSemaphore;

	char *writePipeName;
	char *readPipeName;

	int filesSent;
	int terminated;

	int writePipefd;
	int readPipefd;

	long id;
} SlaveStruct;

#endif
