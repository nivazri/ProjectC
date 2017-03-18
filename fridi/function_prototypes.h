bool firstrun(FILE *assembly_file);
void insertFileToArray(FILE *assembly_file);
void parseLines(char **stringfile);
int kindOfStatement(int line,char *firstword);
bool isoperation(char *firstword);
