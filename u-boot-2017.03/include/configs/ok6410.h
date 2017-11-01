#ifndef OK6410_H_
#define OK6410_H_

#define CONFIG_SYS_UBOOT_BASE 0x500000
#define CONFIG_SYS_TEXT_BASE 0x500000
#define CONFIG_ENV_SIZE 0x1000
#define CONFIG_NR_DRAM_BANKS 2

#define CONFIG_SYS_MAXARGS 16
#define CONFIG_SYS_MAX_FLASH_BANKS 0x1000000

#define CONFIG_SYS_LOAD_ADDR 0x500000
#define CONFIG_SYS_CBSIZE 0x10000

#define CONFIG_ENV_IS_IN_FLASH

#define CONFIG_BAUDRATE 115200
#define CONFIG_SYS_MALLOC_LEN 0x200000

#define CONFIG_SYS_FLASH_BASE 0x7000000
#define CONFIG_ENV_OFFSET 0x10000
#define CONFIG_ENV_ADDR 0x30000

#define CONFIG_SYS_INIT_SP_ADDR 0x10000
#endif

