/* f_0x1025f7f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1025f7f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x103277b8u));
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
    if (rd32(rd32(self + 0x78u) + 0x18u) != 0u)
    {
        eax = rd32(self + 0x78u);
        edx = t2;
        goto L_1025f847;
    }
    eax = rd32(self + 0x78u);
    ecx = rd32(rd32(self + 0x78u) + 0x18u);
    edx = t2;
    wr32(sp0 - 0x1cu, self + 0x94u);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, self + 0x94u);
    t3 = g->edx;
    t4 = rd32(sp0 - 0xcu);
    wr32(g->fs_base, t4);
    g->edx = t3;
    return 0u;
L_1025f847: ;
    wr32(sp0 - 0x1cu, in_ebx);
    if (eax == 0u)
    {
        ebx = 0u;
    }
    else
    {
        ebx = eax + 0xcu;
    }
    wr32(sp0 - 0x20u, eax + 0xcu);
    g->eax = eax + 0xcu;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t5 = cow_thiscall(g, rd32(rd32(eax + 0xcu) + 4u), rd32(eax + 0xcu), 1, eax + 0xcu);
    t6 = g->edx;
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, ebx);
    wr32(sp0 - 0x28u, 0x16u);
    t7 = cow_thiscall(g, COW_IMG(0x10261a00u), self, 3, 0x16u, ebx, 0u);
    t8 = rd32(self);
    wr32(self + 0x60u, 1u);
    g->edx = t8;
    cow_thiscall(g, rd32(t8 + 0x70u), self, 0);
    t9 = g->edx;
    t10 = rd32(self + 0x78u) + 0xcu;
    wr32(sp0 - 0x20u, t10);
    g->eax = t10;
    g->edx = t9;
    t11 = rd32(rd32(self + 0x78u) + 0xcu);
    t12 = cow_thiscall(g, rd32(t11 + 8u), t11, 1, t10);
    t13 = g->ecx;
    t14 = g->edx;
    wr32(sp0 - 0x20u, self + 0x94u);
    g->edx = t14;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), t13, 1, self + 0x94u);
    t15 = g->edx;
    t16 = rd32(sp0 - 0xcu);
    wr32(g->fs_base, t16);
    g->edx = t15;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025f7f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025f7f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
