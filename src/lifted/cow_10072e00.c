/* f_0x10072e00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10072e00(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
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
    cow_frame(g, sp0, 12u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_stdcall(g, COW_IMG(0x10042520u), 0);
    t1 = g->edx;
    if (rd32(COW_IMG(0x1047d118u)) == 0u)
    {
        edx = t1;
    }
    else
    {
        eax = rd32(COW_IMG(0x1047d118u));
        edx = t1;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t2 = cow_thiscall(g, COW_IMG(0x10071ec0u), rd32(eax), 0);
        t3 = g->edx;
        g->edx = t3;
        cow_thiscall(g, COW_IMG(0x10071050u), COW_IMG(0x1047d118u), 0);
        t4 = g->edx;
        wr32(COW_IMG(0x1047d118u), 0u);
        edx = t4;
    }
    if (rd32(COW_IMG(0x1047d104u)) != 0u)
    {
        eax = rd32(COW_IMG(0x1047d104u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t5 = cow_thiscall(g, COW_IMG(0x10071ec0u), rd32(eax), 0);
        t6 = g->edx;
        g->edx = t6;
        cow_thiscall(g, COW_IMG(0x10071050u), COW_IMG(0x1047d104u), 0);
        t7 = g->edx;
        wr32(COW_IMG(0x1047d104u), 0u);
        edx = t7;
    }
    if (rd32(self + 0x40008u) != 0u)
    {
        eax = rd32(self + 0x40008u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t8 = cow_thiscall(g, COW_IMG(0x10071ec0u), rd32(eax), 0);
        t9 = g->edx;
        cow_thiscall(g, COW_IMG(0x10071050u), self + 0x40008u, 0);
        wr32(self + 0x40008u, 0u);
    }
    if (rd32(COW_IMG(0x1047d124u)) != 0u)
    {
        eax = rd32(COW_IMG(0x1047d124u));
        if (rd32(eax) == 0u) goto L_10072ebe;
        eax = rd32(eax);
L_10072e84: ;
        if (rd32(eax + 0x2cu) == 0u)
        {
            esi = 0u;
        }
        else
        {
            ecx = rd32(eax + 0x2cu);
            esi = rd32(ecx);
        }
        wr8(eax + 0x1au, rd8(eax + 0x1au) | 4u);
        if (rd32(rd32(COW_IMG(0x103d3cb8u)) + 0x2cu) == 0u)
        {
            wr16(eax + 0x18u, rd16(eax + 0x18u) & 0x8000u);
        }
        t10 = rd32(eax + 0x14u);
        wr32(sp0 - 4u, t10);
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x10071050u), sp0 - 4u, 0);
        if (esi != 0u)
        {
            eax = esi;
            goto L_10072e84;
        }
    }
L_10072ebe: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10072e00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10072e00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
