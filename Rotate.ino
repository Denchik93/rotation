// ConstantSpeed.pde
// -*- mode: C++ -*-
//
// Shows how to run AccelStepper in the simplest,
// fixed speed mode with no accelerations
/// \author  Mike McCauley (mikem@open.com.au)
// Copyright (C) 2009 Mike McCauley
// $Id: HRFMessage.h,v 1.1 2009/08/15 05:32:58 mikem Exp mikem $

#include <AccelStepper.h>

AccelStepper stepper; // Defaults to 4 pins on 2, 3, 4, 5

void setup()
{  
 stepper.setMaxSpeed(300); //устанавливаем максимальную скорость вращения ротора двигателя (шагов/секунду)

stepper.setAcceleration(13000); //устанавливаем ускорение (шагов/секунду^2)
}

void loop()
{  if(stepper.distanceToGo()==0){ //проверка, отработал ли двигатель предыдущее движение

stepper.move(1600); //устанавливает следующее перемещение на 1600 шагов (если dir равен -1 будет перемещаться -1600 -> противоположное направление)

 delay(1000); //задержка на 1 секунду

}

stepper.run(); //запуск шагового двигателя. Эта строка повторяется вновь и вновь для
}
