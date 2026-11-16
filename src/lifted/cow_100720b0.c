/* f_0x100720b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100720b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    if (!(rd32(self + 0x24u) >> 0x1bu & 1u))
    {
        eax = rd32(self + 0x24u) >> 0x1bu;
        edx = in_edx;
        edi = in_edi;
    }
    else
    {
        wr32(sp0 - 0xcu, in_edi);
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        t1 = cow_thiscall(g, COW_IMG(0x10071fd0u), self, 0);
        t2 = g->edx;
        if (t1 == 0u)
        {
            t4 = rd32(self + 0x2cu);
            wr32(sp0 - 0x10u, t4);
            wr32(sp0 - 0x14u, sp0 - 4u);
            eax = t4;
            ecx = COW_IMG(0x1047d124u);
            edx = sp0 - 4u;
            loc_10 = t4;
        }
        else
        {
            eax = t1;
            edx = t2;
            t3 = rd32(self + 0x2cu);
            wr32(sp0 - 0x10u, t3);
            wr32(sp0 - 0x14u, sp0 - 4u);
            ecx = eax + 0x2cu;
            loc_10 = t3;
        }
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, COW_IMG(0x10052870u), ecx, 2, sp0 - 4u, loc_10);
        t5 = g->edx;
        wr32(sp0 - 0x10u, 0u);
        wr32(sp0 - 0x14u, sp0 - 4u);
        g->edx = t5;
        cow_thiscall(g, COW_IMG(0x10052870u), self + 0x2cu, 2, sp0 - 4u, 0u);
        t6 = g->edx;
        if (rd32(self + 0xcu) == 0u)
        {
            edi = rd32(sp0 - 0xcu);
        }
        else
        {
            eax = rd32(self + 0xcu);
            edx = t6;
            edi = rd32(sp0 - 0xcu);
            t7 = rd32(self + 0x10u);
            wr32(sp0 - 0xcu, t7);
            wr32(sp0 - 0x10u, sp0 - 4u);
            g->esp = sp0 - 8u;
            cow_thiscall(g, COW_IMG(0x10052870u), rd32(eax) + 0x10u, 2, sp0 - 4u, t7);
        }
        if (rd32(self + 0x10u) != 0u)
        {
            eax = rd32(self + 0x10u);
            t8 = rd32(self + 0xcu);
            wr32(rd32(eax) + 0xcu, t8);
        }
        if ((int32_t)(rd32(self + 0x24u) & 0x7fu) < 97)
        {
            eax = rd32(self + 0x24u) & 0x7fu;
        }
        else
        {
            eax = 4u;
        }
        if (rd32(COW_IMG(0x1047cf80u) + eax * 4u) != rd32(self + 0x14u))
        {
            edx = rd32(COW_IMG(0x1047cf80u) + eax * 4u);
        }
        else
        {
            edx = rd32(COW_IMG(0x1047cf80u) + eax * 4u);
            t9 = rd32(self + 0x10u);
            wr32(COW_IMG(0x1047cf80u) + eax * 4u, t9);
        }
        if (rd32(self + 4u) != 0u)
        {
            eax = rd32(self + 4u);
            t10 = rd32(self + 8u);
            wr32(rd32(eax) + 8u, t10);
        }
        if (rd32(self + 8u) == 0u)
        {
            eax = rd32(self + 8u);
        }
        else
        {
            eax = rd32(self + 8u);
            t11 = rd32(self + 4u);
            t12 = rd32(eax);
            wr32(t12 + 4u, t11);
            edx = t12;
        }
        wr32(self + 0x24u, rd32(self + 0x24u) & 0xf7ffffffu);
    }
    g->edi = edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100720b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100720b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
