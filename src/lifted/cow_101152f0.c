/* f_0x101152f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_101152f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
    uint32_t t22;
    uint32_t t23;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 56u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101152fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_101152fc;
    case 0x10115306u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10115306;
    case 0x10115312u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10115312;
    case 0x10115383u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10115383;
    case 0x1011538du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011538d;
    case 0x10115454u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10115454;
    case 0x1011545bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011545b;
    case 0x10115463u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10115463;
    case 0x1011548eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011548e;
    case 0x10115495u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10115495;
    case 0x1011549du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011549d;
    case 0x101154acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101154ac;
    default: break;
    }
#endif

    COW_AT(101152f0)
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    g->ecx = self;
    g->esp = sp0 - 0x18u;
    t1 = cow_call_regs(g, COW_IMG(0x1026cc50u), g->eax, g->ecx, in_edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(101152fc)
    wr32(sp0 - 0x1cu, 0x4f1b0u);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t4 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x4f1b0u, in_edi, in_esi);
    t5 = g->ecx;
    t6 = g->edx;
    eax = t4;
    ecx = t5;
    edx = t6;
    COW_AT(10115306)
    wr32(sp0 - 0x20u, 0x1a34u);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t7 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x1a34u, 0x4f1b0u, rd32(sp0 - 0x18u));
    esi = eax;
    eax = t7;
    COW_AT(10115312)
    t8 = eax;
    edi = esi;
    eax = 0xffffffffu;
    ecx = 0x13c6cu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    edi = t8;
    eax = 0xffffffffu;
    ecx = 0x68du;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(esi + 0x4f1acu, t8);
    wr8(esi + 0x16d0u, 2u);
    wr32(esi + 0x3f12cu, esi + 0x2f0d4u);
    wr32(esi + 0x3f130u, 1u);
    wr32(esi + 0x3f134u, 0u);
    wr32(esi + 0x3f138u, esi + 0x16d0u);
    wr32(esi + 0x3f13cu, 0u);
    wr32(esi + 0x3f148u, 0u);
    wr32(esi + 0x3f140u, 0u);
    wr32(esi + 0x3f144u, 0u);
    eax = esi + 0x16d0u;
    edx = t8;
    ebp = t8 + 0x20u - arg1;
    edi = arg1;
L_10115383: ;
    COW_AT(10115383)
    t9 = rd8(edi);
    wr8(ebp + edi, (uint8_t)t9);
    if ((uint8_t)t9 != 0u)
    {
        eax = (eax & 0xffffff00u) | t9;
        edi = edi + 1u;
        goto L_10115383;
    }
    COW_AT(1011538d)
    wr32(edx, rd32(arg3));
    t10 = rd32(arg3 + 4u);
    wr32(edx + 4u, t10);
    t11 = rd32(arg3 + 8u);
    wr32(edx + 8u, t11);
    wr16(edx + 0xcu, rd16(arg3 + 0xcu));
    wr8(edx + 0xeu, rd8(arg3 + 0xeu));
    wr32(edx + 0x10u, rd32(arg4));
    t12 = rd32(arg4 + 4u);
    wr32(edx + 0x14u, t12);
    t13 = rd32(arg4 + 8u);
    wr32(edx + 0x18u, t13);
    t14 = rd32(arg4 + 0xcu);
    wr32(edx + 0x1cu, t14);
    wr32(edx + 0xa18u, rd32(arg5));
    t15 = rd32(arg5 + 4u);
    wr32(edx + 0xa1cu, t15);
    wr32(edx + 0x1a08u, rd32(arg6));
    t16 = rd32(arg6 + 4u);
    wr32(edx + 0x1a0cu, t16);
    t17 = rd32(arg6 + 8u);
    wr32(edx + 0x1a10u, t17);
    wr16(edx + 0x1a14u, rd16(arg6 + 0xcu));
    t18 = rd8(arg6 + 0xeu);
    wr8(edx + 0xfu, 0u);
    wr8(edx + 0x1a16u, (uint8_t)t18);
    wr8(edx + 0x1a17u, 0u);
    wr32(sp0 - 0x1cu, esi + 0x3f12cu);
    wr32(edx + 0x120u, arg2);
    wr32(edx + 0x134u, 0u);
    wr32(edx + 0xa20u, 0u);
    wr32(edx + 0x13cu, 0u);
    wr32(edx + 0x1a24u, 0u);
    wr32(edx + 0x1a28u, 0u);
    wr32(edx + 0x1a2cu, 0u);
    wr32(edx + 0x1a30u, 0u);
    g->eax = esi + 0x3f12cu;
    g->ecx = arg2;
    g->esp = sp0 - 0x10u;
    t19 = cow_call_regs(g, COW_IMG(0x1026d72cu), g->eax, g->ecx, edx, 1, 3, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t20 = g->ecx;
    eax = t19;
    ecx = t20;
    COW_AT(10115454)
    if (eax != 0u) goto L_10115463;
    COW_AT(1011545b)
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    return eax;
L_10115463: ;
    COW_AT(10115463)
    wr32(sp0 - 0x1cu, 0x10u);
    wr32(sp0 - 0x20u, 0x10u);
    wr32(sp0 - 0x24u, 0x400u);
    wr32(sp0 - 0x28u, 1u);
    wr32(sp0 - 0x2cu, esi + 0x16d1u);
    wr32(sp0 - 0x30u, sp0 - 8u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0x34u, esi + 0x2f0d4u);
    wr32(sp0 - 4u, 0u);
    g->eax = esi + 0x2f0d4u;
    g->ecx = ecx;
    g->edx = esi + 0x16d1u;
    g->esp = sp0 - 0x18u;
    t21 = cow_cdecl(g, COW_IMG(0x1026d886u), 7, esi + 0x2f0d4u, sp0 - 8u, esi + 0x16d1u, 1u, 0x400u, 0x10u, 0x10u);
    t22 = g->ecx;
    t23 = g->edx;
    eax = t21;
    ecx = t22;
    edx = t23;
    COW_AT(1011548e)
    if (eax != 0u) goto L_1011549d;
    COW_AT(10115495)
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    return eax;
L_1011549d: ;
    COW_AT(1011549d)
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, esi + 0x3f12cu);
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x1026d9d1u), 3, esi + 0x3f12cu, 0u, 1u);
    COW_AT(101154ac)
    wr32(esi + 0x4f1a8u, 1u);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    return esi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101152f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101152fcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10115306u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x1cu, 0x4f1b0u);
        (void)sp0;
        return 1;
    }
    case 0x10115312u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10115383u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1011538du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10115454u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1011545bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10115463u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1011548eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        wr32(sp0 - 0x30u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10115495u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x30u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1011549du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        wr32(sp0 - 0x30u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101154acu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x30u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101152f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101152f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
