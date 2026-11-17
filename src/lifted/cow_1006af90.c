/* f_0x1006af90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1006af90(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self) == 0xffffffffu)
    {
        edx = in_edx;
        esi = arg1;
L_1006af9e: ;
        t1 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, rd32(rd32(t1) + 0xd0u), rd32(t1), 1, t1);
        if (esi != 0u)
        {
            eax = rd32(esi + 4u);
L_1006afb9: ;
            t2 = rd32(esi + 8u);
            t3 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, rd32(rd32(t3) + 0xfcu), t3, 4, t3, rd32(esi), eax, t2);
            if (rd32(esi + 0x10u) != 0x7fffffffu)
            {
                eax = rd32(esi + 0x10u);
                esi = esi + 0xcu;
                goto L_1006afb9;
            }
            esi = esi + 0xcu;
        }
        t4 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        g->eax = t4;
        g->edx = rd32(t4);
        t5 = rd32(t4);
        g->esp = sp0 - 0xcu;
        t6 = cow_thiscall(g, rd32(t5 + 0xd4u), rd32(COW_IMG(0x1047bfa8u)), 2, t4, self);
        t7 = g->edx;
        g->edx = t7;
        cow_thiscall(g, COW_IMG(0x1006adf0u), self, 0);
        t8 = g->edx;
        if (rd32(self) == 0xffffffffu)
        {
            edx = t8;
            goto L_1006af9e;
        }
    }
    t9 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(t9) + 0xd8u), rd32(t9), 2, t9, rd32(self));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006af90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1006af90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
