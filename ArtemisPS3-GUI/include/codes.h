
struct option_entry
{
    char * line;
    char * * name;
    char * * value;
    int id;
    int size;
    int sel;
};

struct code_entry
{
    char * name;
    int cwrite;
    int activated;
    int options_count;
    char * codes;
    struct option_entry * options;
};

struct game_entry
{
    char * name;
	char * path;
    int code_count;
    int code_sorted;
    struct code_entry * codes;
};

struct game_entry * ReadUserList(int * gmc);
void UnloadGameList(struct game_entry * list, int count);
int isGameActivated(struct game_entry game);
char * ParseActivatedGameList(struct game_entry * list, int count);
void writeFile(const char * path, char * a, char * b);
char * readFile(const char * path);
void readFileBuffered(const char * path, char * buffer);
void BubbleSortGameList(struct game_entry * games, int count);
struct game_entry BubbleSortCodeList(struct game_entry game);
int isCodeLineValid(char * line);
long getFileSize(const char * path);
struct option_entry * ReadOptions(struct code_entry code, int * count);
struct code_entry * ReadNCL(const char * path, int * _code_count);
