/* f_0x101bb2b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101bb2b0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 108u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101bb2e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x58u); in_esi = rd32(sp0 - 0x54u); in_ebp = rd32(sp0 - 0x50u); g->ebp = rd32(sp0 - 0x50u); g->edi = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x54u); goto E_101bb2e1;
    case 0x101bb2ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x58u); in_esi = rd32(sp0 - 0x54u); in_ebp = rd32(sp0 - 0x50u); g->ebp = rd32(sp0 - 0x50u); g->edi = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x54u); goto E_101bb2eb;
    case 0x101bb2feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101bb2fe;
    case 0x101bb308u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101bb308;
    case 0x101bb31eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101bb31e;
    case 0x101bb325u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101bb325;
    case 0x101bb333u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101bb333;
    case 0x101bb341u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101bb341;
    case 0x101bb343u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101bb343;
    case 0x101bb349u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101bb349;
    case 0x101bb355u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101bb355;
    case 0x101bb37fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101bb37f;
    case 0x101bb383u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101bb383;
    case 0x101bb39au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101bb39a;
    case 0x101bb3adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101bb3ad;
    case 0x101bb3fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101bb3fc;
    case 0x101bb406u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101bb406;
    case 0x101bb41du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_101bb41d;
    default: break;
    }
#endif

    COW_AT(101bb2b0)
    wr32(sp0 - 0x50u, in_ebp);
    wr32(sp0 - 0x54u, in_esi);
    wr32(sp0 - 0x58u, in_edi);
    wr32(sp0 - 0x5cu, 0x91u);
    wr32(sp0 - 0x60u, 0xbu);
    t1 = rd8(self + 4u);
    wr8(sp0 - 0x4cu, 7u);
    wr8(sp0 - 0x4bu, (uint8_t)t1);
    wr8(sp0 - 0x4au, 0u);
    wr8(sp0 - 0x49u, 0u);
    g->eax = (in_eax & 0xffffff00u) | t1;
    g->ecx = self;
    g->esp = sp0 - 0x58u;
    t2 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xbu, 0x91u);
    t3 = g->ecx;
    eax = t2;
    ecx = t3;
    edx = sp0 - 0x48u;
L_101bb2e1: ;
    COW_AT(101bb2e1)
    t4 = rd8(eax);
    wr8(edx, (uint8_t)t4);
    if ((uint8_t)t4 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t4;
        edx = edx + 1u;
        goto L_101bb2e1;
    }
    eax = eax + 1u;
    ecx = (ecx & 0xffffff00u) | t4;
    edx = edx + 1u;
    COW_AT(101bb2eb)
    wr32(sp0 - 0x5cu, 0x92u);
    wr32(sp0 - 0x60u, 0xbu);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x58u;
    t5 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xbu, 0x92u);
    t6 = g->ecx;
    eax = t5;
    ecx = t6;
    edx = sp0 - 0x28u;
L_101bb2fe: ;
    COW_AT(101bb2fe)
    t7 = rd8(eax);
    wr8(edx, (uint8_t)t7);
    if ((uint8_t)t7 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t7;
        edx = edx + 1u;
        goto L_101bb2fe;
    }
    edx = edx + 1u;
    COW_AT(101bb308)
    wr32(sp0 - 0x5cu, sp0 - 0x4cu);
    g->eax = sp0 - 0x4cu;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t8 = cow_stdcall(g, COW_IMG(0x101bb130u), 1, sp0 - 0x4cu);
    t9 = g->edx;
    if (rd32(self + 0x20cu) == 0u)
    {
        eax = t8;
        ecx = rd32(self + 0x20cu);
        edx = t9;
    COW_AT(101bb325)
        wr32(sp0 - 0x5cu, 0xcu);
        g->eax = eax;
        g->esp = sp0 - 0x50u;
        t11 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0xcu, rd32(sp0 - 0x58u), rd32(sp0 - 0x54u));
        t12 = g->edx;
        if (t11 == 0u)
        {
            edx = t12;
    COW_AT(101bb341)
            eax = 0u;
        }
        else
        {
            eax = t11;
            edx = t12;
    COW_AT(101bb333)
            wr32(sp0 - 0x5cu, 0x4000u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x58u;
            t13 = cow_thiscall(g, COW_IMG(0x101bc9e0u), eax, 1, 0x4000u);
            t14 = g->edx;
            eax = t13;
            edx = t14;
        }
    COW_AT(101bb343)
        wr32(self + 0x20cu, eax);
    }
    else
    {
        eax = t8;
        ecx = rd32(self + 0x20cu);
        edx = t9;
    COW_AT(101bb31e)
        g->edx = edx;
        g->esp = sp0 - 0x58u;
        cow_thiscall(g, COW_IMG(0x101bcb30u), ecx, 0);
        t10 = g->edx;
        edx = t10;
    }
    COW_AT(101bb349)
    if ((int32_t)rd32(sp0 - 8u) <= 0) goto L_101bb3fc;
    eax = rd32(sp0 - 8u);
    COW_AT(101bb355)
    wr32(sp0 - 0x5cu, 0x4cu);
    wr32(sp0 - 0x60u, sp0 - 0x4cu);
    g->eax = eax;
    g->esp = sp0 - 0x58u;
    t15 = cow_thiscall(g, COW_IMG(0x101bca40u), rd32(self + 0x20cu), 2, sp0 - 0x4cu, 0x4cu);
    t16 = rd32(sp0 - 4u);
    wr32(sp0 - 0x5cu, t16);
    g->edx = t16;
    t17 = cow_thiscall(g, COW_IMG(0x101bcac0u), rd32(self + 0x20cu), 1, t16);
    t18 = g->edx;
    if (t15 == 0u) goto L_101bb3fc;
    edx = t18;
    ebp = t15;
    edi = t17;
    COW_AT(101bb37f)
    if (edi == 0u) goto L_101bb3fc;
    COW_AT(101bb383)
    t19 = rd32(sp0 - 4u);
    wr32(sp0 - 0x5cu, t19);
    wr32(sp0 - 0x60u, edi);
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    cow_thiscall(g, COW_IMG(0x101bb1a0u), self, 2, edi, t19);
    t20 = g->edx;
    if ((int32_t)rd32(self + 0x214u) >= 0)
    {
        edx = t20;
    }
    else
    {
        edx = t20;
    COW_AT(101bb39a)
        t21 = rd32(self + 0x224u);
        wr32(self + 0x214u, t21);
        wr32(self + 0x224u, t21 + 1u);
    }
    COW_AT(101bb3ad)
    t22 = rd32(self + 0x214u);
    g->esp = sp0 - 0x58u;
    cow_thiscall(g, COW_IMG(0x101ba5c0u), self + t22 * 0x1f0u + 0x22cu, 0);
    wr32(sp0 - 0x5cu, 0u);
    t23 = rd32(self + 0x214u);
    t24 = rd32(sp0 - 4u);
    wr32(sp0 - 0x60u, t24);
    wr32(sp0 - 0x64u, edi);
    wr32(sp0 - 0x68u, ebp);
    g->eax = rd32(self + t23 * 0x1f0u + 0x22cu);
    t25 = rd32(self + t23 * 0x1f0u + 0x22cu);
    t26 = cow_thiscall(g, rd32(t25 + 0x14u), self + t23 * 0x1f0u + 0x22cu, 4, ebp, edi, t24, 0u);
    g->esi = rd32(sp0 - 0x54u);
    g->edi = rd32(sp0 - 0x58u);
    g->ebp = rd32(sp0 - 0x50u);
    return (t26 & 0xffffff00u) | 1u;
L_101bb3fc: ;
    COW_AT(101bb3fc)
    if ((int32_t)rd32(self + 0x214u) < 0)
    {
        eax = rd32(self + 0x214u);
    }
    else
    {
    COW_AT(101bb406)
        t27 = rd32(self + 0x224u);
        wr32(self + 0x214u, 0xffffffffu);
        wr32(self + 0x224u, t27 - 1u);
        eax = t27 - 1u;
    }
    COW_AT(101bb41d)
    g->esi = rd32(sp0 - 0x54u);
    g->edi = rd32(sp0 - 0x58u);
    g->ebp = rd32(sp0 - 0x50u);
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101bb2b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101bb2e1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x58u);
        in_esi = rd32(sp0 - 0x54u);
        in_ebp = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101bb2ebu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x58u);
        in_esi = rd32(sp0 - 0x54u);
        in_ebp = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101bb2feu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101bb308u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101bb31eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x5cu, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x101bb325u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x5cu, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x101bb333u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101bb341u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101bb343u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101bb349u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101bb355u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101bb37fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x101bb383u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x101bb39au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101bb3adu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101bb3fcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101bb406u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101bb41du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101bb2b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101bb2b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
