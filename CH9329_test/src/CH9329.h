//#ifdef CH9329_H_INCLUDE
//#define CH9329_H_INCLUDE
#include <Arduino.h>

class CH9329 {
    public:
    private:
        Stream *serial;
        
        struct DATA_FORMAT {
            uint16_t head;//frameheader
            uint8_t addr;//address
            uint8_t cmd;//command
            uint8_t len;//datalength
            uint8_t* data;//data
            uint8_t sum;//check_sum
        };
}

/*#endif*/;