/* f_0x10261800 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10261800(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x103279f8u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, self);
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    if (arg3 != 0u)
    {
        loc_c = t1;
        t2 = rd32(rd32(sp0 + 4u) + 0x2cu);
        wr32(sp0 - 0x24u, t2);
        wr32(sp0 - 0x10u, t2);
        g->edx = in_edx;
        t3 = rd32(sp0 + 4u);
        g->esp = sp0 - 0x20u;
        cow_thiscall(g, rd32(COW_IMG(0x1032918cu)), self, 1, t2);
        t4 = g->edx;
        wr32(sp0 - 4u, 0u);
        g->eax = rd32(t3 - 0xcu);
        t5 = rd32(t3 - 0xcu);
        t6 = cow_thiscall(g, rd32(t5 + 0x18u), t3 - 0xcu, 0);
        t7 = g->ecx;
        wr32(sp0 + 4u, t6);
        if ((int32_t)t6 <= 0)
        {
            eax = t6;
            ecx = t7;
            ebp = t2;
            goto L_10261879;
        }
        eax = t6;
        ebx = 0u;
        ebp = t2;
        esi = t3 - 0xcu;
L_10261854: ;
        wr32(sp0 - 0x24u, ebx);
        g->eax = eax;
        g->edx = rd32(esi);
        t8 = rd32(esi);
        g->esp = sp0 - 0x20u;
        t9 = cow_thiscall(g, rd32(t8 + 0x1cu), esi, 1, ebx);
        t10 = g->edx;
        wr32(sp0 - 0x24u, arg2);
        t11 = rd32(t9 + 0x14u);
        wr32(sp0 - 0x28u, t11);
        t12 = cow_call_regs(g, COW_IMG(0x102660f0u), t11, arg2, g->edx, 0, 2, t11, arg2);
        t13 = g->ecx;
        if (t12 == 0u)
        {
            edi = t9;
            goto L_102618a4;
        }
        ecx = t13;
        if ((int32_t)(ebx + 1u) < (int32_t)rd32(sp0 + 4u))
        {
            eax = rd32(sp0 + 4u);
            ebx = ebx + 1u;
            goto L_10261854;
        }
        eax = rd32(sp0 + 4u);
L_10261879: ;
        wr32(sp0 - 0x24u, ebp);
        wr32(arg3, 0u);
        g->edx = arg3;
        g->esp = sp0 - 0x20u;
        cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, ebp);
        t19 = g->edx;
        eax = 0x80040216u;
        edx = t19;
    }
    else
    {
        loc_c = t1;
        eax = 0x80004003u;
        edx = in_edx;
    }
L_1026188f: ;
    wr32(g->fs_base, loc_c);
    g->edx = edx;
    return eax;
L_102618a4: ;
    wr32(sp0 - 0x24u, edi + 0xcu);
    wr32(arg3, edi + 0xcu);
    g->eax = edi + 0xcu;
    g->edx = arg3;
    t14 = rd32(edi + 0xcu);
    g->esp = sp0 - 0x20u;
    t15 = cow_thiscall(g, rd32(t14 + 4u), t14, 1, edi + 0xcu);
    t16 = g->ecx;
    t17 = g->edx;
    wr32(sp0 - 0x24u, ebp);
    g->edx = t17;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), t16, 1, ebp);
    t18 = g->edx;
    eax = 0u;
    edx = t18;
    goto L_1026188f;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10261800(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10261800(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
