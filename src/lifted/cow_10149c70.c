/* f_0x10149c70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10149c70(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint8_t)arg2 == 0u)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg2;
        edx = in_edx;
    }
    else
    {
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t1 = cow_thiscall(g, COW_IMG(0x10161070u), rd32(COW_IMG(0x106218fcu)), 1, arg1);
        t2 = g->edx;
        g->edx = t2;
        t3 = rd32(COW_IMG(0x106218fcu));
        t4 = cow_thiscall(g, COW_IMG(0x10160ef0u), t3, 1, arg1);
        t5 = g->ecx;
        t6 = g->edx;
        if (t1 == 0u)
        {
            eax = t4;
            edx = t6;
        }
        else
        {
            eax = t4;
            ecx = t5;
            edx = t6;
            edi = t1;
            g->edx = edx;
            g->esp = sp0 - 8u;
            cow_cdecl(g, COW_IMG(0x10153180u), 6, COW_IMG(0x105782e0u), 0x100u, 0xau, 0x51u, 1u, edi);
            t7 = g->edx;
            t8 = rd32(COW_IMG(0x10578438u));
            wr8(t8 + 0x3au, 0u);
            wr32(t8 + 0x14u, 0u);
            t9 = rd32(t8 + 8u);
            g->edx = t7;
            t10 = cow_call_regs(g, COW_IMG(0x1015e790u), t9, COW_IMG(0x10621838u), g->edx, 0, 2, t9, 1u);
            t11 = g->ecx;
            t12 = g->edx;
            g->edx = t12;
            g->esp = sp0 - 0x10u;
            t13 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, 0x82u);
            t14 = g->edx;
            g->edx = t14;
            g->esp = sp0 - 8u;
            t15 = cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10578438u)), 7, COW_IMG(0x10149d10u), arg1, COW_IMG(0x105782e0u), 0u, t13, 1u, 0u);
            t16 = g->edx;
            eax = t15;
            edx = t16;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10149c70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10149c70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
