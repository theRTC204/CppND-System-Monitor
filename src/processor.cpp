#include "processor.h"
#include <string>
#include <vector>
#include "linux_parser.h"

using std::stof;
using std::string;
using std::vector;

// DONE: Return the aggregate CPU utilization
float Processor::Utilization() {
  float totald, idled;

  PrevIdle = Idle;
  PrevActive = Active;
  PrevTotal = Total;

  vector<string> u = LinuxParser::CpuUtilization();

  Active = stof(u[0]);
  Idle = stof(u[1]);
  Total = stof(u[2]);

  totald = Total - PrevTotal;
  idled = Idle - PrevIdle;

  return (totald - idled) / totald;
}