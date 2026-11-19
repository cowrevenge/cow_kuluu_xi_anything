/* f_0x1019f4a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1019f4a0(Guest* g)
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
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
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
    cow_frame(g, sp0, 28u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1019f4ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_1019f4cc;
    case 0x1019f4d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_1019f4d1;
    case 0x1019f4d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_1019f4d6;
    case 0x1019f4dau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_1019f4da;
    case 0x1019f4f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_1019f4f0;
    case 0x1019f4ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1019f4ff;
    case 0x1019f535u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1019f535;
    default: break;
    }
#endif

    COW_AT(1019f4a0)
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    t1 = rd32(COW_IMG(0x10456a28u));
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    if ((int8_t)rd8(t1 + 0x18u) >= 0)
    {
        eax = t1;
        ecx = rd32(t1 + 8u);
        edx = (in_edx & 0xffffff00u) | rd8(t1 + 0x18u);
        goto L_1019f4d6;
    }
    eax = t1;
    ecx = rd32(t1 + 8u);
    edx = (in_edx & 0xffffff00u) | rd8(t1 + 0x18u);
    COW_AT(1019f4cc)
    if (ecx == 2u) goto L_1019f4da;
    COW_AT(1019f4d1)
    if (ecx == 3u) goto L_1019f4da;
L_1019f4d6: ;
    COW_AT(1019f4d6)
    if (ecx == 0u) goto L_1019f4f0;
L_1019f4da: ;
    COW_AT(1019f4da)
    wr32(sp0 - 0x14u, 1u);
    t2 = rd32(self + 8u);
    wr32(sp0 - 0x18u, t2);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_call_regs(g, COW_IMG(0x1015e790u), t2, COW_IMG(0x10621838u), g->edx, 0, 2, t2, 1u);
    t4 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = t4;
    return t3;
L_1019f4f0: ;
    COW_AT(1019f4f0)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t5 = cow_thiscall(g, COW_IMG(0x1011ba40u), rd32(COW_IMG(0x1062193cu)), 0);
    t6 = g->edx;
    if ((uint8_t)t5 == 0u)
    {
        eax = t5;
        edx = t6;
    }
    else
    {
        eax = t5;
        edx = t6;
    COW_AT(1019f4ff)
        wr32(sp0 - 0x14u, sp0 - 8u);
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, COW_IMG(0x1011a710u), rd32(self + 8u), 1, sp0 - 8u);
        t7 = (uint32_t)(int16_t)rd16(sp0 - 6u);
        wr32(sp0 - 0x14u, t7);
        t8 = (uint32_t)(int16_t)rd16(sp0 - 8u) + (uint32_t)(int16_t)rd16(rd32(COW_IMG(0x1062193cu)) + 0x44u) - (uint32_t)(int16_t)rd16(sp0 - 4u) + 3u;
        wr32(sp0 - 0x18u, t8);
        g->edx = (uint32_t)(int16_t)rd16(sp0 - 8u);
        t9 = rd16(sp0 - 8u);
        t10 = cow_call_regs(g, COW_IMG(0x10119110u), t8, rd32(self + 8u), g->edx, 0, 2, t8, t7);
        t11 = g->edx;
        eax = t10;
        edx = t11;
    }
    COW_AT(1019f535)
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t12 = cow_thiscall(g, COW_IMG(0x101192b0u), rd32(self + 8u), 2, 1u, 0u);
    t13 = g->edx;
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 0x10u);
    g->edx = t13;
    t14 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 0x10u, 1u);
    t15 = g->edx;
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 2u);
    g->edx = t15;
    t16 = cow_thiscall(g, COW_IMG(0x101192b0u), rd32(self + 8u), 2, 2u, 0u);
    t17 = g->edx;
    wr32(sp0 - 0x14u, 2u);
    wr32(sp0 - 0x18u, 0x10u);
    g->edx = t17;
    t18 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 0x10u, 2u);
    t19 = g->edx;
    wr32(sp0 - 0x14u, 3u);
    wr32(sp0 - 0x18u, 0x10u);
    g->edx = t19;
    cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 0x10u, 3u);
    t20 = g->edx;
    t21 = rd32(self + 8u);
    t22 = rd32(sp0 - 0x10u);
    wr8(t21 + 0x86u, 0u);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = t22;
    g->edx = t20;
    return t21;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1019f4a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1019f4ccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1019f4d1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1019f4d6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1019f4dau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1019f4f0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1019f4ffu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1019f535u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1019f4a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1019f4a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
