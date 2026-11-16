/* f_0x100d12d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_100d12d0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    if (rd8(self + 0x8a4u) == 0u) goto L_100d12e9;
    eax = (in_eax & 0xffffff00u) | rd8(self + 0x8a4u);
    return eax & 0xffffff00u;
L_100d12e9: ;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x1002c7c0u), rd32(self + 0x7e4u), 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
        goto L_100d131d;
    }
    edx = t2;
    esi = t1;
L_100d12fa: ;
    t3 = rd32(esi + 0x1cu);
    wr32(sp0 - 4u, t3);
    if (rd32(esi + 0x1cu) == 0u)
    {
        eax = t3;
        goto L_100d1394;
    }
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 4u, 0);
    t5 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        eax = t4;
        edx = t5;
        goto L_100d1394;
    }
    edx = t5;
    if (rd32(esi + 8u) != 0u)
    {
        esi = rd32(esi + 8u);
        goto L_100d12fa;
    }
L_100d131d: ;
    wr32(sp0 - 0x14u, sp0 - 8u);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(rd32(self) + 0x1dcu), self, 1, sp0 - 8u);
    t6 = g->edx;
    if (rd32(sp0 - 8u) != 0u)
    {
        edx = t6;
        goto L_100d133c;
    }
    eax = rd32(sp0 - 8u);
    edx = t6;
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_100d133c: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t7 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 8u, 0);
    t8 = g->edx;
    if ((uint8_t)t7 != 0u) goto L_100d134f;
    eax = t7;
    edx = t8;
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->edx = edx;
    return eax;
L_100d134f: ;
    wr32(sp0 - 0x14u, sp0 - 4u);
    g->eax = sp0 - 4u;
    g->edx = rd32(self);
    t9 = rd32(self);
    g->esp = sp0 - 0x10u;
    t10 = cow_thiscall(g, rd32(t9 + 0x400u), self, 1, sp0 - 4u);
    t11 = g->edx;
    wr32(sp0 - 8u, rd32(t10));
    if (rd32(t10) == 0u)
    {
        edx = t11;
        goto L_100d137b;
    }
    edx = t11;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t12 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 8u, 0);
    t13 = g->edx;
    if ((uint8_t)t12 != 0u)
    {
        eax = t12;
        edx = t13;
        goto L_100d139c;
    }
    eax = t12;
    edx = t13;
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->edx = edx;
    return eax;
L_100d137b: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t14 = cow_thiscall(g, COW_IMG(0x10084400u), self, 0);
    t15 = g->edx;
    if (t14 != 7u)
    {
        eax = t14;
        edx = t15;
        goto L_100d139c;
    }
    edx = t15;
    wr32(sp0 - 0x14u, 0u);
    g->esp = sp0 - 0x10u;
    t16 = cow_fastcall(g, COW_IMG(0x10084480u), self, edx, 1, 0u);
    t17 = g->edx;
    if (t16 == 0u)
    {
        eax = t16;
        edx = t17;
        goto L_100d139c;
    }
    eax = t16;
    edx = t17;
L_100d1394: ;
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_100d139c: ;
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d12d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100d12d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
