/* f_0x101c4080 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101c4080(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 868u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101c40c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x350u); in_esi = rd32(sp0 - 0x34cu); in_ebp = rd32(sp0 - 0x348u); in_ebx = rd32(sp0 - 0x344u); g->ebp = rd32(sp0 - 0x348u); g->ebx = rd32(sp0 - 0x344u); g->edi = rd32(sp0 - 0x350u); g->esi = rd32(sp0 - 0x34cu); goto E_101c40c1;
    case 0x101c40d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x350u); in_esi = rd32(sp0 - 0x34cu); in_ebp = rd32(sp0 - 0x348u); in_ebx = rd32(sp0 - 0x344u); g->ebp = rd32(sp0 - 0x348u); g->ebx = rd32(sp0 - 0x344u); g->edi = rd32(sp0 - 0x350u); g->esi = rd32(sp0 - 0x34cu); goto E_101c40d0;
    case 0x101c40e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x350u); in_esi = rd32(sp0 - 0x34cu); in_ebp = rd32(sp0 - 0x348u); in_ebx = rd32(sp0 - 0x344u); g->ebp = rd32(sp0 - 0x348u); g->ebx = rd32(sp0 - 0x344u); g->edi = rd32(sp0 - 0x350u); g->esi = rd32(sp0 - 0x34cu); goto E_101c40e4;
    case 0x101c40f8u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x350u); in_esi = rd32(sp0 - 0x34cu); in_ebp = rd32(sp0 - 0x348u); in_ebx = rd32(sp0 - 0x344u); g->ebp = rd32(sp0 - 0x348u); g->ebx = rd32(sp0 - 0x344u); g->edi = rd32(sp0 - 0x350u); g->esi = rd32(sp0 - 0x34cu); goto E_101c40f8;
    case 0x101c4125u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x350u); in_esi = rd32(sp0 - 0x34cu); in_ebp = rd32(sp0 - 0x348u); in_ebx = rd32(sp0 - 0x344u); g->ebp = rd32(sp0 - 0x348u); g->ebx = rd32(sp0 - 0x344u); g->edi = rd32(sp0 - 0x350u); g->esi = rd32(sp0 - 0x34cu); goto E_101c4125;
    case 0x101c4135u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c4135;
    case 0x101c4158u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101c4158;
    default: break;
    }
#endif

    COW_AT(101c4080)
    wr32(sp0 - 0x344u, in_ebx);
    wr32(sp0 - 0x348u, in_ebp);
    wr32(sp0 - 0x34cu, in_esi);
    wr32(sp0 - 0x350u, in_edi);
    wr32(sp0 - 0x354u, arg1);
    wr32(sp0 - 0x358u, COW_IMG(0x1037cbb4u));
    wr32(sp0 - 0x35cu, sp0 - 0x100u);
    g->eax = sp0 - 0x100u;
    g->esp = sp0 - 0x348u;
    t1 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1037cbb4u), arg1, in_edi, in_esi);
    wr32(sp0 - 0x354u, sp0 - 0x340u);
    wr32(sp0 - 0x358u, sp0 - 0x100u);
    g->edx = sp0 - 0x100u;
    g->esp = sp0 - 0x350u;
    t2 = cow_stdcall(g, rd32(COW_IMG(0x10329128u)), 2, sp0 - 0x100u, sp0 - 0x340u);   /* kernel32.dll!FindFirstFileA */
    t3 = g->edx;
    if (t2 != 0xffffffffu)
    {
        edx = t3;
        ebx = t2;
        goto L_101c40d0;
    }
    eax = t2;
    COW_AT(101c40c1)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return eax;
L_101c40d0: ;
    COW_AT(101c40d0)
    esi = sp0 - 0x314u;
    edi = COW_IMG(0x10354054u);
    ecx = 2u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf) goto L_101c4125;
    COW_AT(101c40e4)
    esi = sp0 - 0x314u;
    edi = COW_IMG(0x1037cbc4u);
    ecx = 3u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        edx = 0u;
        goto L_101c4125;
    }
    COW_AT(101c40f8)
    wr32(sp0 - 0x354u, sp0 - 0x314u);
    wr32(sp0 - 0x358u, arg1);
    wr32(sp0 - 0x35cu, COW_IMG(0x10350670u));
    wr32(sp0 - 0x360u, sp0 - 0x200u);
    g->ebx = ebx;
    g->eax = sp0 - 0x314u;
    g->ecx = sp0 - 0x200u;
    g->esp = sp0 - 0x34cu;
    t4 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x200u, COW_IMG(0x10350670u), arg1, sp0 - 0x314u, in_edi);
    t5 = g->ecx;
    wr32(sp0 - 0x354u, sp0 - 0x200u);
    g->ecx = t5;
    g->edx = sp0 - 0x200u;
    g->esp = sp0 - 0x350u;
    t6 = cow_stdcall(g, rd32(COW_IMG(0x10329124u)), 1, sp0 - 0x200u);   /* kernel32.dll!DeleteFileA */
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 == 0u)
    {
        eax = t6;
        ecx = t7;
        edx = t8;
        goto L_101c4158;
    }
    ecx = t7;
    edx = t8;
