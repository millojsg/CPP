#include <cstdlib>
#include <cstdio>

using namespace std;

int main(int argc, char* argv[])
{
     if (argc==2)
     {
          remove(argv[1]);
     }

     return EXIT_SUCCESS;
} 