/* f_0x1013cba0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1013cba0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd16(self + 0x24u) != 0u)
    {
        eax = (in_eax & 0xffff0000u) | rd16(self + 0x24u);
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, (uint16_t)eax);
        t2 = g->edx;
        wr32(self + 0x1cu, t1);
        t3 = rd32(self + 0x340u);
        g->edx = t2;
        cow_call_regs(g, COW_IMG(0x1013d790u), t3, self, g->edx, 0, 1, t3);
        t4 = g->edx;
        edx = t4;
    }
    else
    {
        eax = (in_eax & 0xffff0000u) | rd16(self + 0x24u);
        wr32(self + 0x1cu, 0u);
        wr8(self + 0x33cu, (uint8_t)eax);
        edx = in_edx;
    }
    if (rd32(self + 0x1cu) == 0u)
    {
        eax = rd8(self + 0x344u);
    }
    else
    {
        eax = rd8(self + 0x344u);
        g->eax = eax;
        g->esp = sp0 - 4u;
        t5 = cow_fastcall(g, COW_IMG(0x1013cad0u), self, edx, 0);
        t6 = g->edx;
        g->edx = t6;
        t7 = cow_call_regs(g, COW_IMG(0x10160700u), t5, COW_IMG(0x10621838u), g->edx, 1, 0);
        t8 = g->ecx;
        t9 = g->edx;
        if ((uint8_t)t7 != 0u)
        {
            edx = t9;
        }
        else
        {
            eax = t7;
            ecx = t8;
            edx = t9;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t10 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x18u, 1u, 0xffffffffu);
            t11 = g->edx;
            if ((uint8_t)t10 != 0u)
            {
                eax = t10;
                edx = t11;
                goto L_1013cc26;
            }
            eax = t10;
            if (!(rd32(rd32(COW_IMG(0x104e1d4cu)) + 0x60u) >> 2u & 1u))
            {
                edx = rd32(rd32(COW_IMG(0x104e1d4cu)) + 0x60u) >> 2u;
                goto L_1013cc2d;
            }
            edx = rd32(rd32(COW_IMG(0x104e1d4cu)) + 0x60u) >> 2u;
L_1013cc26: ;
            g->edx = edx;
            g->esp = sp0 - 4u;
            cow_thiscall(g, COW_IMG(0x1013c220u), self, 0);
            t12 = g->edx;
            edx = t12;
        }
L_1013cc2d: ;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t13 = cow_thiscall(g, COW_IMG(0x1013cb30u), self, 0);
        t14 = g->edx;
        if ((int32_t)t13 >= (int32_t)rd8(self + 0x344u))
        {
            eax = t13;
            edx = t14;
        }
        else
        {
            ecx = rd8(self + 0x344u);
            edx = t14;
            eax = ecx;
        }
    }
    g->esp = sp0 - 4u;
    cow_fastcall(g, COW_IMG(0x1013c180u), self, edx, 1, eax);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013cba0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1013cba0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
