/* f_0x101bce30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101bce30(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 20u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    if (rd32(self + 0xcu) == 0xffffffffu)
    {
        eax = rd32(self + 0xcu);
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0xcu);
        wr32(sp0 - 0xcu, sp0 - 4u);
        wr32(sp0 - 0x10u, eax);
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t1 = cow_thiscall(g, rd32(COW_IMG(0x103291f8u)), sp0 - 4u, 2, eax, sp0 - 4u);
        t2 = g->ecx;
        t3 = g->edx;
        if (t1 == 0u)
        {
            eax = t1;
            ecx = t2;
            edx = t3;
        }
        else
        {
            eax = t1;
            ecx = t2;
            edx = t3;
            if (rd32(sp0 - 4u) != 0x103u)
            {
                t4 = rd32(self + 0xcu);
                wr32(sp0 - 0xcu, t4);
                g->eax = eax;
                g->edx = t4;
                g->esp = sp0 - 8u;
                t5 = cow_thiscall(g, rd32(COW_IMG(0x10329104u)), ecx, 1, t4);
                t6 = g->ecx;
                t7 = g->edx;
                wr32(self + 0xcu, 0xffffffffu);
                eax = t5;
                ecx = t6;
                edx = t7;
            }
        }
    }
    if (rd8(self + 4u) == 0u) goto L_101bcea5;
    if ((int32_t)rd32(self + 8u) <= 90)
    {
        eax = rd32(self + 8u);
        goto L_101bcea1;
    }
    eax = rd32(self + 8u);
    wr32(sp0 - 0xcu, COW_IMG(0x1037ca70u));
    wr32(sp0 - 0x10u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t8 = cow_thiscall(g, rd32(COW_IMG(0x10329324u)), ecx, 2, 0u, COW_IMG(0x1037ca70u));
    t9 = g->edx;
    if (t8 == 0u)
    {
        eax = t8;
        edx = t9;
        wr32(sp0 - 0xcu, eax);
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10005600u), eax, rd32(COW_IMG(0x10455c20u)), g->edx, 0, 1, eax);
        wr8(self + 4u, 0u);
    }
    wr32(self + 8u, 0u);
    g->esi = rd32(sp0 - 8u);
    return;
L_101bcea1: ;
    wr32(self + 8u, eax + 1u);
L_101bcea5: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101bce30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101bce30(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
