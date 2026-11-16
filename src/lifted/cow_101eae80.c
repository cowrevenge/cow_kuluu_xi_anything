/* f_0x101eae80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_101eae80(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->eax = arg3;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x100e7740u), 1, arg3);
    if ((int16_t)t1 >= 1)
    {
        eax = (uint32_t)(int16_t)t1;
        if ((int32_t)eax <= 14)
        {
            t2 = rd32(eax * 4u + rd32(rd32(self + 0x8cu)) - 4u);
            g->esp = sp0 - 4u;
            cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, rd32(rd32(self + 0x8cu)), 4, 2u, 0xeu, t2, 0x80808080u);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101eae80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101eae80(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
