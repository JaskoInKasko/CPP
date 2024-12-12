#include <iostream>
#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

// int main() {
//     IMateriaSource* src = new MateriaSource();
//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());

//     ICharacter* me = new Character("me");

//     AMateria* tmp;
//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);

//     ICharacter* bob = new Character("bob");

//     me->use(0, *bob);
//     me->use(1, *bob);

//     delete bob;
//     delete me;
//     delete src;

//     return 0;
// }

void testEdgeCases() {
    // Create MateriaSource and learn Materias
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice()); // Should be fine (duplicates allowed)
    src->learnMateria(new Cure());
    src->learnMateria(new Ice()); // Should be ignored (exceeds capacity)

    // Test creating Materias
    AMateria* ice = src->createMateria("ice");
    AMateria* cure = src->createMateria("cure");
    AMateria* unknown = src->createMateria("fire"); // Should return nullptr
    if (!unknown)
        std::cout << "Unknown Materia type correctly returns nullptr." << std::endl;

    // Create Character and test inventory management
    ICharacter* me = new Character("me");

    // Test equipping Materias
    me->equip(ice);
    me->equip(cure);
    me->equip(src->createMateria("ice"));
    me->equip(src->createMateria("cure"));
    me->equip(src->createMateria("ice")); // Should be ignored (inventory full)

    // Test using Materias
    ICharacter* bob = new Character("bob");
    me->use(0, *bob); // Should print ice usage
    me->use(1, *bob); // Should print cure usage
    me->use(4, *bob); // Should do nothing (invalid index)

    // Test unequipping Materias
    me->unequip(1);
    me->use(1, *bob); // Should do nothing (unequipped slot)

    // Test deep copy of Character
    Character* copy = new Character(*dynamic_cast<Character*>(me));
    copy->use(0, *bob); // Should work independently
    copy->use(1, *bob); // Should do nothing (slot was empty in original)

    delete bob;
    delete me;
    delete copy;
    delete src;
}

void testDeepCopy() {
    Character original("Original");

    // Equip some Materias
    AMateria* ice = new Ice();
    AMateria* cure = new Cure();

    original.equip(ice);
    original.equip(cure);

    // Deep copy
    Character copy = original;

    // Unequip and delete Materias in the original
    original.unequip(0);
    original.unequip(1);

    // Test if the copy's Materias are intact
    copy.use(0, original);
    copy.use(1, original);
}


int main() {
    std::cout << "Running edge case tests..." << std::endl;
    testEdgeCases();
    // testDeepCopy();
    std::cout << "All tests completed!" << std::endl;
    return 0;
}
