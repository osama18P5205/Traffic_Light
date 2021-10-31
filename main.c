#include <stdint.h>
#include "tm4c123gh6pm.h"
#include "bitwise_operation.h"

int main()
{
  set_bit(SYSCTL_RCGCGPIO_R,5)
  //SYSCTL_RCGCGPIO_R |= 0x00000020;

  while((SYSCTL_PRGPIO_R&0x00000020) == 0){};
  
  GPIO_PORTF_LOCK_R = 0x4C4F434B;
  GPIO_PORTF_CR_R = 0x1F;
  GPIO_PORTF_DIR_R = 0x0E;
  GPIO_PORTF_PUR_R = 0x11;
  GPIO_PORTF_DEN_R = 0x1F;
  GPIO_PORTF_DATA_R = 0x0E;

  return 0;
}
