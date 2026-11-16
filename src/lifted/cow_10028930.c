/* f_0x10028930 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10028930(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(COW_IMG(0x104570dcu));
    wr32(COW_IMG(0x104570dcu), 0u);
    if ((arg1 + t1 + 0xfu & 0xfffffff0u) >= 0x20u)
    {
        edx = t1;
        edi = arg1 + t1 + 0xfu & 0xfffffff0u;
    }
    else
    {
        edx = t1;
        edi = 0x20u;
    }
    esi = arg3;
L_1002895c: ;
    if (rd32(esi + 0xcu) == 0u) goto L_100289b4;
    if (rd32(rd32(esi + 0x14u) + 4u) != 0u)
    {
        esi = rd32(esi + 0x14u);
        goto L_1002895c;
    }
    esi = rd32(esi + 0x14u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, COW_IMG(0x10028b90u), esi, 0);
    t3 = g->edx;
    if ((int32_t)t2 < (int32_t)(edi + 0x20u))
    {
        edx = t3;
        goto L_1002895c;
    }
    t4 = rd32(esi + 8u);
    t5 = rd32(COW_IMG(0x104570e0u));
    wr32(t4 - edi - 4u, t5);
    if (t4 - edi - 0x20u == esi)
    {
        edx = t5;
        goto L_100289b9;
    }
    eax = t4 - edi - 0x20u;
    ecx = t4;
    edx = t5;
    wr32(eax + 8u, ecx);
    wr32(eax + 0xcu, esi);
    wr32(ecx + 0xcu, eax);
    wr32(esi + 8u, eax);
    t6 = rd32(eax + 0x18u);
    wr32(eax + 4u, 1u);
    t7 = (t6 & 0xffffff00u) | (t6 & 0xfcu);
    wr32(eax + 0x18u, t7);
    g->edx = edx;
    return eax;
L_100289b4: ;
    g->edx = edx;
    return 0u;
L_100289b9: ;
    if (rd32(esi + 0x14u) != 0u)
    {
        eax = rd32(esi + 0x14u);
        t8 = rd32(esi + 0x10u);
        wr32(eax + 0x10u, t8);
        t9 = rd32(esi + 0x14u);
        t10 = rd32(esi + 0x10u);
        wr32(t10 + 0x14u, t9);
        edx = t10;
    }
    t11 = rd32(esi + 0x18u);
    wr32(esi + 4u, 1u);
    t12 = (t11 & 0xffffff00u) | (t11 & 0xfcu);
    wr32(esi + 0x18u, t12);
    g->edx = edx;
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10028930(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10028930(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
