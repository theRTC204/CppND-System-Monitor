#ifndef PROCESSOR_H
#define PROCESSOR_H

class Processor {
 public:
  float Utilization();  // DONE: See src/processor.cpp

  // DONE: Declare any necessary private members
 private:
  float PrevIdle{0};
  float Idle{0};
  float PrevActive{0};
  float Active{0};
  float PrevTotal{0};
  float Total{0};
};

#endif