#include <iostream>
#include <errno.h>
#include <wiringPiI2C.h>

#define MPU_ADDRESS     0x68
#define WHOAMI          0x68

using namespace std;

int main()
{
   int fd, result;

   fd = wiringPiI2CSetup(MPU_ADDRESS);

   cout << "Init result: "<< fd << endl;

   cout << "Who Am I " << hex << wiringPiI2CReadReg16(fd, WHOAMI) << endl;
}
