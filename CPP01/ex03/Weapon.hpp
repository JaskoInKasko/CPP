#ifndef WEAPON_H
# define WEAPON_H
# include <iostream>

using std::string;

class Weapon {
    private:
        string type;
    
    public:
        Weapon(string weaponType);
        const string& getType() const;
        void setType(string newType);
};

#endif