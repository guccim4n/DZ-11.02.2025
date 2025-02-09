#include <iostream>
using namespace std;

class Person
{
private:
    int sizeAbility = 4;
    string* Abilities = new string[sizeAbility]{ "Berserker's Call", "Battle Hunger", "Counter Helix", "Culling Blade" };
    int* AbilityDamag = new int[sizeAbility] {0, 25, 170, 475};
    string Name;
    string Class;
    int Intelligence;
    int Strength;
    int Agility;
public:

    Person(string Name, string Class, int Intelligence, int Strength, int Agility)
    {
        this->Name = Name;
        this->Class = Class;
        this->Intelligence = Intelligence;
        this->Strength = Strength;
        this->Agility = Agility;
    }
    void random()
    {
        cout << "Имя: " << Name
            << "\nКласс: " << Class
            << "\nИнтеллект: " << Intelligence
            << "\nСила: " << Strength
            << "\nЛовкость: " << Agility << endl;
        int random = rand() % 3;
        if (random == 0) {
            cout << "Рандомная способность: " << Abilities[random] << " Урон: " << AbilityDamag[0] << endl;;
        }
        else if (random == 1) {
            cout << "Рандомная способность: " << Abilities[random] << " Урон: " << AbilityDamag[1] << endl;;
        }
        else if (random == 2) {
            cout << "Рандомная способность: " << Abilities[random] << " Урон: " << AbilityDamag[2] << endl;;
        }
        else if (random == 3) {
            cout << "Рандомная способность: " << Abilities[random] << " Урон: " << AbilityDamag[3] << endl;;
        }

    }

    ~Person()
    {
        delete[] Abilities;
        delete[] AbilityDamag;
    }

    void setName(string NewName) { this->Name = NewName; }
    string getName() { return this->Name; }

};
int main()
{
    setlocale(LC_ALL, "ru");
    Person Axe("Axe", " Strong", 18, 25, 20);
    Axe.random();

    Axe.setName("Axe attack  'bzin'");
    cout << "Имя: " << Axe.getName() << endl;
}
