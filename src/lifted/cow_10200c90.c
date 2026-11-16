/* f_0x10200c90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10200c90(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
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

    if (rd32(COW_IMG(0x10578480u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10578480u));
        edx = in_edx;
    }
    else
    {
        if (rd32(COW_IMG(0x10663684u)) == 0u)
        {
            eax = rd32(COW_IMG(0x10663684u));
            goto L_10200cac;
        }
        eax = rd32(COW_IMG(0x10663684u));
        if (rd32(eax + 8u) != 0u)
        {
            edx = in_edx;
            goto L_10200cbb;
        }
L_10200cac: ;
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10381fecu));
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
L_10200cbb: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1038522cu));
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103851e8u));
    t6 = g->edx;
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103851fcu));
    t8 = g->edx;
    wr32(self + 0x34u, 0u);
    wr8(self + 0x49u, 1u);
    g->esi = self;
    g->edx = t8;
    t9 = cow_thiscall(g, COW_IMG(0x101f7020u), self, 3, 0u, 0u, 1u);
    t10 = g->edx;
    wr32(self + 0x3cu, 0u);
    wr8(self + 0x44u, 0x20u);
    wr8(self + 0x45u, 0x18u);
    g->edx = t10;
    cow_thiscall(g, COW_IMG(0x10200780u), self, 0);
    t11 = g->edx;
    if (rd32(COW_IMG(0x105781f8u)) != 0u)
    {
        eax = rd32(COW_IMG(0x105781f8u));
        edx = t11;
        g->esp = sp0;
        cow_thiscall(g, COW_IMG(0x10221300u), eax + 0x20u, 1, 0x10u);
    }
    g->esi = in_esi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10200c90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10200c90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
