/* f_1031eefa - it returns the constant 1

   The whole original is `push 1 / pop eax / ret`. `push 1` / `pop eax` is how MSVC loads a return value when `mov eax, imm32` would clobber
the flags on that path; the function is nothing but that value.

   Name: `cow_return_1` (guess). vtable 0x1034a45c slot 0/2 - a virtual method
*/
#include "cow.h"

uint32_t cow_return_1(void);

/* COW_ADAPTER BEGIN - thiscall: the object is in ecx. The original is `push 1 / pop eax / ret`; its ret pops 0
   bytes above the return address and leaves eax the constant 1. The push leaves the value behind in memory
   below the stack pointer even though the pop restores esp, so the adapter writes the same trace - cowdiff
   compares guest memory, not just registers. The readability gate skips this block. */
void cow_adapter_1031eefa(Guest* g)
{
    wr32(g->esp - 4, 1u); /* the push 1, visible in memory after the pop restores esp */
    g->eax = cow_return_1();
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
