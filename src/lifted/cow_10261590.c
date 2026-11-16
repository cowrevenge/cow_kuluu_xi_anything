/* f_0x10261590 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10261590(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t20;
    uint32_t t21;
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
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327998u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_ebp);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    t2 = rd32(arg1 + 0x2cu);
    wr32(sp0 - 0x28u, t2);
    wr32(sp0 - 0x14u, t2);
    wr32(sp0 - 0x10u, t2);
    g->edx = in_edx;
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, rd32(COW_IMG(0x1032918cu)), self, 1, t2);
    t3 = g->ecx;
    t4 = g->edx;
    wr32(sp0 - 4u, 0u);
    if (rd32(arg1 + 8u) != 0u)
    {
        eax = rd32(arg1 + 8u);
        ecx = t3;
        edx = t4;
        esi = t2;
        goto L_10261609;
    }
    edx = t4;
    g->eax = rd32(arg1 - 0xcu);
    g->edx = edx;
    t5 = rd32(arg1 - 0xcu);
    g->esp = sp0 - 0x24u;
    t6 = cow_thiscall(g, rd32(t5 + 0x18u), arg1 - 0xcu, 0);
    t7 = g->ecx;
    t8 = g->edx;
    if ((int32_t)t6 <= 0)
    {
        eax = t6;
        ecx = t7;
        edx = t8;
        goto L_10261605;
    }
    eax = t6;
    ebp = t6;
    edi = 0u;
L_102615e0: ;
    wr32(sp0 - 0x28u, edi);
    g->eax = eax;
    g->edx = rd32(arg1 - 0xcu);
    t9 = rd32(arg1 - 0xcu);
    g->esp = sp0 - 0x24u;
    t10 = cow_thiscall(g, rd32(t9 + 0x1cu), arg1 - 0xcu, 1, edi);
    t11 = g->edx;
    if (rd32(t10 + 0x18u) == 0u)
    {
        eax = t10;
        ecx = rd32(t10 + 0x18u);
        edx = t11;
        goto L_10261600;
    }
    eax = t10;
    g->eax = eax;
    g->edx = rd32(eax);
    t12 = rd32(eax);
    g->esp = sp0 - 0x24u;
    t13 = cow_thiscall(g, rd32(t12 + 0x14u), eax, 0);
    t14 = g->ecx;
    t15 = g->edx;
    if ((int32_t)t13 < 0)
    {
        ecx = t14;
        edx = t15;
        ebx = t13;
        goto L_1026162e;
    }
    eax = t13;
    ecx = t14;
    edx = t15;
L_10261600: ;
    if ((int32_t)(edi + 1u) < (int32_t)ebp)
    {
        edi = edi + 1u;
        goto L_102615e0;
    }
L_10261605: ;
    esi = rd32(sp0 - 0x14u);
L_10261609: ;
    wr32(sp0 - 0x28u, esi);
    wr32(arg1 + 8u, 1u);
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, esi);
    eax = 0u;
L_10261619: ;
    t17 = rd32(sp0 - 0xcu);
    t18 = rd32(sp0 - 0x18u);
    t19 = rd32(sp0 - 0x1cu);
    t20 = rd32(sp0 - 0x20u);
    t21 = rd32(sp0 - 0x24u);
    wr32(g->fs_base, t17);
    g->ebx = t18;
    g->esi = t20;
    g->edi = t21;
    g->ebp = t19;
    return eax;
L_1026162e: ;
    t16 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x28u, t16);
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, t16);
    eax = ebx;
    goto L_10261619;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10261590(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10261590(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
