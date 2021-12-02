using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    class Program
    {

        [DllImport(@"C:\Users\Desarrollo\Documents\GitHub\CPP\Solucion Visual Studios\x64\Debug\DllArchivoDefinicion.dll", CallingConvention = CallingConvention.Cdecl)]
        static extern int Suma(int a, int b);







        static void Main(string[] args)
        {
            int test = Suma(4, 5);
            Console.WriteLine(test.ToString());
        }
    }
}