L_101c4125: ;
    COW_AT(101c4125)
    wr32(sp0 - 0x354u, sp0 - 0x340u);
    wr32(sp0 - 0x358u, ebx);
    g->eax = sp0 - 0x340u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x350u;
    t10 = cow_stdcall(g, rd32(COW_IMG(0x10329120u)), 2, ebx, sp0 - 0x340u);   /* kernel32.dll!FindNextFileA */
    t11 = g->ecx;
    t12 = g->edx;
    if (t10 != 0u)
    {
        edx = t12;
        goto L_101c40d0;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
    COW_AT(101c4135)
    wr32(sp0 - 0x354u, ebx);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x350u;
    t13 = cow_stdcall(g, rd32(COW_IMG(0x1032911cu)), 1, ebx);   /* kernel32.dll!FindClose */
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 - 0x354u, arg1);
    t16 = cow_stdcall(g, rd32(COW_IMG(0x1032920cu)), 1, arg1);   /* kernel32.dll!RemoveDirectoryA */
    g->ebx = rd32(sp0 - 0x344u);
    g->esi = rd32(sp0 - 0x34cu);
    g->edi = rd32(sp0 - 0x350u);
    g->ebp = rd32(sp0 - 0x348u);
    return (-(t16 != 0u) & 2u) - 1u;
L_101c4158: ;
    COW_AT(101c4158)
    wr32(sp0 - 0x354u, ebx);
    g->eax = eax;
    g->esp = sp0 - 0x350u;
    t9 = cow_stdcall(g, rd32(COW_IMG(0x1032911cu)), 1, ebx);   /* kernel32.dll!FindClose */
    g->ebx = rd32(sp0 - 0x344u);
    g->esi = rd32(sp0 - 0x34cu);
    g->edi = rd32(sp0 - 0x350u);
    g->ebp = rd32(sp0 - 0x348u);
    return 0xffffffffu;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101c4080(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101c40c1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x350u);
        in_esi = rd32(sp0 - 0x34cu);
        in_ebp = rd32(sp0 - 0x348u);
        in_ebx = rd32(sp0 - 0x344u);
        g->esp = sp0 - 0x350u;
        wr32(sp0 - 0x35cu, sp0 - 0x100u);
        wr32(sp0 - 0x358u, sp0 - 0x100u);
        wr32(sp0 - 0x354u, sp0 - 0x340u);
        (void)sp0;
        return 1;
    }
    case 0x101c40d0u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x350u);
        in_esi = rd32(sp0 - 0x34cu);
        in_ebp = rd32(sp0 - 0x348u);
        in_ebx = rd32(sp0 - 0x344u);
        g->esp = sp0 - 0x350u;
        g->ebp = arg1;
        wr32(sp0 - 0x354u, sp0 - 0x340u);
        (void)sp0;
        return 1;
    }
    case 0x101c40e4u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x350u);
        in_esi = rd32(sp0 - 0x34cu);
        in_ebp = rd32(sp0 - 0x348u);
        in_ebx = rd32(sp0 - 0x344u);
        g->esp = sp0 - 0x350u;
        g->ebp = arg1;
        wr32(sp0 - 0x354u, sp0 - 0x340u);
        (void)sp0;
        return 1;
    }
    case 0x101c40f8u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x350u);
        in_esi = rd32(sp0 - 0x34cu);
        in_ebp = rd32(sp0 - 0x348u);
        in_ebx = rd32(sp0 - 0x344u);
        g->esp = sp0 - 0x350u;
        g->edx = 0u;
        g->ebp = arg1;
        wr32(sp0 - 0x354u, sp0 - 0x340u);
        (void)sp0;
        return 1;
    }
    case 0x101c4125u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x350u);
        in_esi = rd32(sp0 - 0x34cu);
        in_ebp = rd32(sp0 - 0x348u);
        in_ebx = rd32(sp0 - 0x344u);
        g->esp = sp0 - 0x350u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c4135u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x350u;
        g->ebp = arg1;
        wr32(sp0 - 0x354u, sp0 - 0x340u);
        (void)sp0;
        return 1;
    }
    case 0x101c4158u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x350u;
        wr32(sp0 - 0x360u, sp0 - 0x200u);
        wr32(sp0 - 0x354u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101c4080(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101c4080(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
