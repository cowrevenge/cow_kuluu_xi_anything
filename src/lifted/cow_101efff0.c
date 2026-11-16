/* f_0x101efff0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_101efff0(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ecx = 0u;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_stdcall(g, COW_IMG(0x101effb0u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((int32_t)t1 <= 0)
    {
        ecx = t2;
        loc_4 = t1;
        goto L_101f004d;
    }
    ecx = t2;
    edx = t3;
    loc_4 = t1;
    esi = 0u;
L_101f0012: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t4 = cow_cdecl(g, COW_IMG(0x101effc0u), 1, esi);
    t5 = g->ecx;
    t6 = g->edx;
    g->ebx = arg3;
    g->edx = t6;
    g->esp = sp0 - 0x14u;
    t7 = cow_cdecl(g, COW_IMG(0x101f0060u), 4, t4, arg2, arg3, arg4);
    t8 = g->edx;
    if (t7 != 0u)
    {
        ecx = t7;
        edx = t8;
        goto L_101f003e;
    }
    ecx = t7;
    edx = t8;
    if ((int32_t)(esi + 1u) < (int32_t)loc_4)
    {
        esi = esi + 1u;
        goto L_101f0012;
    }
    g->ebx = in_ebx;
    return ecx;
L_101f003e: ;
    g->ecx = ecx;
    g->esp = sp0 - 0x14u;
    t9 = cow_cdecl(g, COW_IMG(0x101effc0u), 1, esi);
    t10 = g->ecx;
    wr32(arg1, t9);
    ecx = t10;
L_101f004d: ;
    g->ebx = in_ebx;
    return ecx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101efff0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101efff0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
