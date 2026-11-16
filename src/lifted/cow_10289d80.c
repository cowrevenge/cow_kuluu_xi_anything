/* f_0x10289d80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10289d80(Guest* g)
{
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
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x102895d0u), 2, rd32(arg1), arg2);
    t1 = g->edx;
    t2 = rd32(arg1 + 4u);
    g->ecx = t2;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102895d0u), 2, t2, arg2);
    t3 = g->ecx;
    t4 = rd32(arg1 + 8u);
    g->ecx = t3;
    g->edx = t4;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x102895d0u), 2, t4, arg2);
    t5 = g->ecx;
    t6 = g->edx;
    if (rd32(arg1 + 0xcu) != 0u)
    {
        ecx = t5;
        edx = t6;
        edi = rd32(arg1 + 0xcu);
        if ((int32_t)rd32(arg1 + 4u) <= 0) goto L_10289dd1;
        ebx = 0u;
L_10289dbc: ;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x1029b550u), 5, edi, arg2, in_edi, in_esi, in_ebp);
        t7 = g->ecx;
        t8 = g->edx;
        if ((int32_t)(ebx + 1u) < (int32_t)rd32(arg1 + 4u))
        {
            ecx = t7;
            edx = t8;
            ebx = ebx + 1u;
            edi = edi + 0xcu;
            goto L_10289dbc;
        }
    }
L_10289dd1: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10289d80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10289d80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
