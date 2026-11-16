/* f_0x10028850 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10028850(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
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
    esi = arg2;
L_10028881: ;
    if (rd32(esi + 4u) != 0u) goto L_10028896;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, COW_IMG(0x10028b90u), esi, 0);
    t3 = g->edx;
    if ((int32_t)t2 >= (int32_t)(edi + 0x20u)) goto L_100288a3;
    edx = t3;
L_10028896: ;
    if (rd32(esi + 0x10u) != arg3)
    {
        esi = rd32(esi + 0x10u);
        goto L_10028881;
    }
    g->edx = edx;
    return 0u;
L_100288a3: ;
    t4 = rd32(esi + 8u);
    t5 = rd32(COW_IMG(0x104570e0u));
    t6 = rd32(esi + 0x18u);
    wr32(esi + 0x1cu, t5);
    wr32(esi + 4u, 1u);
    wr32(esi + 0x18u, t6 & 0xfffffffcu);
    if (t4 == edi + esi + 0x20u)
    {
        edx = t5;
        goto L_10028907;
    }
    eax = edi + esi + 0x20u;
    ecx = t4;
    wr32(eax + 4u, 0u);
    t7 = rd32(esi + 8u);
    wr32(eax + 8u, t7);
    wr32(eax + 0xcu, esi);
    wr32(ecx + 0xcu, eax);
    t8 = rd32(esi + 0x10u);
    wr32(esi + 8u, eax);
    wr32(eax + 0x10u, t8);
    wr32(t8 + 0x14u, eax);
    if (rd32(esi + 0x14u) == 0u)
    {
        edx = t7;
        goto L_100288f9;
    }
    ecx = rd32(esi + 0x14u);
    edx = t7;
    wr32(eax + 0x14u, ecx);
    wr32(ecx + 0x10u, eax);
    g->edx = edx;
    return esi;
L_100288f9: ;
    wr32(eax + 0x14u, esi);
    wr32(esi + 0x10u, eax);
    g->edx = edx;
    return esi;
L_10028907: ;
    if (rd32(esi + 0x14u) != 0u)
    {
        eax = rd32(esi + 0x14u);
        t9 = rd32(esi + 0x10u);
        wr32(eax + 0x10u, t9);
        t10 = rd32(esi + 0x14u);
        wr32(rd32(esi + 0x10u) + 0x14u, t10);
        edx = t9;
    }
    g->edx = edx;
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10028850(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10028850(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
