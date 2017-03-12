#include "file_process.h"

void openFile(char *fileName)
{
	FILE *file = fopen(fileName,FILE_OPEN_MODE);

	if (file == NULL)
	{
		printf("ERROR: Cannot open file: %s\n", fileName);
		return;
	}
    fileReadProccessManager(file);
	fclose(file);
}

void fileReadProccessManager(FILE *file)
{
    printf("yossi");
}
