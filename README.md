All projects are implemented in **C++98**.

## CPP00 – C++ Fundamentals

### ex00 – Megaphone

**What the program does**

A command-line application that converts all lowercase characters in the provided arguments to uppercase and displays the result. If no arguments are provided, a default message is displayed.

**How to execute**

```bash
cd CPP00/ex00
make
./megaphone "hello world"
```

### ex01 – My Awesome PhoneBook

**What the program does**

A simple command-line phonebook application that allows users to add, search, and display contacts. It stores up to eight contacts and automatically replaces the oldest contact when the storage limit is reached.

Each contact contains a first name, last name, nickname, phone number, and darkest secret.

**How to execute**

```bash
cd CPP00/ex01
make
./phonebook
```

## CPP01 – Memory Management and References

### ex00 – BraiiiiiiinnnzzzZ

**What the program does**

A program that creates and manages Zombie objects using both stack and heap allocation. Each zombie has a name and displays a message when announcing itself.

**How to execute**

```bash
cd CPP01/ex00
make
./BraiiiiiiinnnzzzZ
```

### ex01 – Moar brainz!

**What the program does**

A program that dynamically creates a horde of zombies. Each zombie receives a name and announces itself. The dynamically allocated memory is released after use.

**How to execute**

```bash
cd CPP01/ex01
make
./Moar_brainz
```

### ex02 – HI THIS IS BRAIN

**What the program does**

A demonstration of variables, pointers, and references. The program displays the memory addresses and values of a string accessed through different methods.

**How to execute**

```bash
cd CPP01/ex02
make
./HI_THIS_IS_BRAIN
```

### ex03 – Unnecessary violence

**What the program does**

A simulation involving two human characters, `HumanA` and `HumanB`, who can attack using weapons. The program demonstrates two different approaches to storing weapon references: references and pointers.

**How to execute**

```bash
cd CPP01/ex03
make
./Unnecessary_violence
```

### ex04 – Sed is for losers

**What the program does**

A command-line file replacement utility that searches for a specified string in a file and replaces all occurrences with another string. The modified content is saved in a new file with the `.replace` extension, leaving the original file unchanged.

**How to execute**

```bash
cd CPP01/ex04
make
./Sed_is_for_losers <filename> <search_string> <replacement_string>
```

Example:

```bash
./Sed_is_for_losers test.txt hello hi
```

### ex05 – Harl 2.0

**What the program does**

A program that simulates a character named Harl, who can display complaints at four different levels: `DEBUG`, `INFO`, `WARNING`, and `ERROR`. Each level triggers a corresponding message.

**How to execute**

```bash
cd CPP01/ex05
make
./Harl
```

### ex06 – Harl filter

**What the program does**

An extension of the Harl complaint system that filters messages based on a specified complaint level. It displays the selected level and all higher-priority levels.

**How to execute**

```bash
cd CPP01/ex06
make
./harlfilter <level>
```

Available levels:

- `DEBUG`
- `INFO`
- `WARNING`
- `ERROR`

Example:

```bash
./harlfilter WARNING
```

---

## CPP02 – Fixed-Point Numbers and Operator Overloading

### ex00 – My First Class in Orthodox Canonical Form

**What the program does**

An implementation of a `Fixed` class that stores fixed-point numbers using an integer as its internal representation. The class provides constructors, copying, assignment, and access to its raw value.

**How to execute**

```bash
cd CPP02/ex00
make
./Fixed
```

### ex01 – Towards a more useful fixed-point number class

**What the program does**

An extension of the `Fixed` class that supports conversions between integers, floating-point numbers, and fixed-point values. It also provides formatted output through the stream insertion operator.

**How to execute**

```bash
cd CPP02/ex01
make
./Fixed
```

### ex02 – Now we're talking

**What the program does**

An extended fixed-point number implementation supporting arithmetic operations, comparison operators, and prefix/postfix increment and decrement. It also provides functions for retrieving minimum and maximum values.

**How to execute**

```bash
cd CPP02/ex02
make
./Fixed
```

## CPP03 – Inheritance

### ex00 – Aaaaand... OPEN!

**What the program does**

An implementation of a combat robot called `ClapTrap`. The robot has hit points, energy points, and attack damage. It can attack opponents, take damage, and repair itself while managing its available resources.

**How to execute**

