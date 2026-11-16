/* f_0x102f6ffe - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102f6ffe(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u) goto L_102f7037;
    if (rd32(arg1 + 0x1cu) == 0u) goto L_102f7037;
    eax = rd32(arg1 + 0x1cu);
    if (rd32(arg1 + 0x24u) == 0u) goto L_102f7037;
    if (rd32(eax + 0x14u) == 0u)
    {
        eax = rd32(eax + 0x14u);
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(eax + 0x14u);
        g->esp = sp0 - 4u;
        t1 = cow_call_regs(g, COW_IMG(0x10308d6du), g->eax, self, in_edx, 1, 2, eax, arg1);
        t2 = g->edx;
        eax = t1;
        ecx = arg1;
        edx = t2;
    }
    t3 = rd32(arg1 + 0x1cu);
    t4 = rd32(arg1 + 0x28u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall_cdecl(g, rd32(arg1 + 0x24u), ecx, 2, t4, t3);
    t5 = g->edx;
    wr32(arg1 + 0x1cu, 0u);
    g->edx = t5;
    return 0u;
L_102f7037: ;
    return 0xfffffffeu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f6ffe(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102f6ffe(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
