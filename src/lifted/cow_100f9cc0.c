/* f_0x100f9cc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100f9cc0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t esi;
    int64_t q11;
    int64_t q7;
    uint32_t t1;
    uint32_t t10;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x104dfd94u)) != 0u) goto L_100f9ccc;
    eax = rd32(COW_IMG(0x104dfd94u));
    return eax & 0xffffff00u;
L_100f9ccc: ;
    g->ecx = self;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x100f04f0u), g->eax, g->ecx, in_edx, 1, 1, COW_IMG(0x10362058u));
    t1 = g->ecx;
    t2 = g->edx;
    g->edx = t2;
    t3 = rd32(COW_IMG(0x104e0af0u));
    t4 = rd32(rd32(COW_IMG(0x104e0af0u)) + 0x18cu);
    t5 = cow_stdcall(g, COW_IMG(0x100dc060u), 0);
    t6 = g->edx;
    q7 = (uint64_t)cow_mulu(0x10624dd3u, t5);
    if (t4 == cow_qhi(q7) >> 6u)
    {
        eax = (uint32_t)(q7);
    }
    else
    {
        ecx = t5;
        esi = t4;
        t8 = rd32(COW_IMG(0x104e0af0u));
        wr32(t8 + 0x190u, esi);
        g->edx = t8;
        g->esp = sp0 - 4u;
        t9 = cow_stdcall(g, COW_IMG(0x100dc060u), 0);
        t10 = g->edx;
        q11 = (uint64_t)cow_mulu(0x10624dd3u, t9);
        t12 = cow_qhi(q11) >> 6u;
        t13 = rd32(COW_IMG(0x104e0af0u));
        wr32(t13 + 0x18cu, t12);
        wr32(rd32(COW_IMG(0x104e0af0u)) + 0x194u, 0u);
        wr32(rd32(COW_IMG(0x104e0af0u)) + 0x198u, 0u);
        eax = t13;
    }
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f9cc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f9cc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
