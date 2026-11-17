/* f_0x102f8787 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102f8787(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x102f7788u), in_eax, g->ecx, in_edx, 1, 2, arg1, arg1 + 0x10cu);
    t2 = g->edx;
    if ((rd8(arg1 + 0x10cu) & 0x20u) != 0u)
    {
        ecx = arg1 + 0x10cu;
        edx = t2;
        goto L_102f87b5;
    }
    eax = t1;
    edx = t2;
    g->edx = edx;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x102ef267u), 4, arg1, COW_IMG(0x10348dc8u), in_edi, in_esi);
    t3 = g->edx;
    if (arg2 == 0u)
    {
        edx = t3;
        goto L_102f87ce;
    }
    ecx = COW_IMG(0x10348dc8u);
    edx = t3;
L_102f87b5: ;
    if ((rd32(arg1 + 0x58u) & 4u) == 0u)
    {
        eax = rd32(arg1 + 0x58u);
    }
    else
    {
        eax = rd32(arg1 + 0x58u);
        wr32(arg1 + 0x58u, eax | 8u);
        eax = eax | 8u;
    }
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x102f7fe0u), g->eax, g->ecx, edx, 1, 2, arg1, arg3);
    t4 = g->edx;
    edx = t4;
L_102f87ce: ;
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f8787(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102f8787(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
