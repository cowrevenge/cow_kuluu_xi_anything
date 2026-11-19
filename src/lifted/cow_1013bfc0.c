/* f_0x1013bfc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1013bfc0(Guest* g)
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
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
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
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 24u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1013bfdeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_1013bfde;
    case 0x1013bfebu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1013bfeb;
    case 0x1013c005u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1013c005;
    case 0x1013c007u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_1013c007;
    case 0x1013c05fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; goto E_1013c05f;
    case 0x1013c064u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; goto E_1013c064;
    case 0x1013c069u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; goto E_1013c069;
    case 0x1013c06du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; goto E_1013c06d;
    case 0x1013c078u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; goto E_1013c078;
    case 0x1013c081u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; goto E_1013c081;
    case 0x1013c088u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; goto E_1013c088;
    case 0x1013c096u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; goto E_1013c096;
    case 0x1013c09fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; goto E_1013c09f;
    case 0x1013c0a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; goto E_1013c0a1;
    case 0x1013c0c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; goto E_1013c0c0;
    case 0x1013c0c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; goto E_1013c0c7;
    case 0x1013c0d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; goto E_1013c0d5;
    case 0x1013c0deu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; goto E_1013c0de;
    case 0x1013c0e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; goto E_1013c0e0;
    case 0x1013c0ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; goto E_1013c0ff;
    default: break;
    }
#endif

    COW_AT(1013bfc0)
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, sp0 - 8u);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_call_regs(g, COW_IMG(0x1013e560u), sp0 - 8u, self, g->edx, 0, 1, sp0 - 8u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x10u, 1u);
    g->edx = t3;
    t4 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 1u);
    t5 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        edx = t5;
    }
    else
    {
        eax = t4;
    COW_AT(1013bfde)
        wr32(sp0 - 0x10u, in_ebx);
        wr32(sp0 - 0x14u, in_ebp);
        ecx = COW_IMG(0x1036fa1cu);
        edx = self + 0x358u;
L_1013bfeb: ;
    COW_AT(1013bfeb)
        t6 = rd32(rd32(eax) + (uint32_t)(int16_t)rd16(ecx) * 4u);
        wr32(edx, t6);
        if ((int32_t)(ecx + 2u) < (int32_t)COW_IMG(0x1036fa26u))
        {
            ecx = ecx + 2u;
            edx = edx + 4u;
            goto L_1013bfeb;
        }
        edx = edx + 4u;
    COW_AT(1013c005)
    }
    COW_AT(1013c007)
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x1013bfb0u), self, 0);
    t7 = g->ecx;
    t8 = rd32(self + 8u);
    wr16(sp0 - 6u, rd16(self + 0x372u));
    wr16(sp0 - 8u, 0u);
    t9 = rd32(sp0 - 8u);
    wr16(sp0 - 2u, 0u);
    wr16(sp0 - 4u, 0u);
    t10 = rd32(sp0 - 4u);
    wr32(t8 + 0xbcu, t9);
    wr32(sp0 - 0x10u, 0u);
    wr32(t8 + 0xc0u, t10);
    cow_fastcall(g, COW_IMG(0x1013c180u), self, t8, 1, 0u);
    t11 = g->edx;
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        ecx = rd32(COW_IMG(0x10456a28u));
        edx = (t11 & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        goto L_1013c069;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    ecx = rd32(COW_IMG(0x10456a28u));
    edx = (t11 & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    COW_AT(1013c05f)
    if (eax == 2u) goto L_1013c078;
    COW_AT(1013c064)
    if (eax == 3u) goto L_1013c078;
L_1013c069: ;
    COW_AT(1013c069)
    if (eax != 0u) goto L_1013c078;
    COW_AT(1013c06d)
    wr16(self + 0x34cu, 0x165u);
L_1013c081: ;
    COW_AT(1013c081)
    if (rd32(self + 0x14u) == 0u)
    {
        eax = rd32(self + 0x14u);
    COW_AT(1013c088)
        wr32(sp0 - 0x10u, 0x68u);
        g->eax = eax;
        g->esp = sp0 - 4u;
        t12 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x68u, rd32(sp0 - 0xcu), rd32(sp0 - 8u));
        t13 = g->edx;
        if (t12 == 0u)
        {
            edx = t13;
    COW_AT(1013c09f)
            eax = 0u;
        }
        else
        {
            eax = t12;
            edx = t13;
    COW_AT(1013c096)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t14 = cow_thiscall(g, COW_IMG(0x101c8260u), eax, 0);
            t15 = g->edx;
            eax = t14;
            edx = t15;
        }
    COW_AT(1013c0a1)
        wr32(sp0 - 0x10u, 3u);
        wr32(self + 0x14u, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t16 = cow_thiscall(g, COW_IMG(0x101c8290u), eax, 1, 3u);
        t17 = g->ecx;
        t18 = g->edx;
        wr32(sp0 - 0x10u, 0x1cu);
        t19 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t18, 1, 1, 0x1cu);
        t20 = g->edx;
        wr32(sp0 - 0x10u, t19);
        g->edx = t20;
        t21 = rd32(self + 0x14u);
        cow_thiscall(g, COW_IMG(0x101c8380u), t21, 1, t19);
        t22 = g->ecx;
        t23 = g->edx;
        ecx = t22;
        edx = t23;
    }
    COW_AT(1013c0c0)
    if (rd32(self + 0x18u) == 0u)
    {
        eax = rd32(self + 0x18u);
    COW_AT(1013c0c7)
        wr32(sp0 - 0x10u, 0x68u);
        g->eax = eax;
        g->esp = sp0 - 4u;
        t24 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x68u, rd32(sp0 - 0xcu), rd32(sp0 - 8u));
        t25 = g->edx;
        if (t24 == 0u)
        {
            edx = t25;
    COW_AT(1013c0de)
            eax = 0u;
        }
        else
        {
            eax = t24;
            edx = t25;
    COW_AT(1013c0d5)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t26 = cow_thiscall(g, COW_IMG(0x101c8260u), eax, 0);
            t27 = g->edx;
            eax = t26;
            edx = t27;
        }
    COW_AT(1013c0e0)
        wr32(sp0 - 0x10u, 0x13u);
        wr32(self + 0x18u, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t28 = cow_thiscall(g, COW_IMG(0x101c8290u), eax, 1, 0x13u);
        t29 = g->ecx;
        t30 = g->edx;
        wr32(sp0 - 0x10u, 0x1bu);
        t31 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t30, 1, 1, 0x1bu);
        t32 = g->edx;
        wr32(sp0 - 0x10u, t31);
        cow_thiscall(g, COW_IMG(0x101c8380u), rd32(self + 0x18u), 1, t31);
    }
    COW_AT(1013c0ff)
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0xcu);
    g->ebp = in_ebp;
    return;
L_1013c078: ;
    COW_AT(1013c078)
    wr16(self + 0x34cu, 0x135u);
    goto L_1013c081;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1013bfc0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1013bfdeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1013bfebu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1013c005u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1013c007u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1013c05fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1013c064u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1013c069u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1013c06du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1013c078u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1013c081u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1013c088u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1013c096u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1013c09fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1013c0a1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1013c0c0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1013c0c7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1013c0d5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1013c0deu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1013c0e0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1013c0ffu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1013bfc0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1013bfc0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
