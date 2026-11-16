/* f_0x102531d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102531d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u)
    {
        eax = in_eax;
        goto L_1025321f;
    }
    if ((rd32(arg1) & 4u) == 0u)
    {
        eax = rd32(arg1);
        goto L_1025321f;
    }
    eax = rd32(arg1);
    if ((eax & 8u) == 0u) goto L_1025321f;
    t1 = rd32(arg1 + 0x34u);
    wr32(arg1 + 4u, 0u);
    wr32(arg1 + 8u, 0u);
    if ((int32_t)t1 > 0)
    {
        ecx = self;
        edx = in_edx;
        ebx = 0u;
        edi = 0u;
L_102531fe: ;
        t2 = ebx + rd32(arg1 + 0x3cu);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x10289f10u), 2, t2, 0u);
        t3 = g->ecx;
        t4 = g->edx;
        if ((int32_t)(edi + 1u) < (int32_t)rd32(arg1 + 0x34u))
        {
            ecx = t3;
            edx = t4;
            ebx = ebx + 0x10u;
            edi = edi + 1u;
            goto L_102531fe;
        }
    }
    return 0u;
L_1025321f: ;
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102531d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102531d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
