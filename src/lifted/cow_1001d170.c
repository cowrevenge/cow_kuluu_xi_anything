/* f_0x1001d170 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1001d170(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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

    wr32(self, COW_IMG(0x1032a340u));
    ecx = self;
    edx = in_edx;
    esi = 0u;
    edi = self + 0x10u;
L_1001d181: ;
    t1 = rd32(COW_IMG(0x10456d50u) + esi);
    t2 = rd32(COW_IMG(0x10456d50u) + esi);
    wr32(edi - 8u, t1);
    if (t2 != 0u)
    {
        eax = t1;
        g->edx = edx;
        t3 = rd32(eax);
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, rd32(t3 + 4u), t3, 1, eax);
        t4 = g->ecx;
        t5 = g->edx;
        ecx = t4;
        edx = t5;
    }
    t6 = rd32(COW_IMG(0x10456d58u) + esi);
    t7 = rd32(COW_IMG(0x10456d58u) + esi);
    wr32(edi, t6);
    if (t7 != 0u)
    {
        eax = t6;
        g->edx = rd32(eax);
        t8 = rd32(eax);
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, rd32(t8 + 4u), ecx, 1, eax);
        t9 = g->ecx;
        t10 = g->edx;
        ecx = t9;
        edx = t10;
    }
    if ((int32_t)(esi + 4u) < 8)
    {
        esi = esi + 4u;
        edi = edi + 4u;
        goto L_1001d181;
    }
    wr8(self + 4u, 0u);
    wr8(COW_IMG(0x10456d48u), 0u);
    g->edx = edx;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001d170(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1001d170(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
