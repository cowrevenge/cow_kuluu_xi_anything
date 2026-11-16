/* f_0x10264980 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10264980(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327cd8u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, self);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    if (rd32(self + 0x18u) != 0u)
    {
        eax = rd32(self + 0x18u);
        loc_c = t1;
        goto L_102649b9;
    }
    loc_c = t1;
    wr32(g->fs_base, loc_c);
    return 0x80040209u;
L_102649b9: ;
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x1cu, sp0 - 0x10u);
    wr32(sp0 - 0x20u, COW_IMG(0x1033e2b8u));
    wr32(sp0 - 0x24u, eax);
    wr32(sp0 - 4u, 0u);
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(rd32(eax)), rd32(eax), 3, eax, COW_IMG(0x1033e2b8u), sp0 - 0x10u);
    t2 = g->edx;
    if (1u)
    {
        edx = t2;
        goto L_10264a28;
    }
    edx = t2;
    wr32(sp0 - 0x1cu, arg1);
    wr32(sp0 - 0x20u, 0u);
    g->eax = 0u;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t3 = cow_thiscall(g, rd32(rd32(0u) + 0xcu), rd32(0u), 2, 0u, arg1);
    t4 = g->edx;
    if (t3 != 0u)
    {
        edx = t4;
        goto L_10264a28;
    }
    edx = t4;
    wr32(sp0 - 0x1cu, arg1);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t5 = cow_thiscall(g, COW_IMG(0x10264a60u), self, 1, arg1);
    t6 = g->ecx;
    t7 = g->edx;
    wr32(sp0 - 4u, 0xffffffffu);
    if ((int32_t)t5 < 0)
    {
        eax = rd32(sp0 - 0x10u);
        ecx = t6;
        esi = t5;
        goto L_10264a3e;
    }
    eax = rd32(sp0 - 0x10u);
    edx = t7;
    if (eax != 0u)
    {
        wr32(sp0 - 0x1cu, eax);
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
    }
    t8 = rd32(sp0 - 0xcu);
    t9 = rd32(sp0 - 0x14u);
    t10 = rd32(sp0 - 0x18u);
    wr32(g->fs_base, t8);
    g->esi = t9;
    g->edi = t10;
    return 0u;
L_10264a28: ;
    wr32(sp0 - 0x1cu, arg1);
    g->esp = sp0 - 0x18u;
    t11 = cow_thiscall(g, COW_IMG(0x10264b30u), self, 1, arg1);
    t12 = g->ecx;
    wr32(sp0 - 4u, 0xffffffffu);
    eax = 0u;
    ecx = t12;
    esi = t11;
L_10264a3e: ;
    if (eax != 0u)
    {
        wr32(sp0 - 0x1cu, eax);
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, rd32(rd32(eax) + 8u), ecx, 1, eax);
    }
    t13 = rd32(sp0 - 0xcu);
    t14 = rd32(sp0 - 0x14u);
    t15 = rd32(sp0 - 0x18u);
    wr32(g->fs_base, t13);
    g->esi = t14;
    g->edi = t15;
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10264980(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10264980(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
