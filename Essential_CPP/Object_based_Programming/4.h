#ifndef _4_H
#define _4_H
#include <string>
#include <iostream>
class User_Profile {
public:
    User_Profile();
    User_Profile(bool _mark = false, 
                std::string _name = "guest",
                unsigned long _log_in_times = 0, 
                unsigned long _guess_times = 0,
                unsigned long _guess_T_times = 0,
                int _level = 0,
                double _T_percent = 0.0,
                int _own_mark = User_Profile::user_count
                );
    
    friend std::istream &operator >>(std::istream &input, User_Profile &up);
    friend std::ostream &operator <<(std::ostream &output, User_Profile &up);
    bool operator ==(User_Profile &up);
    bool operator !=(User_Profile &up);
private:
    static int user_count;
    int own_mark;
    bool mark;
    std::string name;
    unsigned long log_in_times;
    unsigned long guess_times;
    unsigned long guess_T_times;
    int level;                     // 0, 1, 2, 3
    double T_percent;
};

int User_Profile::user_count = 0;

#endif