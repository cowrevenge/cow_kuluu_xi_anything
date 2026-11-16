/* f_0x1025f5b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1025f5b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
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
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327758u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, self);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x1cu, self + 0x94u);
    wr32(sp0 - 0x10u, self + 0x94u);
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(COW_IMG(0x1032918cu)), self, 1, self + 0x94u);
    t2 = g->edx;
    wr32(sp0 - 4u, 0u);
    if (rd32(self + 0x64u) == 1u)
    {
        eax = 1u;
        ecx = rd32(self + 0x64u);
        edx = t2;
        goto L_1025f63c;
    }
    ecx = rd32(self + 0x64u);
    edx = t2;
    wr32(sp0 - 0x1cu, 1u);
    wr32(self + 0x64u, 1u);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(COW_IMG(0x1032940cu)), ecx, 1, 1u);
    t3 = g->edx;
    cow_thiscall(g, rd32(rd32(self) + 0x40u), self, 0);
    if (rd32(self + 0x6cu) != 0u)
    {
        eax = rd32(self + 0x6cu);
        edx = rd32(self);
        goto L_1025f62a;
    }
    eax = rd32(self + 0x6cu);
    edx = rd32(self);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t4 = cow_thiscall(g, rd32(edx + 0x60u), self, 0);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x1cu, self + 0x94u);
    g->edx = t6;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), t5, 1, self + 0x94u);
    t7 = g->edx;
    t8 = rd32(sp0 - 0xcu);
    t9 = rd32(sp0 - 0x14u);
    t10 = rd32(sp0 - 0x18u);
    wr32(g->fs_base, t8);
    g->esi = t9;
    g->edi = t10;
    g->edx = t7;
    return t4;
L_1025f62a: ;
    wr32(sp0 - 0x1cu, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t11 = cow_thiscall(g, rd32(edx + 0x54u), self, 1, eax);
    t12 = g->ecx;
    t13 = g->edx;
    if (t11 != 0u)
    {
        eax = t11;
        ecx = t12;
        edx = t13;
    }
    else
    {
        ecx = t12;
        edx = t13;
        t14 = rd32(self + 0x54u);
        wr32(sp0 - 0x1cu, t14);
        g->eax = t14;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t15 = cow_thiscall(g, rd32(COW_IMG(0x103291c4u)), ecx, 1, t14);
        t16 = g->ecx;
        t17 = g->edx;
        eax = t15;
        ecx = t16;
        edx = t17;
    }
L_1025f63c: ;
    wr32(sp0 - 0x1cu, self + 0x94u);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, self + 0x94u);
    t18 = g->edx;
    t19 = rd32(sp0 - 0xcu);
    wr32(g->fs_base, t19);
    g->edx = t18;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025f5b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025f5b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
