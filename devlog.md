# This is my devlog for the C++ calculator app

    Im starting from scratch and have no idea how to do anything in c++.
    I am hoping to run into many problems and be able to solve them while 
    incrementally making the application better. The goal is not to make some 
    large project quickly, but rather make incremental changes and get to a better
    app as the days go on. I am using this journal to not only document progress
    but to force myself to write issues and explain them as a way to get better in
    the language. 

## 12/10/2022

    I know that the app will have to have some functions based off of the operations 
    in a standard calculator. I will start by making functions that I know can be reused
    and try to make this an Object Oriented style of programming. This will mean design
    patterns and modular code is the focus. Today I use the command pattern. Because this 
    can be used as an interface for other functions once I make one function. 

    I learned about the *virtual* keyword. Not sure what the standard is for the language.
    Virtual can be used to show that a function is overrideable... should I do this or use 
    the first way that I have learned to do polymorphism, idk.

    Then answer is, since there are no such things as interfaces in C++, I could make interface
    by creating an abstract class that has all pure virtual methods. 