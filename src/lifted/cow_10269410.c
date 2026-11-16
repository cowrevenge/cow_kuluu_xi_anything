/* f_0x10269410 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10269410(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10328018u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_ebp);
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    wr32(sp0 - 0x2cu, self + 8u);
    wr32(sp0 - 0x10u, self + 8u);
    g->edx = in_edx;
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, rd32(COW_IMG(0x1032918cu)), self, 1, self + 8u);
    t2 = g->edx;
    wr32(sp0 - 4u, 0u);
    wr32(sp0 - 0x14u, 0u);
    if (rd32(arg1 + 0x30u) != 0u)
    {
        edx = t2;
        esi = self + 0x38u;
    }
    else
    {
        edx = t2;
        esi = self + 0x20u;
    }
    wr32(sp0 - 0x18u, rd32(esi));
    if (rd32(esi) == 0u)
    {
        eax = rd32(esi);
        ecx = 0u;
        goto L_10269490;
    }
    eax = rd32(esi);
    loc_18 = rd32(esi);
L_10269461: ;
    wr32(sp0 - 0x2cu, eax);
    g->ecx = esi;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t3 = cow_stdcall(g, COW_IMG(0x10269bb0u), 1, eax);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 == arg1)
    {
        ecx = t4;
        edx = t5;
        goto L_10269488;
    }
    edx = t5;
    wr32(sp0 - 0x2cu, sp0 - 0x18u);
    g->ecx = esi;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    cow_stdcall(g, COW_IMG(0x10269b90u), 1, sp0 - 0x18u);
    t6 = g->ecx;
    t7 = g->edx;
    if (rd32(sp0 - 0x18u) != 0u)
    {
        eax = rd32(sp0 - 0x18u);
        edx = t7;
        goto L_10269461;
    }
    eax = rd32(sp0 - 0x18u);
    ecx = t6;
    edx = t7;
    esi = 0x80040216u;
L_102694b4: ;
    wr32(sp0 - 0x2cu, self + 8u);
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, self + 8u);
    t14 = g->edx;
    t15 = rd32(sp0 - 0xcu);
    t16 = rd32(sp0 - 0x1cu);
    t17 = rd32(sp0 - 0x20u);
    t18 = rd32(sp0 - 0x24u);
    t19 = rd32(sp0 - 0x28u);
    wr32(g->fs_base, t15);
    g->ebx = t16;
    g->esi = t18;
    g->edi = t19;
    g->ebp = t17;
    g->edx = t14;
    return esi;
L_10269488: ;
    if (rd32(sp0 - 0x18u) != 0u)
    {
        eax = rd32(sp0 - 0x18u);
        goto L_10269497;
    }
    eax = rd32(sp0 - 0x18u);
L_10269490: ;
    esi = 0x80040216u;
    loc_1c = in_ebx;
    loc_20 = in_ebp;
    loc_24 = in_esi;
    loc_28 = in_edi;
    goto L_102694b4;
L_10269497: ;
    wr32(sp0 - 0x2cu, eax);
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, COW_IMG(0x10269c30u), esi, 1, eax);
    t8 = g->edx;
    wr32(sp0 - 0x2cu, arg1 + 0xcu);
    g->eax = arg1 + 0xcu;
    g->edx = t8;
    t9 = cow_thiscall(g, rd32(rd32(arg1 + 0xcu) + 8u), rd32(arg1 + 0xcu), 1, arg1 + 0xcu);
    t10 = g->edx;
    t11 = cow_fastcall(g, COW_IMG(0x10269570u), self, t10, 0);
    t12 = g->ecx;
    t13 = g->edx;
    eax = t11;
    ecx = t12;
    edx = t13;
    esi = rd32(sp0 - 0x14u);
    goto L_102694b4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10269410(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10269410(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
