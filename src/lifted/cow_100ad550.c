/* f_0x100ad550 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100ad550(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;

    if (rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
        if (rd32(eax + 0x120u) >> 9u & 1u)
        {
            if (rd32(eax + 0xa0u) != 0u)
            {
                ecx = rd32(eax + 0xa0u);
                t1 = COW_IMG(0x1035cee0u) + rd32(COW_IMG(0x1048990cu)) * 0x10u;
                g->edx = t1;
                t2 = rd32(eax + 0x16cu);
                t3 = rd32(eax + 0x170u);
                g->esp = sp0 - 0xcu;
                t4 = cow_thiscall(g, COW_IMG(0x10083320u), ecx, 0);
                t5 = g->edx;
                t6 = (uint32_t)(int8_t)rd8(COW_IMG(0x10487e48u));
                t7 = (uint32_t)(int8_t)rd8(COW_IMG(0x10482f18u));
                t8 = COW_IMG(0x1035af70u) + t2 * 0x10u;
                t9 = COW_IMG(0x1035af70u) + t3 * 0x10u;
                g->esp = sp0 - 0x1cu;
                cow_cdecl(g, COW_IMG(0x100e84c0u), 2, COW_IMG(0x1035d018u), t9);
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ad550(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100ad550(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
