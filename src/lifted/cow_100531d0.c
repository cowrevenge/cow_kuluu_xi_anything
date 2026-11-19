/* f_0x100531d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100531d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t loc_8;
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
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 32u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100531e0u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100531e0;
    case 0x100531ebu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100531eb;
    case 0x100531f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100531f6;
    case 0x1005321bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1005321b;
    case 0x10053220u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10053220;
    case 0x10053225u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10053225;
    case 0x1005322au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1005322a;
    case 0x10053247u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10053247;
    case 0x10053259u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10053259;
    case 0x10053262u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10053262;
    case 0x1005326cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1005326c;
    case 0x1005326fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1005326f;
    case 0x10053289u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10053289;
    case 0x100532a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_100532a9;
    case 0x100532b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_100532b6;
    case 0x100532d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100532d7;
    case 0x100532e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100532e9;
    case 0x100532ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100532eb;
    case 0x10053327u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10053327;
    case 0x1005332cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1005332c;
    case 0x10053331u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10053331;
    case 0x10053336u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10053336;
    case 0x10053343u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10053343;
    default: break;
    }
#endif

    COW_AT(100531d0)
    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    if (rd8(self + 0xdcu) & 1u)
    {
        eax = in_eax;
        goto L_100531eb;
    }
    COW_AT(100531e0)
    if ((rd32(self + 0xd8u) >> 8u & 8u) == 0u)
    {
        eax = rd32(self + 0xd8u);
        edx = in_edx;
        loc_4 = in_ebx;
        loc_8 = in_esi;
        loc_c = in_edi;
        goto L_10053259;
    }
    eax = rd32(self + 0xd8u);
L_100531eb: ;
    COW_AT(100531eb)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x100539e0u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        edx = t3;
    }
    else
    {
        ecx = t2;
        edx = t3;
    COW_AT(100531f6)
        wr32(sp0 - 0x10u, ecx);
        wr32(sp0 - 0x10u, 0u);
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t4 = cow_call_regs(g, COW_IMG(0x100538e0u), sp0 - 0x10u, self, g->edx, 0, 1, 0u);
        t5 = g->edx;
        if ((rd32(self + 0x34u) & 0xfu) + (rd8(self + 0x36u) & 1u) * 0x10u == 0x14u)
        {
            eax = (rd32(self + 0x34u) & 0xfu) + (rd8(self + 0x36u) & 1u) * 0x10u;
            edx = t5;
        }
        else
        {
            eax = (rd32(self + 0x34u) & 0xfu) + (rd8(self + 0x36u) & 1u) * 0x10u;
            ecx = rd32(self + 0x34u) & 0xfu;
            edx = t5;
    COW_AT(1005321b)
            if ((int32_t)eax < 1) goto L_10053225;
    COW_AT(10053220)
            if ((int32_t)eax < 14) goto L_1005322a;
L_10053225: ;
    COW_AT(10053225)
            if ((int32_t)eax <= 15) goto L_10053247;
L_1005322a: ;
    COW_AT(1005322a)
            wr32(sp0 - 0x10u, ecx);
            wr32(sp0 - 0x14u, 0u);
            wr32(sp0 - 0x10u, 0u);
            g->eax = sp0 - 0x10u;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t6 = cow_thiscall_cdecl(g, COW_IMG(0x1003b700u), self + 0x30u, 2, 0u, 0u);
            t7 = g->edx;
            wr32(sp0 - 0x18u, t6);
            g->edx = t7;
            g->esp = sp0 - 0x14u;
            t8 = cow_thiscall_cdecl(g, COW_IMG(0x1003b6d0u), self + 0x30u, 1, t6);
            t9 = g->edx;
            wr32(sp0 - 0x1cu, t8);
            g->ebx = 0u;
            g->esp = sp0 - 0xcu;
            t10 = cow_fastcall(g, COW_IMG(0x10053a00u), self, t9, 4, t8, rd32(sp0 - 0x18u), 0u, 0u);
            t11 = g->edx;
            eax = t10;
            edx = t11;
        }
    }
L_10053247: ;
    COW_AT(10053247)
    wr32(self + 0x9cu, 0u);
    wr32(self + 0xccu, 0u);
    wr32(self + 0xc8u, 0u);
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    loc_c = rd32(sp0 - 0xcu);
L_10053259: ;
    COW_AT(10053259)
    if (!(rd8(self + 0xdcu) & 1u)) goto L_10053289;
    COW_AT(10053262)
    if (rd32(self + 0xa8u) != 0u)
    {
        eax = rd32(self + 0xa8u);
    COW_AT(1005326c)
        wr32(eax + 0x14u, 0u);
    }
    COW_AT(1005326f)
    wr8(self + 0xdcu, rd8(self + 0xdcu) & 0xfeu);
    t12 = (rd32(self + 0xd8u) & 0xffff00ffu) | (uint32_t)(uint8_t)(rd32(self + 0xd8u) >> 8u | 8u) << 8u;
    wr32(self + 0xd8u, t12);
    g->ebx = loc_4;
    g->esi = loc_8;
    g->edi = loc_c;
    g->edx = edx;
    return t12;
L_10053289: ;
    COW_AT(10053289)
    wr8(self + 0xdcu, rd8(self + 0xdcu) & 0xfeu);
    t13 = (rd32(self + 0xd8u) & 0xffff00ffu) | (uint32_t)(uint8_t)(rd32(self + 0xd8u) >> 8u | 8u) << 8u;
    wr32(self + 0xd8u, t13);
    if (rd32(self + 0xa8u) == 0u)
    {
        ecx = rd32(self + 0xa8u);
    }
    else
    {
        ecx = rd32(self + 0xa8u);
    COW_AT(100532a9)
        wr32(sp0 - 0x10u, 1u);
        g->eax = eax;
        g->edx = rd32(ecx);
        t14 = rd32(ecx);
        g->esp = sp0 - 0xcu;
        t15 = cow_thiscall(g, rd32(t14 + 0x18u), ecx, 1, 1u);
        t16 = g->ecx;
        t17 = g->edx;
        wr32(self + 0xa8u, 0u);
        eax = t15;
        ecx = t16;
        edx = t17;
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
    }
    COW_AT(100532b6)
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 4u);
    wr32(sp0 - 0x18u, 0x3du);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t18 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0x3du, 4u);
    t19 = g->edx;
    g->esp = sp0 - 0xcu;
    t20 = cow_fastcall(g, COW_IMG(0x100748f0u), t18, t19, 0);
    t21 = g->edx;
    wr8(COW_IMG(0x1047d13cu), 1u);
    if (t18 == 0u)
    {
        edx = t21;
    COW_AT(100532e9)
        edi = 0u;
    }
    else
    {
        eax = t20;
        edx = t21;
        edi = t18;
    COW_AT(100532d7)
        g->esp = sp0 - 0xcu;
        cow_call_regs(g, COW_IMG(0x10074740u), eax, edi, edx, 1, 0);
        t22 = g->edx;
        wr32(edi, COW_IMG(0x1032b654u));
        wr8(edi + 0x3cu, 0u);
        edx = t22;
    }
    COW_AT(100532eb)
    t23 = rd32(self + 0x14u);
    wr32(self + 0xa8u, edi);
    wr32(edi + 0x34u, t23);
    t24 = rd32(self + 0x14u);
    wr32(edi + 0x38u, t24);
    t25 = rd32(self + 0x14u);
    wr32(edi + 0x18u, t25);
    wr32(edi + 0x1cu, 0x4d670000u);
    g->esp = sp0 - 0xcu;
    t26 = cow_call_regs(g, COW_IMG(0x10053e60u), t25, self, edx, 1, 0);
    t27 = g->edx;
    if ((rd32(self + 0x34u) & 0xfu) + (rd8(self + 0x36u) & 1u) * 0x10u == 0x14u)
    {
        eax = (rd32(self + 0x34u) & 0xfu) + (rd8(self + 0x36u) & 1u) * 0x10u;
        edx = t27;
        goto L_10053343;
    }
    eax = (rd32(self + 0x34u) & 0xfu) + (rd8(self + 0x36u) & 1u) * 0x10u;
    edx = t27;
    COW_AT(10053327)
    if ((int32_t)eax < 1) goto L_10053331;
    COW_AT(1005332c)
    if ((int32_t)eax < 14) goto L_10053336;
L_10053331: ;
    COW_AT(10053331)
    if ((int32_t)eax <= 15) goto L_10053343;
L_10053336: ;
    COW_AT(10053336)
    wr32(sp0 - 0x10u, 9u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t28 = cow_thiscall(g, COW_IMG(0x100749b0u), edi, 1, 9u);
    t29 = g->edx;
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->edx = t29;
    return t28;
L_10053343: ;
    COW_AT(10053343)
    g->esp = sp0;
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x10074a00u), eax, edi, edx);
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100531d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100531e0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100531ebu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100531f6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1005321bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        g->edi = self + 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x10053220u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        g->edi = self + 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x10053225u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        g->edi = self + 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1005322au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        g->edi = self + 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x10053247u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10053259u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10053262u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1005326cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1005326fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10053289u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100532a9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100532b6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100532d7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100532e9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100532ebu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10053327u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1005332cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10053331u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10053336u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10053343u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100531d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100531d0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
