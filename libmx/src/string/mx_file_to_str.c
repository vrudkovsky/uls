#include "libmx.h"

char *mx_file_to_str(const char *file) {
    int desc; //file descriptor 
    char c = 0; //buffer for chars
    char *str = 0; //array like a source
    size_t count = 0; //count how many bites in file
    int i = 0;

    desc = open(file, O_RDONLY);

    if(desc < 0) return 0;
    while (read(desc, &c, 1)) 
        count++;
    
    close(desc);

    str = (char*) malloc (sizeof(char) * count + 1);

    if((desc = open(file, O_RDONLY)) == 0) return 0;
    while (read(desc, &c, 1)) {
        str[i] = c;
        i++;
    }
    str[count] = 0;
    
    close(desc);
    return str;
}

// int main(int argc, char **argv) {
//      if(argc) 
//      printf("%s", mx_file_to_str(argv[1]));
//      return 0;
// }
