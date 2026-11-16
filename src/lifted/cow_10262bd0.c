/* f_0x10262bd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10262bd0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327b78u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    t2 = rd32(rd32(sp0 + 4u) + 0x14u);
    wr32(sp0 - 0x18u, t2);
    t3 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t2);
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, rd32(COW_IMG(0x1032918cu)), self, 1, t2);
    t4 = g->edx;
    wr32(sp0 - 4u, 0u);
    if (rd32(rd32(t3 + 0x1cu) + 0x14u) == 0u)
    {
        ecx = rd32(rd32(t3 + 0x1cu) + 0x14u);
        edx = t4;
        esi = t2;
        edi = t3;
        goto L_10262c2a;
    }
    eax = rd32(t3 + 0x1cu);
    ecx = rd32(rd32(t3 + 0x1cu) + 0x14u);
    edx = t4;
    esi = t2;
    wr32(sp0 - 0x18u, esi);
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, esi);
    t5 = g->edx;
    t6 = rd32(sp0 - 0xcu);
    wr32(g->fs_base, t6);
    g->edx = t5;
    return 0x80040224u;
L_10262c2a: ;
    wr32(sp0 - 0x18u, edi - 0xcu);
    g->ecx = ecx;
    g->esp = sp0 - 0x14u;
    t7 = cow_call_regs(g, COW_IMG(0x10262c60u), g->eax, g->ecx, edx, 0, 1, edi - 0xcu);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x18u, esi);
    g->edx = t9;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), t8, 1, esi);
    t10 = g->edx;
    t11 = rd32(sp0 - 0xcu);
    wr32(g->fs_base, t11);
    g->edx = t10;
    return t7;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10262bd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10262bd0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
