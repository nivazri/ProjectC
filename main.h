/*------------------------
--- Includes of C libs ---
--------------------------*/

#include <stdio.h>
#include <string.h>

/*--------------------------------------
--- Declaration of Global Constants  ---
----------------------------------------*/

/*Minimum number of arguments that should be passed to the compiler*/
#define		MIN_ARGS 2

/*Maximum file name length allowed*/
#define		MAX_FILENAME_LEN		100

/*Maximum length of the label allowed*/
#define     MAX_LABEL_LEN  30

/*------------------------
--- Struct declaration ---
--------------------------*/

/*symbols table*/
typedef struct{
	char name[MAX_LABEL_LEN];	/* Label Name*/
	int memAddress;			/* Label Address in memory*/
	int isExtern;			/* Is the label extern or not*/
	int isAction;		/*Is label action or not*/
} Label;

