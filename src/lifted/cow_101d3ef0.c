/* f_0x101d3ef0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101d3ef0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u) goto L_101d3f30;
    eax = arg1;
    edx = in_edx;
    ebx = 0u;
    ebp = self + 0x4cu;
L_101d3f06: ;
    esi = 0u;
    edi = ebp;
L_101d3f0a: ;
    if (rd32(edi) == 0u) goto L_101d3f1b;
    ecx = rd32(edi);
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_call_regs(g, COW_IMG(0x101cd9a0u), eax, ecx, g->edx, 1, 0);
    t2 = g->edx;
    if (arg1 == t1) goto L_101d3f3a;
    eax = t1;
    edx = t2;
L_101d3f1b: ;
    if ((int32_t)(esi + 1u) < 81)
    {
        esi = esi + 1u;
        edi = edi + 4u;
        goto L_101d3f0a;
    }
    if ((int32_t)(ebx + 1u) < 2)
    {
        ebx = ebx + 1u;
        ebp = ebp + 0x144u;
        goto L_101d3f06;
    }
L_101d3f30: ;
    return 0u;
L_101d3f3a: ;
    return rd32(ebx * 0x144u + esi * 4u + self + 0x4cu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d3ef0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d3ef0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
