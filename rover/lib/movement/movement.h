#ifndef MOVEMENT_H
#define MOVEMENT_H
#include "pico/stdlib.h"
#include "hardware/pwm.h"

#define GPIO_HIGH 1
#define GPIO_LOW  0

// L298N INx PORTS
#define IN1 5
#define IN2 6
#define IN3 7
#define IN4 8

// L298N ATV PORT (duty cycle determines the motor speed)
#define PWM_SPEED_PIN 9
#define PWM_FREQUENCY 100

/*
 * [NAME]:        Init
 * [FUNCTION]:    movement_init()
 * [PARAMETERS]:  void
 * [DESCRIPTION]: Initialize every necessary pin for the L298N usage
 */
void movement_init();
/*
 * [NAME]:        Forward
 * [FUNCTION]:    movement_forward()
 * [PARAMETERS]:  void
 * [DESCRIPTION]: Set the necessary combination of L298N INx ports to make the rover move forward
 */
void movement_forward();
/*
 * [NAME]:        Rotate Left
 * [FUNCTION]:    movement_rotate_left()
 * [PARAMETERS]:  void
 * [DESCRIPTION]: Set the necessary combination of L298N INx ports to make the rover rotate left
 */
void movement_rotate_left();
/*
 * [NAME]:        Rotate Left
 * [FUNCTION]:    movement_rotate_right()
 * [PARAMETERS]:  void
 * [DESCRIPTION]: Set the necessary combination of L298N INx ports to make the rover rotate right
 */
void movement_rotate_right();
/*
 * [NAME]:        Stop
 * [FUNCTION]:    movement_stop()
 * [PARAMETERS]:  void
 * [DESCRIPTION]: Set the necessary combination of L298N INx ports to make the rover stop (stand still)
 */
void movement_stop();
/*
 * [NAME]:        Set Speed
 * [FUNCTION]:    movement_set_speed()
 * [PARAMETERS]:  void
 * [DESCRIPTION]: Set the PWM Duty Cycle to control the L298N speed output, the duty cycle % is equal to the speed %
 */
void movement_set_speed(uint speed);

#endif //MOVEMENT_H
