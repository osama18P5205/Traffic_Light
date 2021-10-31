# include "bitwise_operation.h"
# include "DIO.h"

void DIO.Init (int_8 port, int_8 pin, int_8 dir)
{

  set_bit(SYSCTL_RCGCGPIO_R, port)
    switch(port){
      case port PORTA:
        if (dir)
          set_bit(GPIO_PORTA_DIR_R, pin)
            else
              clear_bit(GPIO_PORTA_DIR_R, pin)
      case port PORTB:
        if (dir)
          set_bit(GPIO_PORTB_DIR_R, pin)
            else
              clear_bit(GPIO_PORTB_DIR_R, pin)
       case port PORTC:
        if (dir)
          set_bit(GPIO_PORTC_DIR_R, pin)
            else
              clear_bit(GPIO_PORTC_DIR_R, pin)  
       case port PORTD:
        if (dir)
          set_bit(GPIO_PORTD_DIR_R, pin)
            else
              clear_bit(GPIO_PORTD_DIR_R, pin)
        case port PORTE:
        if (dir)
          set_bit(GPIO_PORTE_DIR_R, pin)
            else
              clear_bit(GPIO_PORTE_DIR_R, pin)
        case port PORTF:
        if (dir)
          set_bit(GPIO_PORTF_DIR_R, pin)
            else
              clear_bit(GPIO_PORTF_DIR_R, pin)
    }

}