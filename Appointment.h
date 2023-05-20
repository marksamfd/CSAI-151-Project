#pragma once
#include "Event.h"
class Appointment :
    public Event
{
private:
    string type = "Appintment";

public:
    string getEventString() override;

};

