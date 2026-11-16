/* f_0x100ad1e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100ad1e0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0x884u) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x884u);
        if (rd32(eax) == 0u)
        {
            edx = in_edx;
        }
        else
        {
            if (eax == 0u)
            {
                edi = 0u;
            }
            else
            {
                edi = rd32(eax);
            }
            g->edx = in_edx;
            g->esp = sp0 - 8u;
            t1 = cow_call_regs(g, COW_IMG(0x10056c70u), eax, edi, g->edx, 0, 4, self, self, 0u, 0u);
            t2 = g->edx;
            g->edx = t2;
            cow_thiscall(g, COW_IMG(0x10056ae0u), edi, 0);
            t3 = g->edx;
            t4 = rd32(edi + 0x7cu);
            wr32(self + 0x87cu, t4);
            g->edx = t3;
            cow_thiscall(g, COW_IMG(0x100acd30u), self, 1, 1u);
            t5 = g->edx;
            edx = t5;
        }
    }
    g->edx = edx;
    g->esp = sp0 - 4u;
    t6 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t7 = g->edx;
    if (t6 == 0u)
    {
        eax = t6;
        edx = t7;
    }
    else
    {
        eax = t6;
        g->eax = eax;
        g->edx = rd32(eax);
        t8 = rd32(eax);
        g->esp = sp0 - 4u;
        t9 = cow_thiscall(g, rd32(t8 + 0x180u), eax, 0);
        t10 = g->edx;
        eax = t9;
        edx = t10;
    }
    wr8(self + 0x878u, 1u);
    if ((uint8_t)arg1 != 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg1;
    }
    else
    {
        t11 = rd32(self + 0x86cu);
        g->esp = sp0 - 4u;
        t12 = cow_thiscall(g, COW_IMG(0x1017ac40u), rd32(COW_IMG(0x10631f24u)), 2, t11, 0u);
        eax = t12;
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ad1e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ad1e0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
