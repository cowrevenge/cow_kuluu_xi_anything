/* f_0x10029dd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10029dd0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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

    t1 = rd32(self + 0xcu);
    wr32(self, COW_IMG(0x1032a710u));
    if (t1 == 0u)
    {
        eax = t1;
        edx = in_edx;
    }
    else
    {
        eax = t1;
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        t2 = cow_thiscall(g, COW_IMG(0x10071ec0u), rd32(eax), 0);
        t3 = g->edx;
        eax = t2;
        edx = t3;
    }
    if (rd32(self + 4u) != 0u)
    {
        ecx = rd32(self + 4u);
        g->eax = rd32(ecx);
        g->edx = edx;
        t4 = rd32(ecx);
        g->esp = sp0 - 0xcu;
        t5 = cow_thiscall(g, rd32(t4 + 0x18u), ecx, 1, 1u);
        t6 = g->edx;
        wr32(self + 4u, 0u);
        eax = t5;
        edx = t6;
    }
    if (rd32(self + 0x20u) != 0u)
    {
        ecx = rd32(self + 0x20u);
        g->eax = eax;
        g->edx = rd32(ecx);
        t7 = rd32(ecx);
        g->esp = sp0 - 0xcu;
        t8 = cow_thiscall(g, rd32(t7 + 0x18u), ecx, 1, 1u);
        t9 = g->edx;
        wr32(self + 0x20u, 0u);
        eax = t8;
        edx = t9;
    }
    ebx = 7u;
    edi = self + 0x24u;
L_10029e15: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t10 = cow_thiscall(g, COW_IMG(0x1001b140u), edi, 0);
    t11 = g->edx;
    if (ebx != 1u)
    {
        eax = t10;
        edx = t11;
        ebx = ebx - 1u;
        edi = edi + 0x14u;
        goto L_10029e15;
    }
    eax = t10;
    edx = t11;
    ebx = 7u;
    edi = self + 0xb0u;
L_10029e2d: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t12 = cow_thiscall(g, COW_IMG(0x1001ac30u), edi - 0x14u, 0);
    t13 = g->edx;
    if (ebx != 1u)
    {
        eax = t12;
        edx = t13;
        ebx = ebx - 1u;
        edi = edi - 0x14u;
        goto L_10029e2d;
    }
    eax = t12;
    edx = t13;
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10034270u), eax, self + 8u, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10029dd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10029dd0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
