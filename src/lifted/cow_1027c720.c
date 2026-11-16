/* f_0x1027c720 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u64 stack_args=1 */
uint32_t cow_fn_1027c720(Guest* g)
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
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(arg1 + 0x28u) != 0u)
    {
        eax = rd32(arg1 + 0x28u);
        goto L_1027c72e;
    }
    eax = rd32(arg1 + 0x28u);
    return eax;
L_1027c72e: ;
    g->ecx = self;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, eax, 4u, COW_IMG(0x103b40ecu), 0x2f4u, in_ebx);
    t2 = g->ecx;
    if ((int32_t)rd32(arg1 + 0x28u) <= 0)
    {
        edx = 0u;
        ebx = t1;
    }
    else
    {
        ecx = t2;
        ebx = t1;
        edx = 0u;
        edi = 0u;
L_1027c752: ;
        t3 = edi + rd32(arg1 + 0x20u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t4 = cow_cdecl(g, COW_IMG(0x1027c6c0u), 1, t3);
        t5 = g->ecx;
        t6 = g->edx;
        wr32(ebx + t6 * 4u, t4);
        if ((int32_t)(t6 + 1u) < (int32_t)rd32(arg1 + 0x28u))
        {
            ecx = t5;
            edx = t6 + 1u;
            edi = edi + 0xf8u;
            goto L_1027c752;
        }
        edx = t6 + 1u;
    }
    g->edx = edx;
    return ebx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027c720(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1027c720(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
