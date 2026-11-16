/* f_0x102a1e80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102a1e80(Guest* g)
{
    double d1;
    double d2;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    eax = in_eax;
    ecx = arg3;
    edx = 0u;
L_102a1e8d: ;
    d1 = fabs((double)rdf32(arg1 + ecx - arg3));
    if ((cow_fsw(g, d1, rdf64(COW_IMG(0x10340b28u)), 0u) & 0x4100u) == 0u)
    {
        eax = cow_fsw(g, d1, rdf64(COW_IMG(0x10340b28u)), 0u) & 0x4100u;
        goto L_102a1ed2;
    }
    eax = cow_fsw(g, d1, rdf64(COW_IMG(0x10340b28u)), 0u) & 0x4100u;
    d2 = fabs(fr(g, (double)rdf32(ecx) - (double)rdf32(COW_IMG(0x1032961cu))));
    if ((cow_fsw(g, d2, rdf64(COW_IMG(0x10340b28u)), 0u) & 0x4100u) == 0u)
    {
        eax = cow_fsw(g, d2, rdf64(COW_IMG(0x10340b28u)), 0u) & 0x4100u;
        goto L_102a1ed2;
    }
    eax = cow_fsw(g, d2, rdf64(COW_IMG(0x10340b28u)), 0u) & 0x4100u;
    if ((int32_t)(edx + 1u) < 3)
    {
        ecx = ecx + 4u;
        edx = edx + 1u;
        goto L_102a1e8d;
    }
    ecx = ecx + 4u;
    edx = edx + 1u;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t3 = cow_call_regs(g, COW_IMG(0x1027ae90u), arg2, g->ecx, g->edx, 1, 1, arg2);
    t4 = g->edx;
    g->edx = t4;
    return t3;
L_102a1ed2: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a1e80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102a1e80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
