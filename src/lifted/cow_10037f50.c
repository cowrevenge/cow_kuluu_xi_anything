/* f_0x10037f50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10037f50(Guest* g)
{
    double d6;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    if (rd32(COW_IMG(0x104637e4u)) != 0u)
    {
        eax = rd32(COW_IMG(0x104637e4u));
        ecx = self;
        edx = in_edx;
        goto L_10037f86;
    }
    wr32(sp0 - 0xcu, 0x35313030u);
    wr32(sp0 - 0x10u, 0x3du);
    wr32(sp0 - 0x14u, sp0 - 4u);
    t1 = rd32(rd32(rd32(COW_IMG(0x1047d128u)) + 0x40008u));
    g->eax = t1;
    g->ecx = t1;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t2 = cow_stdcall(g, COW_IMG(0x10072290u), 3, sp0 - 4u, 0x3du, 0x35313030u);
    t3 = g->ecx;
    t4 = g->edx;
    t5 = rd32(t2);
    wr32(COW_IMG(0x104637e4u), t5);
    if (t5 == 0u) goto L_10037fa7;
    eax = t5;
    ecx = t3;
    edx = t4;
L_10037f86: ;
    if (rd32(eax) != 0u)
    {
        esi = rd32(eax);
        g->edx = edx;
        d6 = fr(g, (double)rdf32(COW_IMG(0x10351700u)) * (double)rdf32(COW_IMG(0x1032a34cu)));
        fpush(g, d6);
        g->esp = sp0 - 8u;
        t7 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t8 = g->edx;
        wr32(sp0 - 0xcu, t7);
        wr32(sp0 - 0x10u, 0x40u);
        cow_thiscall(g, COW_IMG(0x10036f00u), esi, 2, 0x40u, t7);
    }
L_10037fa7: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10037f50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10037f50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