```bash
cd CPP03/ex00
make
./Aaaaand...OPEN!
```

### ex01 – Serena, my love!

**What the program does**

An extension of the ClapTrap system introducing `ScavTrap`, a specialized combat robot with different statistics and an additional Gate Keeper mode activated through the `guardGate()` function.

**How to execute**

```bash
cd CPP03/ex01
make
./Serena,_my_love!
```

### ex02 – Repetitive work

**What the program does**

Introduces `FragTrap`, another specialized combat robot derived from `ClapTrap`. It has its own combat statistics and provides an additional `highFivesGuys()` function.

**How to execute**

```bash
cd CPP03/ex02
make
./Repetitive_work
```

### ex03 – Now it's weird!

**What the program does**

An implementation of `DiamondTrap`, a combat robot that combines the functionality of `ScavTrap` and `FragTrap` through multiple inheritance. It also provides a `whoAmI()` function to display its identity and associated ClapTrap name.

**How to execute**

```bash
cd CPP03/ex03
make
./Now_it’s_weird!
```

---

## CPP04 – Polymorphism, Abstract Classes, and Interfaces

### ex00 – Polymorphism

**What the program does**

A polymorphic animal system consisting of a base `Animal` class and two derived classes, `Dog` and `Cat`. Each derived class provides its own sound implementation, which is called dynamically through base-class pointers.

**How to execute**

```bash
cd CPP04/ex00
make
./Polymorphism
```

### ex01 – I don't want to set the world on fire

**What the program does**

An extension of the animal system in which `Dog` and `Cat` objects contain dynamically allocated `Brain` objects. Each Brain can store up to 100 ideas. The program also demonstrates independent object copying and memory management.

**How to execute**

```bash
cd CPP04/ex01
make
./PolymorphismBrain
```

### ex02 – Abstract class

**What the program does**

An updated version of the animal hierarchy using an abstract `AAnimal` base class. Derived classes such as `Dog` and `Cat` provide their own implementations of the required virtual functions.

**How to execute**

```bash
cd CPP04/ex02
make
./Abstract_class
```

### ex03 – Interface & recap

**What the program does**

An implementation of a Materia system inspired by role-playing games. It includes different Materia types, characters with limited inventories, and a Materia source capable of learning and creating new Materia instances.

Characters can equip, unequip, and use Materia.

**How to execute**

```bash
cd CPP04/ex03
make
./Interface
```

---

## CPP05 – Exceptions and Error Handling

### ex00 – Mommy, when I grow up, I want to be a bureaucrat!

**What the program does**

A bureaucratic system featuring a `Bureaucrat` class with a name and a grade ranging from 1 to 150. The program supports grade promotions and demotions while handling invalid grades through exceptions.

**How to execute**

```bash
cd CPP05/ex00
make
./Bureaucrat
```

### ex01 – Form up, maggots!

**What the program does**

An extension of the bureaucratic system introducing a `Form` class. Forms have specific grade requirements for signing and can only be signed by Bureaucrats with sufficient authority.

**How to execute**

```bash
cd CPP05/ex01
make
./Bureaucrat
```

### ex02 – No, you need form 28B, not 28C…

**What the program does**

Introduces three specialized form types:

- `ShrubberyCreationForm`: Creates a file containing an ASCII tree.
- `RobotomyRequestForm`: Simulates the robotomization of a specified target, with a 50% success probability.
- `PresidentialPardonForm`: Announces the presidential pardon of a specified target.

Each form has individual requirements for signing and execution.

**How to execute**

```bash
cd CPP05/ex02
make
./Bureaucrat
```

### ex03 – At least this beats coffee-making

**What the program does**

An extension of the form system introducing an `Intern` class. The Intern can create different form types based on their names, including shrubbery creation, robotomy requests, and presidential pardons.

**How to execute**

```bash
cd CPP05/ex03
make
./Bureaucrat
```

---

## CPP06 – C++ Casts and Type Conversions

### ex00 – Conversion of scalar types

**What the program does**

A scalar conversion utility that takes a string representation of a value and attempts to convert it into four different data types: `char`, `int`, `float`, and `double`.

The program also handles special values such as `nan`, `+inf`, and `-inf`, as well as values outside the representable ranges of the target types.

**How to execute**

```bash
cd CPP06/ex00
make
./convert <value>
```

Example:

```bash
./convert 42.5
```
