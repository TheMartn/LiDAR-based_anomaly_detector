

#include <string>

#include "scanner/IScanner.hpp"
#include "Point.hpp"

// class IScanner {
//    public:
//     /**
//      * Inicialización del escaner
//      * @return Se devolverá true si se ha establecido el escaner correctamente
//      */
//     virtual bool initScanner() = 0;

//     /**
//      * Inicialización del escaner para leer datos de un archivo
//      * @param file Archivo contenedor de datos
//      * @return Se devolverá true si se ha establecido el escaner correctamente
//      */
//     virtual bool initScanner(std::string file) = 0;

//     /**
//      * Establece la función especificada como función de callback a la que se llamará cada vez
//      que
//      * se escanee un nuevo punto
//      * @param func Función de callback a ser llamada por el sensor
//      * @return Se devolverá true si se ha establecido el callback correctamente
//      */
//     virtual bool setCallback(void func(Point p)) = 0;

//     /**
//      * Finaliza el escaner
//      */
//     virtual void closeScanner() = 0;
// };

class ScannerFile : public IScanner {
   public:
    /**
     * Inicialización del escaner
     * @return Se devolverá true si se ha establecido el escaner correctamente
     */
    bool initScanner() {
    }

    /**
     * Inicialización del escaner para leer datos de un archivo
     * @param file Archivo contenedor de datos
     * @return Se devolverá true si se ha establecido el escaner correctamente
     */
    bool initScanner(std::string file) {
    }

    /**
     * Establece la función especificada como función de callback a la que se llamará cada
     vez que
     * se escanee un nuevo punto
     * @param func Función de callback a ser llamada por el sensor
     * @return Se devolverá true si se ha establecido el callback correctamente
     */
    bool setCallback(void func(Point p)) {
    }

    /**
     * Finaliza el escaner
     */
    void closeScanner() {
    }

   private:
    std::string filename;  // Path del archivo del que se obtendrán los puntos
	
}