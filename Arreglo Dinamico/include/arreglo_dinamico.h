#ifndef ARREGLO_DINAMICO_H
#define ARREGLO_DINAMICO_H


class arreglo_dinamico
{
    private:
        int sise;
        int *data;

    public:
        arreglo_dinamico(int sise,int arr[]);

        void InsertarAtras(int element);
        void Insertar(int pos,int element);
        void Eliminar(int pos);
};

#endif // ARREGLO_DINAMICO_H
