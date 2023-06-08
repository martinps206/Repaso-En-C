#include <iostream>
#include <filesystem>
#include <string>

using namespace std;
namespace fs = filesystem;

int main(){
    
    fs::path directorioActual(R"(C:\Users\Martin\Documents\Programacion)");
    fs::directory_iterator iterador(directorioActual);

    string nombreArchivo;
    string extensionArchivo;

    if (iterador != fs::end()) {
        nombreArchivo = iterador->path().filename().string();
        extensionArchivo = iterador->path().extension().string();
    }
    
    cout << "El nombre del archivo es: " << nombreArchivo << endl;
    cout << "La extensión del archivo es: " << extensionArchivo << endl;
    
    return 0;
}
