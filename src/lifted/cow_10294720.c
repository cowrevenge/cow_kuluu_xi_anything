/* f_0x10294720 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10294720(Guest* g)
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
    cow_frame(g, sp0, 160u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1029472cu: in_eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x54u); goto E_1029472c;
    case 0x10294740u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; edi = g->edi; goto E_10294740;
    case 0x1029474au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; edi = g->edi; goto E_1029474a;
    case 0x10294754u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x54u); goto E_10294754;
    case 0x10294763u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; edi = g->edi; goto E_10294763;
    case 0x1029476fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; edi = g->edi; goto E_1029476f;
    case 0x10294783u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; edi = g->edi; goto E_10294783;
    case 0x1029478du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; edi = g->edi; goto E_1029478d;
    case 0x10294797u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; edi = g->edi; goto E_10294797;
    case 0x1029479eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1029479e;
    case 0x102947afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102947af;
    case 0x102947bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102947bd;
    case 0x102947cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102947cb;
    case 0x102947dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102947df;
    case 0x102947f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102947f1;
    case 0x102947ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102947ff;
    default: break;
    }
#endif

    COW_AT(10294720)
    wr32(sp0 - 0x54u, in_edi);
    if (rd32(sp0 + 4u) != 0u)
    {
        edi = rd32(sp0 + 4u);
        goto L_10294754;
    }
    COW_AT(1029472c)
    wr32(sp0 - 0x58u, 0x1eeu);
    wr32(sp0 - 0x5cu, COW_IMG(0x103bb558u));
    wr32(sp0 - 0x60u, COW_IMG(0x103b379cu));
    g->eax = in_eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x58u;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bb558u));
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(10294740)
    wr32(sp0 - 0x64u, COW_IMG(0x103b4368u));
    g->esp = sp0 - 0x5cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b4368u), COW_IMG(0x103b379cu));
    COW_AT(1029474a)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = rd32(sp0 - 0x54u);
    return 0u;
L_10294754: ;
    COW_AT(10294754)
    wr32(sp0 - 0x58u, edi);
    wr32(sp0 - 0x5cu, 1u);
    wr32(sp0 - 0x60u, 4u);
    wr32(sp0 - 0x64u, sp0 + 4u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x38u;
    cow_cdecl(g, COW_IMG(0x10292420u), 11, sp0 + 4u, 4u, 1u, edi, in_edi, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu));
    t4 = g->ecx;
    t5 = g->edx;
    ecx = t4;
    edx = t5;
    COW_AT(10294763)
    if ((int32_t)rd32(sp0 + 4u) >= 4)
    {
        eax = rd32(sp0 + 4u);
        goto L_10294797;
    }
    eax = rd32(sp0 + 4u);
    COW_AT(1029476f)
    wr32(sp0 - 0x58u, 0x1f4u);
    wr32(sp0 - 0x5cu, COW_IMG(0x103bb558u));
    wr32(sp0 - 0x60u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t6 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bb558u));
    t7 = g->ecx;
    t8 = g->edx;
    eax = t6;
    ecx = t7;
    edx = t8;
    COW_AT(10294783)
    wr32(sp0 - 0x64u, COW_IMG(0x103bb614u));
    g->esp = sp0 - 0x5cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb614u), COW_IMG(0x103b379cu));
    COW_AT(1029478d)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = rd32(sp0 - 0x54u);
    return 0u;
L_10294797: ;
    COW_AT(10294797)
    wr32(sp0 - 0x58u, in_ebx);
    wr32(sp0 - 0x5cu, in_esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t9 = cow_stdcall(g, COW_IMG(0x10293fa0u), 0);
    t10 = g->edx;
    eax = t9;
    edx = t10;
    COW_AT(1029479e)
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
    COW_AT(102947af)
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
    COW_AT(102947bd)
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
    COW_AT(102947cb)
    wr32(sp0 - 0x90u, 0x201u);
    wr32(sp0 - 0x94u, COW_IMG(0x103bb558u));
    wr32(sp0 - 0x98u, 4u);
    wr32(sp0 - 0x9cu, rd32(ebx));
    g->eax = rd32(ebx);
    g->edx = edx;
    t18 = rd32(ebx);
    g->esp = sp0 - 0x88u;
    t19 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t18, 4u, COW_IMG(0x103bb558u), 0x201u, rd32(sp0 - 0x8cu));
    t20 = g->edx;
    eax = t19;
    edx = t20;
    COW_AT(102947df)
    t21 = rd32(ebx);
    wr32(esi + 0x34u, eax);
    wr32(sp0 - 0x60u, edi);
    wr32(sp0 - 0x64u, t21);
    wr32(sp0 - 0x68u, 4u);
    wr32(sp0 - 0x6cu, eax);
    g->eax = eax;
    g->ecx = t21;
    g->esp = sp0 - 0x40u;
    t22 = cow_cdecl(g, COW_IMG(0x10292420u), 11, eax, 4u, t21, edi, rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u));
    t23 = g->ecx;
    eax = t22;
    ecx = t23;
    COW_AT(102947f1)
    wr32(sp0 - 0x70u, edi);
    wr32(sp0 - 0x74u, 1u);
    wr32(sp0 - 0x78u, 4u);
    wr32(sp0 - 0x7cu, esi + 0x24u);
    g->esp = sp0 - 0x50u;
    cow_cdecl(g, COW_IMG(0x10292420u), 11, esi + 0x24u, 4u, 1u, edi, rd32(sp0 - 0x6cu), 4u, rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u));
    COW_AT(102947ff)
    g->ebx = rd32(sp0 - 0x58u);
    g->esi = rd32(sp0 - 0x5cu);
    g->edi = rd32(sp0 - 0x54u);
    return esi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10294720(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1029472cu:
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
    case 0x10294740u:
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
    case 0x1029474au:
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
    case 0x10294754u:
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
    case 0x10294763u:
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
        wr32(sp0 - 0x64u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1029476fu:
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
        wr32(sp0 - 0x64u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10294783u:
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
        wr32(sp0 - 0x64u, sp0 + 4u);
        wr32(sp0 - 0x60u, COW_IMG(0x103b379cu));
        (void)sp0;
        return 1;
    }
    case 0x1029478du:
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
    case 0x10294797u:
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
        wr32(sp0 - 0x64u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1029479eu:
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
        wr32(sp0 - 0x64u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102947afu:
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
    case 0x102947bdu:
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
    case 0x102947cbu:
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
        wr32(sp0 - 0x6cu, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x102947dfu:
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
    case 0x102947f1u:
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
        (void)sp0;
        return 1;
    }
    case 0x102947ffu:
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
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10294720(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10294720(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
