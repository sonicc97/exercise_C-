#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <ctime>

using namespace std;



int main() {


time_t timestamp = time(NULL);
struct tm datetime = *localtime(&timestamp);

char output[50];

strftime(output, 50, "%B %e, %Y", &datetime);
cout << output << "\n";

strftime(output, 50, "%I:%M:%S %p", &datetime);
cout << output << "\n";


strftime(output, 50, "%m/%d/%y", &datetime);
cout << output << "\n";

strftime(output, 50, "%a %b %e %H:%M:%S %Y", &datetime);
cout << output << "\n";

---------------------------------------------------------------------------

time_t timestamp = time(&timestamp);
struct tm datetime = *localtime(&timestamp);

cout << datetime.tm_hour;

---------------------------------------------------------------------------

  struct tm datetime;
  time_t timestamp;

  datetime.tm_year = 2024 - 1900;
  datetime.tm_mon = 12 - 1;
  datetime.tm_mday = 17;
  datetime.tm_hour = 12;
  datetime.tm_min = 30;
  datetime.tm_sec = 1;
  datetime.tm_hour = datetime.tm_min = 0; datetime.tm_sec = 0;
  datetime.tm_isdst = -1;

  string weekdays[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

  cout << "The date is on"  << weekdays[datetime.tm_wday]

  timestamp = mktime(&datetime);

  cout << ctime(&timestamp);

}




