/* f_0x10262390 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10262390(Guest* g)
{
    uint32_t edx;
    uint32_t loc_c;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 104u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327ad8u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x58u, in_esi);
    wr32(sp0 - 0x5cu, in_edi);
    if (arg2 != 0u)
    {
        loc_c = t1;
        goto L_102623c7;
    }
    loc_c = t1;
    wr32(g->fs_base, loc_c);
    return 0u;
L_102623c7: ;
    g->eax = rd32(rd32(arg1 + 8u));
    g->edx = in_edx;
    t2 = rd32(rd32(arg1 + 8u));
    g->esp = sp0 - 0x5cu;
    t3 = cow_thiscall(g, rd32(t2 + 0x10u), rd32(arg1 + 8u), 0);
    t4 = g->edx;
    if (t3 == rd32(arg1 + 0xcu))
    {
        edx = t4;
        goto L_102623f0;
    }
    edx = t4;
    t5 = rd32(sp0 - 0xcu);
    t6 = rd32(sp0 - 0x58u);
    t7 = rd32(sp0 - 0x5cu);
    wr32(g->fs_base, t5);
    g->esi = t6;
    g->edi = t7;
    g->edx = edx;
    return 0x80040203u;
L_102623f0: ;
    t8 = arg2 + rd32(arg1 + 4u);
    wr32(arg1 + 4u, t8);
    g->esp = sp0 - 0x5cu;
    cow_thiscall(g, COW_IMG(0x1026a150u), sp0 - 0x54u, 0);
    wr32(sp0 - 0x60u, sp0 - 0x54u);
    t9 = rd32(arg1 + 4u) - 1u;
    wr32(sp0 - 0x64u, t9);
    wr32(sp0 - 4u, 0u);
    g->eax = t9;
    g->edx = rd32(rd32(arg1 + 8u));
    t10 = rd32(rd32(arg1 + 8u));
    t11 = cow_thiscall(g, rd32(t10 + 0x34u), rd32(arg1 + 8u), 2, t9, sp0 - 0x54u);
    t12 = g->edx;
    wr32(sp0 - 4u, 0xffffffffu);
    cow_fastcall(g, COW_IMG(0x1026a140u), sp0 - 0x54u, t12, 0);
    t13 = g->edx;
    t14 = rd32(sp0 - 0xcu);
    t15 = rd32(sp0 - 0x58u);
    t16 = rd32(sp0 - 0x5cu);
    wr32(g->fs_base, t14);
    g->esi = t15;
    g->edi = t16;
    g->edx = t13;
    return t11 != 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10262390(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10262390(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
