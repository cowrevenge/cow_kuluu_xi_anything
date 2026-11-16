/* f_0x10261e70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10261e70(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(sp0 + 0xcu) != 0u) goto L_10261e8a;
    return 0x80004003u;
L_10261e8a: ;
    if (arg4 == 0u) goto L_10261eda;
    wr32(arg4, 0u);
L_10261e98: ;
    g->eax = rd32(rd32(arg1 + 0xcu));
    g->edx = in_edx;
    t1 = rd32(rd32(arg1 + 0xcu));
    t2 = rd32(arg1 + 0xcu);
    g->esp = sp0 - 0x14u;
    t3 = cow_thiscall(g, rd32(t1 + 0x14u), t2, 0);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 != rd32(arg1 + 0x10u))
    {
        ecx = t4;
        edx = t5;
        g->esp = sp0 - 0x14u;
        cow_call_regs(g, COW_IMG(0x10261ff0u), g->eax, g->ecx, edx, 0, 1, arg1);
    }
    if ((int32_t)(rd32(arg1 + 8u) - rd32(arg1 + 4u)) >= (int32_t)arg2)
    {
        edx = rd32(arg1 + 4u);
        ebp = arg2;
    }
    else
    {
        eax = rd32(arg1 + 8u) - rd32(arg1 + 4u);
        edx = rd32(arg1 + 4u);
        ebp = eax;
    }
    if (ebp != 0u)
    {
        loc_4 = 0u;
        goto L_10261eee;
    }
    g->edx = edx;
    return 1u;
L_10261eda: ;
    if (arg2 <= 1u) goto L_10261e98;
    return 0x80070057u;
L_10261eee: ;
    if (rd32(arg1 + 8u) == rd32(arg1 + 4u)) goto L_10261f4c;
    eax = rd32(arg1 + 4u);
    t6 = rd32(arg1 + 0xcu);
    wr32(arg1 + 4u, eax + 1u);
    g->eax = eax;
    g->edx = rd32(t6);
    t7 = rd32(t6);
    g->esp = sp0 - 0x14u;
    t8 = cow_thiscall(g, rd32(t7 + 0x1cu), t6, 1, eax);
    t9 = g->edx;
    if (t8 == 0u)
    {
        edx = t9;
        goto L_10261f71;
    }
    edx = t9;
    esi = t8;
    g->esp = sp0 - 0x14u;
    t10 = cow_thiscall(g, COW_IMG(0x10269bd0u), arg1 + 0x18u, 1, esi);
    if (t10 == 0u)
    {
        t11 = rd32(sp0 + 0xcu);
        wr32(t11, esi + 0xcu);
        g->esp = sp0 - 0x14u;
        cow_thiscall(g, rd32(rd32(esi + 0xcu) + 4u), t11, 1, esi + 0xcu);
        t12 = rd32(sp0 + 0xcu) + 4u;
        wr32(sp0 + 0xcu, t12);
        cow_fastcall(g, COW_IMG(0x10269cb0u), arg1 + 0x18u, t12, 1, esi);
        ebp = ebp - 1u;
        loc_4 = loc_4 + 1u;
    }
    if (ebp != 0u) goto L_10261eee;
L_10261f4c: ;
    if (arg4 != 0u)
    {
        wr32(arg4, loc_4);
    }
    g->edx = loc_4;
    return arg2 != loc_4;
L_10261f71: ;
    g->edx = edx;
    return 0x80040203u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10261e70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10261e70(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
