#include <stdio.h>
#include <driver/gpio.h>
#include <unistd.h>

#define GPIO_LED        2

void app_main(void)
{
    // Configurar el gpio
    gpio_set_direction(GPIO_LED,GPIO_MODE_OUTPUT);

    int estado_led = 0;

    while(1){

        if(estado_led == 0) estado_led = 1;
        else estado_led = 0;
        gpio_set_level(GPIO_LED,estado_led);
        sleep(1);

    }

}