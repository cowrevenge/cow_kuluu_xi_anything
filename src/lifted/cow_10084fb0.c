/* f_0x10084fb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10084fb0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0x68u) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_10084fe7;
    }
    esi = rd32(self + 0x68u);
    edx = in_edx;
L_10084fbe: ;
    g->eax = rd32(esi);
    g->edx = edx;
    t1 = rd32(esi);
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, rd32(t1 + 0x18u), esi, 0);
    t3 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        edx = t3;
        goto L_10084fe0;
    }
    edx = t3;
    edi = t2;
    g->esp = sp0 - 0xcu;
    t4 = cow_fastcall(g, COW_IMG(0x1002c8f0u), edi, edx, 1, COW_IMG(0x1032cfa0u));
    t5 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        eax = t4;
        edx = t5;
        goto L_10084fe0;
    }
    eax = t4;
    edx = t5;
    if (rd32(edi + 0x78u) == arg1) goto L_10084fef;
L_10084fe0: ;
    if (rd32(esi + 0x2cu) != 0u)
    {
        esi = rd32(esi + 0x2cu);
        goto L_10084fbe;
    }
L_10084fe7: ;
    g->edx = edx;
    return eax & 0xffffff00u;
L_10084fef: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10084fb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10084fb0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
