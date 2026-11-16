/* f_0x10261430 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10261430(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_c;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327958u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    if (rd32(sp0 + 8u) != 0u)
    {
        eax = t1;
        ebx = rd32(sp0 + 8u);
        loc_c = t1;
        goto L_10261469;
    }
    loc_c = t1;
    wr32(g->fs_base, loc_c);
    return 0x80004003u;
L_10261469: ;
    t2 = rd32(arg1 + 0x2cu);
    wr32(sp0 - 0x1cu, t2);
    wr32(sp0 + 8u, t2);
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(COW_IMG(0x1032918cu)), self, 1, t2);
    t3 = g->ecx;
    t4 = g->edx;
    wr32(sp0 - 4u, 0u);
    if (rd32(arg1 + 0xcu) == 0u)
    {
        eax = rd32(arg1 + 0xcu);
        ecx = t3;
        esi = t2;
    }
    else
    {
        eax = rd32(arg1 + 0xcu);
        edx = t4;
        esi = t2;
        wr32(sp0 - 0x1cu, eax);
        g->eax = eax;
        t5 = rd32(eax);
        g->esp = sp0 - 0x18u;
        t6 = cow_thiscall(g, rd32(t5 + 4u), t5, 1, eax);
        t7 = g->ecx;
        eax = t6;
        ecx = t7;
    }
    wr32(sp0 - 0x1cu, esi);
    t8 = rd32(arg1 + 0xcu);
    wr32(ebx, t8);
    g->edx = t8;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, esi);
    t9 = g->edx;
    t10 = rd32(sp0 - 0xcu);
    t11 = rd32(sp0 - 0x14u);
    t12 = rd32(sp0 - 0x18u);
    wr32(g->fs_base, t10);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = t11;
    g->edi = t12;
    g->edx = t9;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10261430(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10261430(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
