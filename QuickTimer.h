//
// QuickTimer Library by @triqadafi
// TQDF is a shorthand of triqadafi
// 2022 (C) www.triqada.fi
//

#include <Arduino.h>

#ifndef TQDF_QuickTimer_h
#define TQDF_QuickTimer_h

/**
 * @brief test coba coba tentang brief
 * 
 * dibawahnya ini harusnya comment
 * 
 */
class QuickTimer
{
  public:
    /**
     * @brief Construct a new TQDF_QuickTimer object
     * 
     */
    QuickTimer();
    // QuickTimer(unsigned long(*millis)(void));

    /**
     * @brief Menu idle state
     * 
     */
    void start(unsigned long millis_duration);
    void loop();
    double getPercent();
    void reset();

  private:
    unsigned long(*QSI_millis)(void);
    unsigned long QT_millis_start;
    unsigned long QT_millis_duration;
    unsigned long QT_millis_elapsed;
};
#endif