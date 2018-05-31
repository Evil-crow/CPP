#include <iostream>
#include <string>
#include "4.h"
using namespace std;

User_Profile::User_Profile(bool _mark, 
                        string _name,
                        unsigned long _log_in_times, 
                        unsigned long _guess_times,
                        unsigned long _guess_T_times,
                        int _level,
                        double _T_percent,
                        int _own_mark)
{
    mark = _mark;
    name = _name;
    log_in_times = _log_in_times;
    guess_times = _guess_times;
    guess_T_times = _guess_T_times;
    level = _level;
    T_percent = _T_percent;
    own_mark = User_Profile::user_count;

    User_Profile::user_count++;
}

bool User_Profile::operator==(User_Profile &up)
{
    if (this->mark == up.mark &&
        this->name == up.name &&
        this->log_in_times == up.log_in_times &&
        this->guess_times == up.guess_times &&
        this->guess_T_times == up.guess_T_times &&
        this->level == up.level &&
        this->T_percent == up.T_percent &&
        this->own_mark == up.own_mark
        )
        return true;
    return false;
}

bool User_Profile::operator!=(User_Profile &up)
{
    return (*this == up);
}

istream &operator >>(istream &input, User_Profile &up)
{
    input >> up.mark
        >> up.name
        >> up.log_in_times
        >> up.guess_times
        >> up.guess_T_times
        >> up.level
        >> up.T_percent;
    
    return input;
}

ostream &operator <<(ostream &output, User_Profile &up)
{
    output << (up.mark ? "ture" : "false")
        << up.name
        << up.log_in_times
        << up.guess_times
        << up.guess_T_times
        << up.level
        << up.T_percent;

    return output;
}

