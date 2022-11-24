
/*
 * Test Robot motor & sensor driver
 * your.name@here.please
 */

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

/*
 * Global variables
 */
volatile uint8_t p1out = 0;
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
 * @return Always 0
 */
int main(void)
{
	// Merci d'écrire au moins 2 tests pour vérifier vos fonctions 
	// par example: 
//	p1out = 0xA0;
//	printf("speed: %hhu\n", wheel_speed_get());

//  wheel_speed_set(7);
//	printf("speed: %hhu\n", wheel_speed_get());

	return 0;
}


