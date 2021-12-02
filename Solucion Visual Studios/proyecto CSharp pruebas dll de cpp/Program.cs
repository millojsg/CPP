using System;
using System.Runtime.InteropServices;
using System.Text;

namespace proyecto_CSharp_pruebas_dll_de_cpp
{
   class Program
    {
        //[DllImport(@"C:\Users\Desarrollo\Documents\GitHub\CPP\Solucion Visual Studios\Dll para CSHARP\LIBRERIA_COMPARTIDA.dll", CallingConvention = CallingConvention.Cdecl)]
        //static extern void pipecommand(string str);

        //[DllImport(@"C:\Users\Desarrollo\Documents\GitHub\CPP\Solucion Visual Studios\Dll para CSHARP\LIBRERIA_COMPARTIDA.dll", CharSet = CharSet.Ansi)]
        //static extern void StrCat(string str1,
        //                          string str2,
        //                          StringBuilder newstr);

        //[DllImport(@"C:\Users\Desarrollo\Documents\GitHub\CPP\Solucion Visual Studios\Dll para CSHARP\LIBRERIA_COMPARTIDA.dll", CharSet = CharSet.Ansi)]
        //static extern void StrCpy(StringBuilder str1, string str2);

        //[DllImport(@"C:\Users\Desarrollo\Documents\GitHub\CPP\Solucion Visual Studios\Dll para CSHARP\LIBRERIA_COMPARTIDA.dll", CallingConvention = CallingConvention.Cdecl)]
        //static extern void SaySomething(string str);

        //[DllImport(@"C:\Users\Desarrollo\Documents\GitHub\CPP\Solucion Visual Studios\Dll para CSHARP\shared_lib.dll", CallingConvention = CallingConvention.Cdecl)]
        //static extern int Add(int a, int b);

        [DllImport("C:\\shared_lib.dll", CallingConvention = CallingConvention.Cdecl)]
        static extern int Add(int a, int b);







        static void Main(string[] args)
        {
            int test = Add(4, 5);

            //SaySomething(test.ToString());

            //StringBuilder sb = new StringBuilder();
            //StrCat("hello", "MUNDO", sb);
            //StrCpy(sb, "El perro");

            //SaySomething(sb.ToString());

            //pipecommand(@"dir c:\");

            Console.WriteLine("Hello World!");
        }
    }
}
