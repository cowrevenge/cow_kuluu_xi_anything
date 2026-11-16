/* f_0x10260940 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10260940(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 != 0u) goto L_10260956;
    return 0x80004003u;
L_10260956: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(COW_IMG(0x1032918cu)), self, 1, arg1 - 0x64u);
    t1 = g->ecx;
    t2 = g->edx;
    if (rd32(arg1 - 0xc8u) != 0u)
    {
        ecx = t1;
        edx = t2;
        goto L_10260983;
    }
    eax = rd32(arg1 - 0xc8u);
    ecx = t1;
    edx = t2;
    wr32(arg2, 0u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, arg1 - 0x64u);
    t3 = g->edx;
    g->edx = t3;
    return 0u;
L_10260983: ;
    if ((int32_t)rd32(arg1 + 0x44u) > 1)
    {
        eax = rd32(arg1 + 0x44u);
        goto L_102609a0;
    }
    eax = rd32(arg1 + 0x44u);
    wr32(arg2, 0u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, arg1 - 0x64u);
    t4 = g->edx;
    g->edx = t4;
    return 0u;
L_102609a0: ;
    t5 = (uint32_t)((int32_t)(eax - 1u) >> 0x1fu);
    t6 = rd32(arg1 + 0x4cu);
    t7 = rd32(arg1 + 0x48u);
    g->ecx = t7;
    g->edx = t5;
    g->esp = sp0 - 0xcu;
    t8 = cow_stdcall(g, COW_IMG(0x10316840u), 4, t7, t6, eax - 1u, t5);
    t9 = g->ecx;
    t10 = g->edx;
    wr32(arg2, t8);
    g->edx = t10;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), t9, 1, arg1 - 0x64u);
    t11 = g->edx;
    g->edx = t11;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10260940(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10260940(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
