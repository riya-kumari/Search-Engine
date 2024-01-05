#include "search_engine.h"
#include "read_input.h"
#include <vector>
using namespace std;

int main(int argc, char **argv)
{
    if(argc!=5 || strcmp(argv[1], "-d") || strcmp(argv[3], "-k"))
    {
        cout << "wrong arguments" << endl;
        return -1;
    }
    cout << "Please Wait" << endl;
    int line_counter = 0;
    int max_length = -1;
    int k = atoi(argv[4]);
    vector<int> line_sizes = read_sizes(&line_counter, &max_length, argv[2]);
    if(line_sizes.size() == 0)
        return -1;
    
    // 1:54
    cout<<"Initialization finished" << endl;
    for(int i = 0; i < line_sizes.size(); i++)
    {
        cout << "line " << i << ": " << line_sizes[i] << endl;
    }

    return 1;
}