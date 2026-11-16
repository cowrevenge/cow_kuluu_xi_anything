/* f_0x1008b410 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1008b410(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    t1 = rd32(self + 0x13cu);
    if (!(t1 >> 0x16u & 1u))
    {
        eax = t1;
    }
    else
    {
        eax = t1;
        ecx = (self & 0xffffff00u) | rd32(self + 0x74u) == (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
        edx = (t1 >> 0x16u & 0xffffff00u) | (t1 >> 0x16u & 1u);
        if ((uint8_t)edx != (eax >> 0x15u & 1u))
        {
            t2 = (eax & 0xffbfffffu) | 0x200000u;
            wr32(self + 0x13cu, t2);
            if ((uint8_t)ecx == 0u)
            {
                eax = t2;
            }
            else
            {
                g->esp = sp0 - 8u;
                t3 = cow_stdcall(g, COW_IMG(0x100a2720u), 0);
                eax = t3;
            }
        }
    }
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1008b410(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1008b410(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
