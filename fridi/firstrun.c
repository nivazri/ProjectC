#include "symboltable.h"
#include "errors.h"
#include "function_prototypes.h"
bool firstrun(FILE *assembly_file)
{
  insertFileToArray(assembly_file);
  parseLines(stringfile);
}
void insertFileToArray(FILE *assembly_file)
{
  int inline_index = 0;
  char c;
  c = fgetc(assembly_file);
  while(!feof(assembly_file))
  {
    if (c == '\n')
    {
        stringfile[num_of_lines][inline_index] = '\0';
        inline_index = 0;
        num_of_lines++;
    }
    else
    {
        stringfile[num_of_lines][inline_index] = c;
        inline_index++;
    }
    c = fgetc(assembly_file);
  }
}
void parseLines(char **stringfile)
{
  int i = 0;
  int j = 0;
  int kind_of_statement = 0;
  char *line;
  for (; i < num_of_lines; i++)
  {
    line = strtok(stringfile[i], space);
    kind_of_statement = kindOfStatement(i,firstword)
    for (j = 0;line != NULL;j++)
    {

    }
  }
}
int kindOfStatement(char *firstword)
{
  if (firstword[0] == comment)
    return commstate;
  if (firstword[0] == '\0')
    return emptystate;
  if(firstword[strlen(firstword) - 1] == labeltag)
    return labelstate;
  if(isoperation(firstword))
    return opstate;
  fprintf(stderr, "Incorrect command in line %d \n",i);
  iserrorexist = true;
}
bool isoperation(char *firstword)
{

}
