g++ -c -DBUILD_MY_DLL LIBRERIA_COMPARTIDA.cpp
g++ -shared -o LIBRERIA_COMPARTIDA.dll LIBRERIA_COMPARTIDA.o -Wl,--out-implib,libshared_lib.a