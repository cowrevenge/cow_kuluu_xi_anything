/* f_0x1020bf90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1020bf90(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x1020be90u), self, 0);
    t2 = g->edx;
    t3 = cow_call_regs(g, COW_IMG(0x101f6700u), t1, self, t2, 0, 1, 0xfu);
    t4 = g->edx;
    wr16(self + 0x16u, 7u);
    wr32(self + 0x30u, COW_IMG(0x103859a4u));
    wr16(self + 0x26u, 0x10u);
    wr8(self + 0x2cu, 4u);
    wr8(self + 0x2du, 4u);
    g->edx = t4;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385a28u), 1u, 0u);
    t5 = g->edx;
    if (rd32(COW_IMG(0x1057847cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x1057847cu));
        edx = t5;
    }
    else
    {
        eax = rd32(COW_IMG(0x1057847cu));
        edx = t5;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t6 = cow_thiscall(g, COW_IMG(0x1020c440u), self, 0);
        t7 = g->ecx;
        t8 = g->edx;
        if ((uint8_t)t6 == 0u)
        {
            eax = t6;
            ecx = t7;
            edx = t8;
            loc_8 = 0u;
        }
        else
        {
            eax = t6;
            ecx = t7;
            edx = t8;
            loc_8 = 0xbdu;
        }
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t9 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, loc_8);
        t10 = g->edx;
        g->edx = t10;
        t11 = cow_thiscall(g, COW_IMG(0x10150cc0u), rd32(COW_IMG(0x1057847cu)), 2, t9, 2u);
        t12 = g->edx;
        eax = t11;
        edx = t12;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020bf90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020bf90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
