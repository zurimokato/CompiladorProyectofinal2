#ifndef ARCHIVO_H
#define ARCHIVO_H

class Archivo
{
public:
    Archivo() {}
    void crearArchivo(char nameFile[100]){
        ofstream archivo;
        archivo.open(nameFile,ios::app|ios::binary);
        if(! archivo){
            exit(0);
        }
    }
};



#endif // ARCHIVO_H
