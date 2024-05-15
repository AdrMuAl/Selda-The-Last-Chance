
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Tile {  // basicamente es el nodo
    char symbol;// esto es solo para ver en la terminal lo que esta pasando
    string imageAddress;
    bool isPassable;  // atributo de si se puede caminar o no
    Tile(char s = ' ', string addr = "", bool passable = true)
            : symbol(s), imageAddress(addr), isPassable(passable) {}
};

class Map {
private:
    Tile** map;  // arreglo dinámico que representa el mapa
    int rows;
    int cols;
    Tile tileTypes[10];  // Arreglo que tiene los tipos de tiles

public:
    Map() : rows(0), cols(0), map(nullptr) {
        initializeTileTypes();
    }

    ~Map() {
        if (map) {
            for (int i = 0; i < rows; i++) {
                delete[] map[i];
            }
            delete[] map;
        }
    }

    void initializeTileTypes() {
        //se pued pasar
        tileTypes[0] = Tile(' ', "path_to_image_for_0", true);
        tileTypes[1] = Tile(' ', "path_to_image_for_1", true);
        tileTypes[2] = Tile(' ', "path_to_image_for_2", true);
        tileTypes[3] = Tile(' ', "path_to_image_for_3", true);
        tileTypes[4] = Tile(' ', "path_to_image_for_4", true);
        //No se puede pasar
        tileTypes[5] = Tile('A', "path_to_image_for_5", false);
        tileTypes[6] = Tile('B', "path_to_image_for_6", false);
        tileTypes[7] = Tile('C', "path_to_image_for_7", false);
        tileTypes[8] = Tile('D', "path_to_image_for_8", false);
        tileTypes[9] = Tile('E', "path_to_image_for_9", false);
    }

    void loadFromFile(const string& filename) {
        ifstream file(filename);
        if (!file.is_open()) {
            cerr << "Failed to open file." << endl;
            return;
        }
        //logica de formacion del mapa
        file >> rows >> cols;
        file.ignore();

        map = new Tile*[rows];
        for (int i = 0; i < rows; i++) {
            map[i] = new Tile[cols];
            for (int j = 0; j < cols; j++) {
                char value;
                if (!(file.get(value))) {
                    cerr << "Error de formato en la fila " << i << ", columna " << j << endl;
                    return;
                }
                int index = (value >= '0' && value <= '9') ? value - '0' : -1;
                if (index == -1) {
                    cerr << "Valor fuera de rango en la fila " << i << ", columna " << j << endl;
                    continue;
                }
                map[i][j] = tileTypes[index];
            }
            file.ignore();
        }

        file.close();
    }

    void printMap() {  // para ver en la terminal el mapa
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << map[i][j].symbol;
            }
            cout << endl;
        }
    }
};

// uso:
/*
int main() {
    Map dungeonMap;
    dungeonMap.loadFromFile("C:\\Users\\XPC\\Desktop\\TEC\\DatosII\\Poyectos\\probando\\map.txt");// por alguna razon con la relativa no funciona
    dungeonMap.printMap();

    return 0;
}
*/