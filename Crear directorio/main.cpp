#include <iostream>
#include <filesystem>
#include <fstream>

using std::cout; using std::endl;
using std::system; using std::string;
namespace fs = std::filesystem;

const std::string currentDateTime() {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%Y%m%d%H%M%S", &tstruct);
    return buf;
}

int main(int argc, char* argv[]) {

     string directory_name;
     string actualPath = argv[0];
     bool resultado = true;

     if (argc==1)
     {
          directory_name = currentDateTime();
     }
     else
     {
          directory_name= argv[1];
     }
 
    fs::create_directory(directory_name)? resultado=true : resultado=false;

     if ( resultado==true && argc>2 )
     {
          for(int i=2 ; i<argc ; i++)
          {
               std::ofstream file;
               file.open( directory_name + "/" + argv[i] );
               file.close();
          }
     }

     if (resultado==true)
     {
          cout<<"Se ha(n) creado lo(s) archivo(s) correctamente."<<endl;
     }
     else
     {
          cout<<"Ha ocurrido un error con la creación de archivos."<<endl;
     }

    return EXIT_SUCCESS;
}
