/* f_0x101d6190 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101d6190(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) == 0u)
    {
        eax = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
        edx = in_edx;
    }
    else
    {
        eax = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
        ecx = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
        t1 = (eax & 0xffffff00u) | rd8(rd32(COW_IMG(0x106631dcu)) + 0x15u);
        g->eax = t1;
        g->edx = rd32(COW_IMG(0x106631dcu));
        t2 = rd32(COW_IMG(0x106631dcu));
        g->esp = sp0;
        t3 = cow_thiscall(g, COW_IMG(0x1008aec0u), ecx, 1, t1);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d6190(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d6190(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
