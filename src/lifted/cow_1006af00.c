/* f_0x1006af00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1006af00(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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

    if (rd32(self) == 0xffffffffu)
    {
        edx = in_edx;
        esi = arg1;
L_1006af0e: ;
        t1 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, rd32(rd32(t1) + 0xd0u), rd32(t1), 1, t1);
        t2 = g->edx;
        if (esi == 0u)
        {
            edx = t2;
        }
        else
        {
            eax = rd32(esi);
L_1006af28: ;
            t3 = rd32(esi + 4u);
            t4 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
            g->edx = rd32(t4);
            t5 = rd32(t4);
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, rd32(t5 + 0xc8u), t4, 3, t4, eax, t3);
            t6 = g->edx;
            if (rd32(esi + 8u) != 0x7fffffffu)
            {
                eax = rd32(esi + 8u);
                esi = esi + 8u;
                goto L_1006af28;
            }
            edx = t6;
            esi = esi + 8u;
        }
        t7 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        g->eax = t7;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t8 = cow_thiscall(g, rd32(rd32(t7) + 0xd4u), rd32(t7), 2, t7, self);
        t9 = g->edx;
        g->edx = t9;
        cow_thiscall(g, COW_IMG(0x1006adf0u), self, 0);
        t10 = g->edx;
        if (rd32(self) == 0xffffffffu)
        {
            edx = t10;
            goto L_1006af0e;
        }
    }
    t11 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(t11) + 0xd8u), rd32(t11), 2, t11, rd32(self));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006af00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1006af00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
