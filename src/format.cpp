#include "format.h"
#include <string>

using std::string;
using std::to_string;

// DONE: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long seconds) {
  float hh = seconds / 3600.0;
  float mm = (hh - (int)hh) * 60;
  float ss = (mm - (int)mm) * 60;
  string h_string = to_string((int)hh);
  string m_string = to_string((int)mm);
  string s_string = to_string((int)ss);

  return string(2 - h_string.length(), '0') + h_string + ":" +
         string(2 - m_string.length(), '0') + m_string + ":" +
         string(2 - s_string.length(), '0') + s_string;
}
