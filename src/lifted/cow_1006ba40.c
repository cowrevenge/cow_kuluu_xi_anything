/* f_0x1006ba40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1006ba40(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u) goto L_1006ba5b;
    t1 = rd32(self + 8u);
    wr32(self + 8u, 0u);
    return t1;
L_1006ba5b: ;
    if (rd32(self + 8u) == 0u) goto L_1006ba94;
    ecx = rd32(self + 8u);
    edx = in_edx;
L_1006ba66: ;
    g->esp = sp0 - 8u;
    t2 = cow_fastcall(g, COW_IMG(0x1006ba40u), ecx, edx, 1, 1u);
    t3 = g->edx;
    wr32(self + 8u, t2);
    if (ecx == 0u)
    {
        edx = t3;
        edi = ecx;
    }
    else
    {
        eax = t2;
        edx = t3;
        edi = ecx;
        g->esi = self;
        g->edi = edi;
        g->esp = sp0 - 8u;
        t4 = cow_call_regs(g, COW_IMG(0x1006ba30u), eax, edi, edx, 1, 0);
        t5 = g->ecx;
        t6 = g->edx;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t5, t6, 1, 1, edi);
        t7 = g->edx;
        edx = t7;
    }
    if (rd32(self + 8u) != 0u)
    {
        ecx = rd32(self + 8u);
        goto L_1006ba66;
    }
    g->esi = in_esi;
    g->edi = in_edi;
    return edi;
L_1006ba94: ;
    g->esi = in_esi;
    g->edi = in_edi;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006ba40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1006ba40(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
