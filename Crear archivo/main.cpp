#include <iostream>
#include <fstream>

using namespace std;

const std::string currentDateTime(){
     time_t now=time(0);
     struct tm tstruct;
     char buf[80];
     tstruct = *localtime(&now);
     strftime(buf,sizeof(buf), "%Y%m%d%H%M%S", &tstruct);
     return buf;
}

int main(int argc,char* argv[])
{
     string fileName;

     if (argc==1)
     {
          fileName = currentDateTime() + ".txt";
          ofstream file(fileName);
          file.close();
     }
     else
     {
            for(int i=1 ; i<argc ; i++)
          {
               std::ofstream file;
               file.open( argv[i] );               
               file.close();
          }
        
     }

     return EXIT_SUCCESS;
}