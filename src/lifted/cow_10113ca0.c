/* f_0x10113ca0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10113ca0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(COW_IMG(0x104e1b68u)) == 0u) goto L_10113cac;
    return 0u;
L_10113cac: ;
    g->esp = sp0;
    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 1, 8u);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_10113d10;
    }
    eax = t1;
    wr32(eax, arg2);
    wr32(eax + 4u, arg3);
    wr32(COW_IMG(0x104e1b68u), eax);
    g->ecx = arg2;
    g->edx = arg3;
    g->esp = sp0;
    t3 = cow_cdecl(g, COW_IMG(0x100f7620u), 3, arg1, COW_IMG(0x10113c50u), eax);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 == 0u)
    {
        edx = t5;
        goto L_10113d1e;
    }
    ecx = t4;
    edx = t5;
    if (rd32(COW_IMG(0x104e1b68u)) != 0u)
    {
        eax = rd32(COW_IMG(0x104e1b68u));
        if (1u)
        {
            wr32(COW_IMG(0x104e1b68u), 0u);
        }
        g->esp = sp0;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t6 = g->edx;
        edx = t6;
    }
    wr32(COW_IMG(0x104e1b68u), 0u);
    g->edx = edx;
    return 0u;
L_10113d10: ;
    wr32(COW_IMG(0x104e1b68u), 0u);
    g->edx = edx;
    return 0xffffffffu;
L_10113d1e: ;
    g->edx = edx;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10113ca0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10113ca0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
