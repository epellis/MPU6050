#include <wiringPiI2C.h>
#include <stdint.h>

#define MPU_ID      0x60
#define WHOAMI      0x75

/* Static functions */
uint16_t getID();


using namespace std;

int main() {
    int i2c_fd;

    /* Get a new fd for the MPU6050 on i2c bus */
    i2c_fd = wiringPiI2CSetup(MPU_ID);

    cout << 
}