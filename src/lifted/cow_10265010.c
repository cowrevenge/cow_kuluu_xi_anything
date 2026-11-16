/* f_0x10265010 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10265010(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327d58u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    if (rd32(sp0 + 4u) == 0xcu)
    {
        eax = rd32(sp0 + 4u) - 0xcu;
        edi = rd32(sp0 + 4u);
        loc_c = t1;
        esi = 0u;
    }
    else
    {
        eax = rd32(sp0 + 4u) - 0xcu;
        edi = rd32(sp0 + 4u);
        loc_c = t1;
        esi = edi + 4u;
    }
    wr32(sp0 - 0x1cu, esi);
    wr32(sp0 + 4u, esi);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t2 = cow_thiscall(g, rd32(COW_IMG(0x1032918cu)), self, 1, esi);
    t3 = g->ecx;
    t4 = g->edx;
    wr32(sp0 - 4u, 0u);
    if (arg2 == 0u)
    {
        ecx = t3;
        edx = t4;
    }
    else
    {
        eax = t2;
        edx = t4;
        wr32(sp0 - 0x1cu, arg2);
        g->edx = edx;
        t5 = rd32(arg2);
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, rd32(t5 + 4u), t5, 1, arg2);
        t6 = g->ecx;
        t7 = g->edx;
        ecx = t6;
        edx = t7;
    }
    if (rd32(edi + 0x4cu) == 0u)
    {
        eax = rd32(edi + 0x4cu);
    }
    else
    {
        eax = rd32(edi + 0x4cu);
        wr32(sp0 - 0x1cu, eax);
        g->eax = eax;
        g->edx = rd32(eax);
        t8 = rd32(eax);
        g->esp = sp0 - 0x18u;
        t9 = cow_thiscall(g, rd32(t8 + 8u), ecx, 1, eax);
        t10 = g->ecx;
        t11 = g->edx;
        eax = t9;
        ecx = t10;
        edx = t11;
    }
    wr32(sp0 - 0x1cu, esi);
    wr32(edi + 0x4cu, arg2);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, esi);
    t12 = g->edx;
    t13 = rd32(sp0 - 0xcu);
    t14 = rd32(sp0 - 0x14u);
    t15 = rd32(sp0 - 0x18u);
    wr32(g->fs_base, t13);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = t14;
    g->edi = t15;
    g->edx = t12;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10265010(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10265010(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
