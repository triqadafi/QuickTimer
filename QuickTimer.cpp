
#include "QuickTimer.h"

// QuickTimer::QuickTimer(unsigned long(*millis)(void)){
QuickTimer::QuickTimer(){
  // QSI_millis = millis;
}

void QuickTimer::start(unsigned long millis_duration){
  QT_millis_start = millis();
  QT_millis_duration = millis_duration;

}
void QuickTimer::loop(){
  // QT_millis_elapsed = QSI_millis() - QT_millis_start;
  QT_millis_elapsed = millis() - QT_millis_start;

}

double QuickTimer::getPercent(){
  if(QT_millis_duration > 0)
    return min((double) QT_millis_elapsed / (double) QT_millis_duration * 100.0, 100.0);
  else
    return 0;
}

void QuickTimer::reset(){
  QT_millis_start = 0;
  QT_millis_duration = 0;
}