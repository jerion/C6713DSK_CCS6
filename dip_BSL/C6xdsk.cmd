/*C6xdsk.cmd Generic Linker command file,for C6713DSK Version*/

MEMORY
{
    VECS:     org = 0x00000000, len = 0x00000220
    IRAM:     org = 0x00000220, len = 0x0002FDE0 /*internal memory*/ 
    SDRAM:    org = 0x80000000, len = 0x01000000 /*external memory*/ 
    FLASH:    org = 0x90000000, len = 0x00080000 /*flash memory*/
}
SECTIONS
{                
    vectors    :> VECS
    .text      :> IRAM
    .bss       :> IRAM
    .cinit     :> IRAM
    .stack     :> IRAM
    .sysmem    :> SDRAM
    .const     :> IRAM
    .switch    :> IRAM
    .far       :> IRAM
    .cio       :> SDRAM   
}
