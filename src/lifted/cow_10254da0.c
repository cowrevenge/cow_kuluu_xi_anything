/* f_0x10254da0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10254da0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->esp = sp0 - 0xcu;
    t1 = cow_fastcall(g, COW_IMG(0x10254bb0u), self + 0x10u, in_edx, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd32(self + 4u) == rd32(self + 8u))
    {
        ecx = t2;
        edx = t3;
        goto L_10254dc5;
    }
    eax = t1;
    edx = t3;
    ebx = rd32(self + 8u);
    esi = rd32(self + 4u);
L_10254db7: ;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t4 = cow_fastcall(g, COW_IMG(0x102545b0u), esi, edx, 0);
    t5 = g->ecx;
    t6 = g->edx;
    if (esi + 0x30u != ebx)
    {
        eax = t4;
        edx = t6;
        esi = esi + 0x30u;
        goto L_10254db7;
    }
    ecx = t5;
    edx = t6;
L_10254dc5: ;
    t7 = rd32(self + 4u);
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, t7);
    t8 = g->edx;
    wr32(self + 4u, 0u);
    wr32(self + 8u, 0u);
    wr32(self + 0xcu, 0u);
    g->edx = t8;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10254da0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10254da0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
