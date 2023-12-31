#include <iostream>
#include <string>
#include <fstream>

/*
- `"DEBUG"` level: Debug messages contain contextual information. They are mostly used for problem diagnosis.
  - Example: "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
- `"INFO"` level: These messages contain extensive information. They are helpful for tracing program execution in a production environment.
  - Example: "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
- `"WARNING"` level: Warning messages indicate a potential issue in the system. However, it can be handled or ignored.
  - Example: "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
- `"ERROR"` level: These messages indicate an unrecoverable error has occurred. This is usually a critical issue that requires manual intervention.
  - Example: "This is unacceptable! I want to speak to the manager now."
*/

class Karen
{
private:
    void DEBUG(void);
    void INFO(void);
    void WARNING(void);
    void ERROR(void);

public:
    Karen(void);
    ~Karen(void);
    void complain(std::string level);
    void getComplain(int level);
};
