/* f_0x100a9500 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100a9500(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
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
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
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
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 48u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100a9515u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_100a9515;
    case 0x100a9526u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_100a9526;
    case 0x100a9539u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; self = g->edi; goto E_100a9539;
    case 0x100a954au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a954a;
    case 0x100a9554u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a9554;
    case 0x100a955du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a955d;
    case 0x100a9561u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a9561;
    case 0x100a9565u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a9565;
    case 0x100a956cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a956c;
    case 0x100a9574u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a9574;
    case 0x100a9578u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a9578;
    case 0x100a9580u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a9580;
    case 0x100a9584u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a9584;
    case 0x100a9592u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a9592;
    case 0x100a9597u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a9597;
    case 0x100a959au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a959a;
    case 0x100a95a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a95a2;
    case 0x100a95c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a95c3;
    case 0x100a95e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a95e9;
    case 0x100a95fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; goto E_100a95fb;
    default: break;
    }
#endif

    COW_AT(100a9500)
    wr32(sp0 - 0xcu, in_ebp);
    wr32(sp0 - 0x10u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x1018c940u), rd32(self + 0x34u), 0);
    t2 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        ebp = t1;
        goto L_100a9526;
    }
    edx = t2;
    COW_AT(100a9515)
    wr32(sp0 - 0x14u, 1u);
    g->eax = rd32(self);
    g->edx = edx;
    t3 = rd32(self);
    g->esp = sp0 - 0x10u;
    t4 = cow_thiscall(g, rd32(t3 + 0x18u), self, 1, 1u);
    t5 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t5;
    return (t4 & 0xffffff00u) | 1u;
L_100a9526: ;
    COW_AT(100a9526)
    g->eax = eax;
    g->edx = rd32(ebp);
    t6 = rd32(ebp);
    g->esp = sp0 - 0x10u;
    t7 = cow_thiscall(g, rd32(t6 + 0x1e4u), ebp, 0);
    t8 = g->edx;
    if ((uint8_t)t7 == 0u)
    {
        eax = t7;
        edx = t8;
        goto L_100a95fb;
    }
    eax = t7;
    edx = t8;
    COW_AT(100a9539)
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, 0u);
    wr8(sp0 - 5u, 1u);
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x10085450u), ebp, 1, 0u);
    t9 = g->edx;
    edx = t9;
    esi = 0u;
L_100a954a: ;
    COW_AT(100a954a)
    if (rd32(rd32(self + 0x38u) + 0x20u) == 0u)
    {
        eax = rd32(self + 0x38u);
    COW_AT(100a955d)
        ecx = (uint32_t)(int16_t)rd16(eax + 0x24u);
    }
    else
    {
        eax = rd32(self + 0x38u);
        ecx = rd32(rd32(self + 0x38u) + 0x20u);
    COW_AT(100a9554)
        ecx = (uint32_t)(int16_t)rd16(rd32(ecx + 0xcu) + 0x1eu);
    }
    COW_AT(100a9561)
    if ((int32_t)esi >= (int32_t)ecx) goto L_100a959a;
    COW_AT(100a9565)
    if (rd32(eax + 0x20u) == 0u) goto L_100a9574;
    ecx = rd32(eax + 0x20u);
    COW_AT(100a956c)
    wr32(sp0 - 0x18u, esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t10 = cow_thiscall(g, COW_IMG(0x1018c980u), ecx, 1, esi);
    t11 = g->edx;
    eax = t10;
    edx = t11;
L_100a9580: ;
    COW_AT(100a9580)
    if (eax == 0u) goto L_100a9592;
    COW_AT(100a9584)
    g->eax = eax;
    g->edx = rd32(eax);
    t14 = rd32(eax);
    g->esp = sp0 - 0x14u;
    t15 = cow_thiscall(g, rd32(t14 + 0x1e4u), eax, 0);
    t16 = g->edx;
    if ((uint8_t)t15 != 0u)
    {
        edx = t16;
        goto L_100a9597;
    }
    edx = t16;
L_100a9592: ;
    COW_AT(100a9592)
    wr8(sp0 - 5u, 0u);
L_100a9597: ;
    COW_AT(100a9597)
    esi = esi + 1u;
    goto L_100a954a;
L_100a9574: ;
    COW_AT(100a9574)
    if (esi != 0u) goto L_100a9592;
    COW_AT(100a9578)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t12 = cow_thiscall(g, COW_IMG(0x10081550u), eax + 0x14u, 0);
    t13 = g->edx;
    eax = t12;
    edx = t13;
    goto L_100a9580;
L_100a959a: ;
    COW_AT(100a959a)
    if (rd8(sp0 - 5u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 5u);
    }
    else
    {
    COW_AT(100a95a2)
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x20u, 0xffffffffu);
        t17 = rd32(rd32(self + 0x34u) + 4u);
        wr32(sp0 - 0x24u, t17);
        wr32(sp0 - 0x28u, 7u);
        wr32(sp0 - 0x2cu, sp0 - 4u);
        g->eax = t17;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t18 = cow_thiscall(g, COW_IMG(0x100ce480u), ebp, 6, sp0 - 4u, 7u, t17, 0xffffffffu, 0u, 0u);
        t19 = g->edx;
        if (rd32(t18) == 0u)
        {
            eax = rd32(t18);
        }
        else
        {
            eax = rd32(t18);
            edx = t19;
    COW_AT(100a95c3)
            t20 = rd32(self + 0x34u);
            wr32(sp0 - 0x18u, t20);
            wr32(sp0 - 0x1cu, 0u);
            g->eax = eax;
            g->edx = edx;
            t21 = rd32(eax);
            g->esp = sp0 - 0x14u;
            t22 = cow_thiscall_cdecl(g, COW_IMG(0x1018ca20u), t20, 2, 0u, t20);
            t23 = g->edx;
            wr32(sp0 - 0x20u, t22);
            wr32(sp0 - 0x24u, ebp);
            t24 = cow_call_regs(g, COW_IMG(0x10056c70u), t22, t21, g->edx, 0, 4, ebp, t22, 0u, rd32(sp0 - 0x18u));
            wr32(t24 + 0xacu, COW_IMG(0x100a8db0u));
            wr32(t24 + 0xb0u, ebp);
            eax = t24;
        }
    }
    COW_AT(100a95e9)
    wr32(sp0 - 0x18u, 1u);
    g->eax = eax;
    g->edx = rd32(self);
    t25 = rd32(self);
    g->esp = sp0 - 0x14u;
    t26 = cow_thiscall(g, rd32(t25 + 0x18u), self, 1, 1u);
    t27 = g->edx;
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 0xcu);
    g->edx = t27;
    return (t26 & 0xffffff00u) | 1u;
L_100a95fb: ;
    COW_AT(100a95fb)
    g->esi = in_esi;
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 0xcu);
    g->edx = edx;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100a9500(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100a9515u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100a9526u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100a9539u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100a954au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100a9554u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100a955du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100a9561u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100a9565u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100a956cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100a9574u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100a9578u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100a9580u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100a9584u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100a9592u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100a9597u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100a959au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100a95a2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100a95c3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x2cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100a95e9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100a95fbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100a9500(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100a9500(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
