#pragma once
class Motionsensor
{

private:
    bool status;
public:
    Motionsensor();
    ~Motionsensor();
    bool change_status();
    void check_status();
};

