#pragma once
class LightSensor{
private:
    int status;
public:
    LightSensor();
    ~LightSensor();
    void get_status(int counter, int arr[]);


};
