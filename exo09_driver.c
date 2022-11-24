
/*
 * Test Robot motor & sensor driver
 * your.name@here.please
 * TO COMPILE: gcc -g -Wall -Wextra exo09_driver.c -o exo09_driver
 */

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

/*
 * Global variables
 */
 /* p1out:
 *   BIT7-4: Speed,  default 0, [0..15)
 *   BIT3:   Direction right wheel, default 0, 0=Forward
 *   BIT2:   Motor right wheel, default 0, 1=On
 *   BIT1:   Direction left wheel, default 0, 0=Forward
 *   BIT0:   Motor left wheel, default 0, 1=On
 */
volatile uint8_t p1out = 0;

 /* p1in:
 *   BIT7-6: Not used (always read 0b00
 *   BIT5:   Optical sensor left, 1=obstacle near (< 2 cm)
 *   BIT4:   Optical sensor right, 1=obstacle near (< 2 cm)
 *   BIT3:   Switch sensor read right, 1=contact with obstacle
 *   BIT2:   Switch sensor front right, 1=contact with obstacle
 *   BIT1:   Switch sensor read left, 1=contact with obstacle
 *   BIT0:   Switch sensor front left, 1=contact with obstacle
 */

volatile uint8_t p1in = 0;


// Wheels selection 
typedef enum { Left_Wheel, Right_Wheel, Both_Wheels } Wheels_t;

// Motor direction
typedef enum { Forward, Backward } Direction_t;

// Optical sensors side
typedef enum { Left, Right } OpticalSensors_t;

// Switch sensors position
typedef enum 
{
	Front_Left,
	Front_Right,
	Rear_Left,
	Rear_Right
} SwitchSensors_t;


/*
 * Function prototypes (declaration)
 */
// p1out register
uint8_t wheel_speed_get(void);
void    wheel_speed_set(uint8_t speed);
bool    wheel_motor_get(Wheels_t wheel);
void    wheel_motor_set(Wheels_t wheel, bool on);
Direction_t wheel_direction_get(Wheels_t wheel);
void    wheel_direction_set(Wheels_t wheel, Direction_t dir);

// p1in register
bool    sensor_optical_get(OpticalSensors_t sensor);
bool    sensor_switch_get(SwitchSensors_t sensor);

/*
 * Test motor & sensor driver
  * 
 * 
 * 
 * @return Always 0
 */
int main(void)
{
	// Merci d'écrire au moins 2 tests pour vérifier vos fonctions 
	// par example: 
//	p1out = 0xA0;
//	printf("p1out: 0x%02X, speed: %hhu\n", p1out, wheel_speed_get());

//	p1out = 0x0F;
//  wheel_speed_set(7);
//	printf("p1out: 0x%02X, speed: %hhu\n", piout, wheel_speed_get());

	return 0;
}


