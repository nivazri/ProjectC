#include "main.h"
#include "errors.h"
int main(int argc, char *argv[])
{
  if(argc > 2)
  {
    fprintf(stderr, "Too many arguments\n");
    exit(too_many_args);
  }
  if(argc < 2)
  {
    fprintf(stderr, "Too few arguments\n");
    exit(too_few_args);
  }
  assembly_file = fopen(argv[1],"r");
  if(assembly_file)
  {
    firstrun(assembly_file);
  }
  else
  {
    fprintf(stderr, "File not found or you did not give read permissions\n");
    exit(file_not_found);
  }
}
