/* f_0x100c46b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100c46b0(Guest* g)
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    if ((rd32(rd32(arg1) + 0x24u) & 0x7fu) == 1u)
    {
        eax = rd32(arg1);
        g->edx = in_edx;
        g->esp = sp0 - 0x24u;
        cow_thiscall(g, COW_IMG(0x100742a0u), sp0 - 0x1cu, 0);
        t1 = g->edx;
        wr32(sp0 - 0x28u, 0xffffffffu);
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x30u, 7u);
        wr32(sp0 - 0x34u, rd32(arg1));
        g->edx = t1;
        cow_thiscall(g, COW_IMG(0x100742b0u), sp0 - 0x1cu, 4, rd32(arg1), 7u, 0u, 0xffffffffu);
        t2 = g->edx;
        wr32(sp0 - 0x28u, 0u);
        g->edx = t2;
        t3 = cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
        t4 = g->edx;
        if (t3 == 0u) goto L_100c4728;
        edx = t4;
        esi = t3;
L_100c46f4: ;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t5 = cow_thiscall(g, COW_IMG(0x10056e50u), esi, 0);
        t6 = g->edx;
        if ((uint8_t)t5 == 0u)
        {
            edx = t6;
        }
        else
        {
            edx = t6;
            g->edx = edx;
            g->esp = sp0 - 0x24u;
            t7 = cow_thiscall(g, COW_IMG(0x10056e80u), esi, 0);
            t8 = g->edx;
            if ((uint8_t)t7 != 0u)
            {
                edx = t8;
            }
            else
            {
                eax = t7;
                edx = t8;
                wr32(sp0 - 0x28u, 0u);
                wr32(sp0 - 0x2cu, 0u);
                wr32(sp0 - 0x30u, self);
                wr32(sp0 - 0x34u, self);
                g->edx = edx;
                g->esp = sp0 - 0x24u;
                cow_call_regs(g, COW_IMG(0x10056c70u), eax, esi, g->edx, 0, 4, self, self, 0u, 0u);
                t9 = g->edx;
                edx = t9;
            }
        }
        wr32(sp0 - 0x28u, 0u);
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t10 = cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
        t11 = g->edx;
        if (t10 != 0u)
        {
            edx = t11;
            esi = t10;
            goto L_100c46f4;
        }
    }
L_100c4728: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100c46b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100c46b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
