/* f_0x10014f90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10014f90(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd8(self + 0x325u);
    t2 = rd8(self + 0x327u);
    if ((int32_t)(rd8(self + 0x326u) + (uint8_t)rd32(sp0 + 6u)) <= 255)
    {
        eax = rd8(self + 0x326u) + (uint8_t)rd32(sp0 + 6u);
        edx = rd8(self + 0x324u);
        ebx = rd8(self + 0x326u);
        loc_8 = t1;
        loc_4 = t2;
    }
    else
    {
        edx = rd8(self + 0x324u);
        ebx = rd8(self + 0x326u);
        loc_8 = t1;
        loc_4 = t2;
        eax = 0xffu;
    }
    t3 = loc_8 + (uint8_t)rd32(sp0 + 5u);
    if ((int32_t)(loc_8 + (uint8_t)rd32(sp0 + 5u)) <= 255)
    {
        loc_8 = t3;
        ebx = (ebx & 0xffffff00u) | (uint8_t)loc_8;
    }
    else
    {
        ebx = 0xffu;
    }
    if ((int32_t)(edx + (uint8_t)arg1) <= 255)
    {
        edx = edx + (uint8_t)arg1;
    }
    else
    {
        edx = 0xffu;
    }
    wr8(self + 0x326u, (uint8_t)eax);
    wr8(self + 0x325u, (uint8_t)ebx);
    wr8(self + 0x324u, (uint8_t)edx);
    wr8(self + 0x327u, (uint8_t)loc_4);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10014f90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10014f90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
