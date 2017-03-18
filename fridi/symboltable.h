#define memstart 100
#define space ' '
#define comment ';'
#define labeltag ':'
typedef struct label {
    int memadress;
    char label[80];
    bool isextern = false;
    bool isoperation = false;
    } label;
int ic = 0;
int dc = 0;
/*Counter For Extern Address*/
int ec = 0;
label memmap[1000];
char stringfile[1000][80];
unsigned int num_of_lines = 0;
enum { commstate, emptystate, opstate, labelstate };
