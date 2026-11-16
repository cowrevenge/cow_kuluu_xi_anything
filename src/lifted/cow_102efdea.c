/* f_0x102efdea - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=9 */
uint32_t cow_fn_102efdea(Guest* g)
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 == 0u)
    {
        edx = in_edx;
        goto L_102efeb5;
    }
    if (arg2 == 0u)
    {
        edx = in_edx;
        goto L_102efeb5;
    }
    if (arg3 == 0u)
    {
        edx = in_edx;
        goto L_102efeb5;
    }
    if (arg4 == 0u)
    {
        edx = arg4;
        goto L_102efeb5;
    }
    if (arg5 == 0u)
    {
        edx = arg4;
        goto L_102efeb5;
    }
    if (arg6 == 0u)
    {
        edx = arg4;
        goto L_102efeb5;
    }
    wr32(arg3, rd32(arg2));
    t1 = rd32(arg2 + 4u);
    wr32(arg4, t1);
    t2 = rd8(arg2 + 0x18u);
    wr32(arg5, t2);
    t3 = rd8(arg2 + 0x19u);
    wr32(arg6, t3);
    if (arg8 != 0u)
    {
        t4 = rd8(arg2 + 0x1au);
        wr32(arg8, t4);
    }
    if (arg9 != 0u)
    {
        t5 = rd8(arg2 + 0x1bu);
        wr32(arg9, t5);
    }
    if (arg7 != 0u)
    {
        t6 = rd8(arg2 + 0x1cu);
        wr32(arg7, t6);
    }
    if (rd32(arg6) != 3u)
    {
        ecx = rd32(arg6);
        eax = ((uint32_t)(int8_t)ecx & 2u) | 1u;
    }
    else
    {
        ecx = rd32(arg6);
        eax = 1u;
    }
    if ((ecx & 4u) != 0u)
    {
        eax = eax + 1u;
    }
    t7 = cow_divu(g, 0x7fffffffu, (uint32_t)((int32_t)(rd32(arg5) * eax + 7u) >> 3u));
    t8 = cow_modu(g, 0x7fffffffu, (uint32_t)((int32_t)(rd32(arg5) * eax + 7u) >> 3u));
    if (rd32(arg3) <= t7)
    {
        edx = t8;
    }
    else
    {
        ecx = (uint32_t)((int32_t)(rd32(arg5) * eax + 7u) >> 3u);
        eax = t7;
        edx = t8;
        g->esp = sp0 - 0xcu;
        cow_call_regs(g, COW_IMG(0x102ef252u), g->eax, g->ecx, edx, 1, 2, arg1, COW_IMG(0x10348094u));
        t9 = g->edx;
        edx = t9;
    }
    eax = 1u;
L_102efeb7: ;
    g->edx = edx;
    return eax;
L_102efeb5: ;
    eax = 0u;
    goto L_102efeb7;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102efdea(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102efdea(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
