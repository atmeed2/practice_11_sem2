#include <iostream>

// Задача 1
class Animal {
protected:
    std::string name;
    std::string feature;
    std::string sound;
public:
    // Конструктор
    Animal(std::string name): name(name), feature(""), sound("") {}

    // Методы
    void get_sound() {
        std::cout << sound << std::endl;
    }

    void get_action() {
        std::cout << feature << std::endl;
    }

};

// Задача 2
class Farm_Animal: public Animal {
    private:
        std::string resourse [3] = {"Animal", "Животное 2", " Животное 3"};

    public:
        // Наследование конструктора
        Farm_Animal(std::string name): Animal(name) {}

        void get_resourse() {
            int num;
            for( int i = 0; i < 3-1; i++) {
                if (resourse[i] == name) {
                    num++;
                }
            }
            //Проверка
            if (num > 0) {
                std::cout << "От объекта name получен res"<<std::endl;
            } else {
                std::cout << "Получение ресурса невозможно"<<std::endl;
            }

        }
};

class Cow: Farm_Animal {
    private:

    public:
        Cow(std::string name): Farm_Animal(name) {}

        void get_action(std::string object) {
            std::cout << "Взаимодействие " << name << " с " << object << std::endl;
        }
};

class Sheep: Farm_Animal {
private:

public:
    Sheep(std::string name): Farm_Animal(name) {}

    void get_action(std::string object) {
        std::cout << "Взаимодействие " << name << " с " << object << std::endl;
    }
};


class Pig: Farm_Animal {
private:

public:
    Pig(std::string name): Farm_Animal(name) {}

    void get_action(std::string object) {
        std::cout << "Взаимодействие " << name << " с " << object << std::endl;
    }
};

class Horse: Farm_Animal {
private:

public:
    Horse(std::string name): Farm_Animal(name) {}

    void get_action(std::string object) {
        std::cout << "Взаимодействие " << name << " с " << object << std::endl;
    }
};







int main() {


    return 0;
}