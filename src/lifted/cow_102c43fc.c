/* f_0x102c43fc - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102c43fc(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 == 0u) goto L_102c444c;
    if (arg2 == 0u) goto L_102c444c;
    if (rd32(arg1 + 0x248u) == 0u) goto L_102c443e;
    eax = rd32(arg1 + 0x248u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall_cdecl(g, eax, self, 2, arg1, arg2);
    t2 = g->edx;
    if (t1 != 0u)
    {
        edx = t2;
        edi = t1;
    }
    else
    {
        eax = t1;
        edx = t2;
        edi = t1;
        if ((rd8(arg1 + 0x6eu) & 0x10u) == 0u)
        {
            g->esp = sp0;
            cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, arg1, COW_IMG(0x103c8664u), in_edi, in_esi);
            t3 = g->edx;
            edx = t3;
        }
    }
    g->edx = edx;
    return edi;
L_102c443e: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t4 = cow_cdecl(g, COW_IMG(0x102c4450u), 2, arg1, arg2);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_102c444c: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c43fc(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102c43fc(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
