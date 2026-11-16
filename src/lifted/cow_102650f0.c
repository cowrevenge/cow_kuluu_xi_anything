/* f_0x102650f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102650f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
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
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327d78u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    if (rd32(sp0 + 4u) == 0xcu)
    {
        eax = rd32(sp0 + 4u) - 0xcu;
        esi = rd32(sp0 + 4u);
        loc_c = t1;
        edi = 0u;
    }
    else
    {
        eax = rd32(sp0 + 4u) - 0xcu;
        esi = rd32(sp0 + 4u);
        loc_c = t1;
        edi = esi + 4u;
    }
    wr32(sp0 - 0x1cu, edi);
    wr32(sp0 + 4u, edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(COW_IMG(0x1032918cu)), self, 1, edi);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 4u, 0u);
    if (rd32(esi + 0x44u) != 0u)
    {
        eax = rd32(esi + 0x44u);
        ecx = t2;
        edx = t3;
        goto L_10265184;
    }
    ecx = t2;
    edx = t3;
    t4 = rd32(esi + 0x48u);
    wr32(esi + 0x44u, 1u);
    if (t4 == 0u)
    {
        eax = t4;
        goto L_1026514b;
    }
    eax = t4;
    wr32(esi + 0x48u, 0u);
L_10265184: ;
    wr32(sp0 - 0x1cu, edi);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, edi);
    t15 = g->edx;
    t16 = rd32(sp0 - 0xcu);
    t17 = rd32(sp0 - 0x14u);
    t18 = rd32(sp0 - 0x18u);
    wr32(g->fs_base, t16);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = t17;
    g->edi = t18;
    g->edx = t15;
    return 0u;
L_1026514b: ;
    g->eax = eax;
    g->edx = rd32(esi - 0xcu);
    t5 = rd32(esi - 0xcu);
    g->esp = sp0 - 0x18u;
    t6 = cow_thiscall(g, rd32(t5 + 0x14u), esi - 0xcu, 0);
    t7 = g->ecx;
    t8 = g->edx;
    if ((int32_t)t6 >= 0)
    {
        ecx = t7;
        edx = t8;
        goto L_1026517e;
    }
    eax = t6;
    ecx = t7;
    edx = t8;
    ebx = t6;
    wr32(sp0 - 0x1cu, edi);
    wr32(esi + 0x44u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, edi);
    t9 = g->edx;
    t10 = rd32(sp0 - 0xcu);
    wr32(g->fs_base, t10);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->edx = t9;
    return ebx;
L_1026517e: ;
    wr32(sp0 - 0x1cu, esi);
    g->eax = rd32(esi);
    g->edx = edx;
    t11 = rd32(esi);
    g->esp = sp0 - 0x18u;
    t12 = cow_thiscall(g, rd32(t11 + 4u), ecx, 1, esi);
    t13 = g->ecx;
    t14 = g->edx;
    eax = t12;
    ecx = t13;
    edx = t14;
    goto L_10265184;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102650f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102650f0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
