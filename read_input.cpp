#include "read_input.h"
#include <vector>
#include <string>

using namespace std;

vector<int> read_sizes(int *line_counter, int *max_length, char* docfile)
{
    FILE *file = fopen(docfile, "r");
    if(file == NULL)
        cout << "Error opening the file" << endl;
    
    char *line = NULL;
    size_t buffer=0;
    int curr_line_length;
    std::vector<int> arr_of_line_sizes;

    // Reads each line till getline returns -1 at end of file
    while(-1!=(curr_line_length=getline(&line, &buffer, file))) 
    {
        (*line_counter)++;
        free(line); // don't use this at all
        line=NULL;
        buffer=0;
        arr_of_line_sizes.push_back(curr_line_length);
    }
    fclose(file);
    free(line);

    // Return if document is empty
    if(!*line_counter)
    {
        cout << "Document is empty." << endl;
    }
    return arr_of_line_sizes;

}