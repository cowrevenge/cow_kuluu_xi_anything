/* f_0x10293d20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10293d20(Guest* g)
{
    uint32_t eax;
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
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 160u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10293d2cu: in_eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x54u); goto E_10293d2c;
    case 0x10293d40u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; edi = g->edi; goto E_10293d40;
    case 0x10293d4au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; edi = g->edi; goto E_10293d4a;
    case 0x10293d54u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x54u); goto E_10293d54;
    case 0x10293d63u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; edi = g->edi; goto E_10293d63;
    case 0x10293d6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; edi = g->edi; goto E_10293d6f;
    case 0x10293d83u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; edi = g->edi; goto E_10293d83;
    case 0x10293d8du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; edi = g->edi; goto E_10293d8d;
    case 0x10293d97u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; edi = g->edi; goto E_10293d97;
    case 0x10293d9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10293d9e;
    case 0x10293dafu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10293daf;
    case 0x10293dbdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10293dbd;
    case 0x10293dcbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10293dcb;
    case 0x10293dd9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10293dd9;
    case 0x10293deau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10293dea;
    case 0x10293df9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10293df9;
    case 0x10293e0du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10293e0d;
    case 0x10293e24u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10293e24;
    case 0x10293e3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10293e3e;
    default: break;
    }
#endif

    COW_AT(10293d20)
    wr32(sp0 - 0x54u, in_edi);
    if (rd32(sp0 + 8u) != 0u)
    {
        edi = rd32(sp0 + 8u);
        goto L_10293d54;
    }
    COW_AT(10293d2c)
    wr32(sp0 - 0x58u, 0x560u);
    wr32(sp0 - 0x5cu, COW_IMG(0x103bb254u));
    wr32(sp0 - 0x60u, COW_IMG(0x103b379cu));
    g->eax = in_eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x58u;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bb254u));
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(10293d40)
    wr32(sp0 - 0x64u, COW_IMG(0x103b4368u));
    g->esp = sp0 - 0x5cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b4368u), COW_IMG(0x103b379cu));
    COW_AT(10293d4a)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = rd32(sp0 - 0x54u);
    return 0u;
L_10293d54: ;
    COW_AT(10293d54)
    wr32(sp0 - 0x58u, edi);
    wr32(sp0 - 0x5cu, 1u);
    wr32(sp0 - 0x60u, 4u);
    wr32(sp0 - 0x64u, sp0 + 8u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x38u;
    cow_cdecl(g, COW_IMG(0x10292420u), 11, sp0 + 8u, 4u, 1u, edi, in_edi, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu));
    t4 = g->ecx;
    t5 = g->edx;
    ecx = t4;
    edx = t5;
    COW_AT(10293d63)
    if ((int32_t)rd32(sp0 + 8u) >= 3)
    {
        eax = rd32(sp0 + 8u);
        goto L_10293d97;
    }
    eax = rd32(sp0 + 8u);
    COW_AT(10293d6f)
    wr32(sp0 - 0x58u, 0x566u);
    wr32(sp0 - 0x5cu, COW_IMG(0x103bb254u));
    wr32(sp0 - 0x60u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t6 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bb254u));
    t7 = g->ecx;
    t8 = g->edx;
    eax = t6;
    ecx = t7;
    edx = t8;
    COW_AT(10293d83)
    wr32(sp0 - 0x64u, COW_IMG(0x103bb53cu));
    g->esp = sp0 - 0x5cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb53cu), COW_IMG(0x103b379cu));
    COW_AT(10293d8d)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = rd32(sp0 - 0x54u);
    return 0u;
L_10293d97: ;
    COW_AT(10293d97)
    wr32(sp0 - 0x58u, in_ebx);
    wr32(sp0 - 0x5cu, in_esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t9 = cow_stdcall(g, COW_IMG(0x10292510u), 0);
    t10 = g->edx;
    eax = t9;
    edx = t10;
    COW_AT(10293d9e)
    wr32(sp0 - 0x60u, edi);
    wr32(sp0 - 0x64u, 0x50u);
    wr32(sp0 - 0x68u, 1u);
    wr32(sp0 - 0x6cu, sp0 - 0x50u);
    g->eax = eax;
    g->ecx = sp0 - 0x50u;
    g->esp = sp0 - 0x40u;
    t11 = cow_cdecl(g, COW_IMG(0x10292420u), 11, sp0 - 0x50u, 1u, 0x50u, edi, rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u));
    t12 = g->ecx;
    ecx = t12;
    esi = eax;
    eax = t11;
    COW_AT(10293daf)
    wr32(sp0 - 0x70u, edi);
    wr32(sp0 - 0x74u, 1u);
    wr32(sp0 - 0x78u, 4u);
    wr32(sp0 - 0x7cu, esi + 0x20u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = esi + 0x20u;
    g->esp = sp0 - 0x50u;
    t13 = cow_cdecl(g, COW_IMG(0x10292420u), 11, esi + 0x20u, 4u, 1u, edi, sp0 - 0x50u, 1u, 0x50u, rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u));
    t14 = g->ecx;
    t15 = g->edx;
    eax = t13;
    ecx = t14;
    edx = t15;
    COW_AT(10293dbd)
    wr32(sp0 - 0x80u, edi);
    wr32(sp0 - 0x84u, 1u);
    wr32(sp0 - 0x88u, 4u);
    wr32(sp0 - 0x8cu, esi + 0x1cu);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x60u;
    cow_cdecl(g, COW_IMG(0x10292420u), 11, esi + 0x1cu, 4u, 1u, edi, rd32(sp0 - 0x7cu), 4u, 1u, rd32(sp0 - 0x70u), sp0 - 0x50u, rd32(sp0 - 0x68u), rd32(sp0 - 0x64u));
    t16 = g->ecx;
    t17 = g->edx;
    ecx = t16;
    edx = t17;
    ebx = esi + 0x1cu;
    COW_AT(10293dcb)
    wr32(sp0 - 0x90u, edi);
    wr32(sp0 - 0x94u, 1u);
    wr32(sp0 - 0x98u, 4u);
    wr32(sp0 - 0x9cu, esi + 0x24u);
    g->eax = esi + 0x24u;
    g->edx = edx;
    g->esp = sp0 - 0x70u;
    t18 = cow_cdecl(g, COW_IMG(0x10292420u), 11, esi + 0x24u, 4u, 1u, edi, rd32(sp0 - 0x8cu), 4u, 1u, rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u), rd32(sp0 - 0x74u));
    t19 = g->edx;
    eax = t18;
    edx = t19;
    COW_AT(10293dd9)
    wr32(sp0 - 0x60u, edi);
    wr32(sp0 - 0x64u, 1u);
    wr32(sp0 - 0x68u, 4u);
    wr32(sp0 - 0x6cu, esi + 0x30u);
    g->eax = eax;
    g->ecx = esi + 0x30u;
    g->esp = sp0 - 0x40u;
    t20 = cow_cdecl(g, COW_IMG(0x10292420u), 11, esi + 0x30u, 4u, 1u, edi, rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u));
    t21 = g->ecx;
    eax = t20;
    ecx = t21;
    COW_AT(10293dea)
    wr32(sp0 - 0x70u, edi);
    wr32(sp0 - 0x74u, 1u);
    wr32(sp0 - 0x78u, 4u);
    wr32(sp0 - 0x7cu, arg1);
    g->ecx = ecx;
    g->edx = arg1;
    g->esp = sp0 - 0x50u;
    cow_cdecl(g, COW_IMG(0x10292420u), 11, arg1, 4u, 1u, edi, rd32(sp0 - 0x6cu), 4u, 1u, rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u));
    t22 = g->ecx;
    t23 = g->edx;
    ecx = t22;
    edx = t23;
    COW_AT(10293df9)
    wr32(sp0 - 0x80u, 0x579u);
    wr32(sp0 - 0x84u, COW_IMG(0x103bb254u));
    wr32(sp0 - 0x88u, 4u);
    wr32(sp0 - 0x8cu, rd32(ebx));
    g->eax = rd32(ebx);
    g->edx = edx;
    t24 = rd32(ebx);
    g->esp = sp0 - 0x78u;
    t25 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t24, 4u, COW_IMG(0x103bb254u), 0x579u, arg1);
    t26 = g->edx;
    eax = t25;
    edx = t26;
    COW_AT(10293e0d)
    wr32(sp0 - 0x90u, 0x57au);
    wr32(sp0 - 0x94u, COW_IMG(0x103bb254u));
    wr32(sp0 - 0x98u, 4u);
    wr32(sp0 - 0x9cu, rd32(ebx));
    t27 = rd32(ebx);
    wr32(esi + 0x38u, eax);
    g->eax = eax;
    g->ecx = t27;
    g->esp = sp0 - 0x88u;
    t28 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t27, 4u, COW_IMG(0x103bb254u), 0x57au, rd32(sp0 - 0x8cu));
    t29 = g->ecx;
    eax = t28;
    ecx = t29;
    COW_AT(10293e24)
    t30 = rd32(ebx);
    wr32(esi + 0x3cu, eax);
    wr32(sp0 - 0x60u, 0x57bu);
    wr32(sp0 - 0x64u, COW_IMG(0x103bb254u));
    wr32(sp0 - 0x68u, 4u);
    wr32(sp0 - 0x6cu, t30);
    g->eax = eax;
    g->esp = sp0 - 0x58u;
    t31 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t30, 4u, COW_IMG(0x103bb254u), 0x57bu, rd32(sp0 - 0x5cu));
    eax = t31;
    COW_AT(10293e3e)
    wr32(esi + 0x40u, eax);
    t32 = rd32(ebx) << 2u;
    wr32(esi + 0x44u, t32);
    g->ebx = rd32(sp0 - 0x58u);
    g->esi = rd32(sp0 - 0x5cu);
    g->edi = rd32(sp0 - 0x54u);
    return esi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10293d20(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10293d2cu:
    {
        uint32_t edi;
        uint32_t in_eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x10293d40u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x60u, COW_IMG(0x103b379cu));
        (void)sp0;
        return 1;
    }
    case 0x10293d4au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10293d54u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x10293d63u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x64u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x10293d6fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x64u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x10293d83u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x64u, sp0 + 8u);
        wr32(sp0 - 0x60u, COW_IMG(0x103b379cu));
        (void)sp0;
        return 1;
    }
    case 0x10293d8du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10293d97u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x64u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x10293d9eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x64u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x10293dafu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x6cu, sp0 - 0x50u);
        wr32(sp0 - 0x68u, 1u);
        wr32(sp0 - 0x64u, 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x10293dbdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x7cu;
        wr32(sp0 - 0x78u, 4u);
        wr32(sp0 - 0x74u, 1u);
        wr32(sp0 - 0x6cu, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x10293dcbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        wr32(sp0 - 0x88u, 4u);
        wr32(sp0 - 0x84u, 1u);
        wr32(sp0 - 0x6cu, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x10293dd9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x9cu;
        wr32(sp0 - 0x6cu, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x10293deau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x68u, 4u);
        wr32(sp0 - 0x64u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x10293df9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x7cu;
        wr32(sp0 - 0x7cu, arg1);
        (void)sp0;
        return 1;
    }
    case 0x10293e0du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x10293e24u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x9cu;
        (void)sp0;
        return 1;
    }
    case 0x10293e3eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10293d20(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10293d20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
