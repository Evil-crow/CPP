#ifndef _MAT_H
#define _MAT_H

#include <iostream>
#include <string>

class mat {
public:
    mat(void) {
        std::cout << "mat constructor" << std::endl;
    }
    ~mat(void) {
        std::cout << "mat destructor" << std::endl;
    }
    virtual void print(void) {
        std::cout << "This is mat print" << std::endl;
    }
protected:

};


class book : public mat {
public:
    book(std::string _title, std::string _author) : title(_title), author(_author) {
        std::cout << "this is book constuctor" << std::endl;
    }
    ~book(void) {
        std::cout << "this is book destructor" << std::endl;
    }
    virtual void print(void) {
        std::cout << "this is book data: "
                << "title: " << title
                << "author" << author
                << std::endl;
    }
protected:
    std::string title;
    std::string author;
};

class audioBook : public book {
public:
    audioBook(std::string _title, std::string _author, std::string _description) : book(_title, _author) {
        std::cout << "this is audiobook constructor" << std::endl;
        description = _description;
    }
    ~audioBook(void) {
        std::cout << "this is audiobook descructor" << std::endl;
    }
    virtual void print(void) {
        std::cout << "this is audiobook print: "
                << "title: " << title
                << "author: " << author
                << "description: " << description
                << std::endl;
    }
protected:
    std::string description;
};

void print(mat &test)
{
    std::cout << "this is an global func_print: " << std::endl;

    test.print();
}

#endif
