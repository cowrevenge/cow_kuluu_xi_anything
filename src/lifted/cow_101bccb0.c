/* f_0x101bccb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101bccb0(Guest* g)
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 732u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101bccfdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101bccfd;
    case 0x101bcd01u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101bcd01;
    case 0x101bcd10u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101bcd10;
    case 0x101bcd39u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101bcd39;
    case 0x101bcd3du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101bcd3d;
    case 0x101bcd45u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101bcd45;
    case 0x101bcd4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101bcd4c;
    case 0x101bcd5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101bcd5b;
    case 0x101bcd7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101bcd7a;
    case 0x101bcdafu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101bcdaf;
    case 0x101bcdd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101bcdd5;
    case 0x101bcdd9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101bcdd9;
    case 0x101bcdddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101bcddd;
    case 0x101bcde4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101bcde4;
    case 0x101bcdf3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101bcdf3;
    case 0x101bce00u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101bce00;
    case 0x101bce07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101bce07;
    case 0x101bce11u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101bce11;
    case 0x101bce18u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101bce18;
    case 0x101bce1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101bce1c;
    case 0x101bce23u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101bce23;
    default: break;
    }
#endif

    COW_AT(101bccb0)
    wr32(sp0 - 0x2a8u, in_ebx);
    wr32(sp0 - 0x2acu, in_esi);
    wr32(sp0 - 0x2b0u, in_edi);
    edi = sp0 - 0x244u;
    eax = 0u;
    ecx = 0x41u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x2a0u, 0x104u);
    wr32(sp0 - 0x2a4u, 0u);
    wr32(sp0 - 0x2b4u, sp0 - 0x2a4u);
    wr32(sp0 - 0x2b8u, 0xf003fu);
    wr32(sp0 - 0x2bcu, 0u);
    t1 = rd32(COW_IMG(0x1037ca08u) + rd32(rd32(COW_IMG(0x10456a28u)) + 4u) * 4u);
    wr32(sp0 - 0x2c0u, t1);
    wr32(sp0 - 0x2c4u, 0x80000002u);
    g->eax = t1;
    t2 = rd32(rd32(COW_IMG(0x10456a28u)) + 4u);
    g->esp = sp0 - 0x2b0u;
    t3 = cow_stdcall(g, rd32(COW_IMG(0x1032901cu)), 5, 0x80000002u, t1, 0u, 0xf003fu, sp0 - 0x2a4u);   /* advapi32.dll!RegOpenKeyExA */
    eax = t3;
    esi = t2;
    COW_AT(101bccfd)
    if (eax == 0u) goto L_101bcd10;
    COW_AT(101bcd01)
    g->ebx = rd32(sp0 - 0x2a8u);
    g->esi = rd32(sp0 - 0x2acu);
    g->edi = rd32(sp0 - 0x2b0u);
    return 1u;
L_101bcd10: ;
    COW_AT(101bcd10)
    wr32(sp0 - 0x2b4u, sp0 - 0x2a0u);
    wr32(sp0 - 0x2b8u, sp0 - 0x244u);
    wr32(sp0 - 0x2bcu, sp0 - 0x29cu);
    wr32(sp0 - 0x2c0u, 0u);
    wr32(sp0 - 0x2c4u, COW_IMG(0x1034f498u));
    t4 = rd32(sp0 - 0x2a4u);
    wr32(sp0 - 0x2c8u, t4);
    wr32(sp0 - 0x29cu, 0u);
    g->eax = sp0 - 0x244u;
    g->ecx = sp0 - 0x29cu;
    g->edx = sp0 - 0x2a0u;
    g->esp = sp0 - 0x2b0u;
    t5 = cow_stdcall(g, rd32(COW_IMG(0x1032900cu)), 6, t4, COW_IMG(0x1034f498u), 0u, sp0 - 0x29cu, sp0 - 0x244u, sp0 - 0x2a0u);   /* advapi32.dll!RegQueryValueExA */
    t6 = g->ecx;
    t7 = g->edx;
    eax = t5;
    ecx = t6;
    edx = t7;
    ebx = t4;
    COW_AT(101bcd39)
    if (eax == 0u) goto L_101bcd5b;
    COW_AT(101bcd3d)
    if (ebx == 0u) goto L_101bcde4;
    COW_AT(101bcd45)
    wr32(sp0 - 0x2b4u, ebx);
    g->esp = sp0 - 0x2b0u;
    cow_stdcall(g, rd32(COW_IMG(0x10329024u)), 1, ebx);   /* advapi32.dll!RegCloseKey */
    COW_AT(101bcd4c)
    g->ebx = rd32(sp0 - 0x2a8u);
    g->esi = rd32(sp0 - 0x2acu);
    g->edi = rd32(sp0 - 0x2b0u);
    return 1u;
L_101bcd5b: ;
    COW_AT(101bcd5b)
    t8 = rd32(COW_IMG(0x1037ca14u) + esi * 4u);
    wr32(sp0 - 0x2b4u, t8);
    wr32(sp0 - 0x2b8u, sp0 - 0x244u);
    wr32(sp0 - 0x2bcu, COW_IMG(0x1037ca90u));
    wr32(sp0 - 0x2c0u, sp0 - 0x140u);
    g->ebx = ebx;
    g->esp = sp0 - 0x2acu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x140u, COW_IMG(0x1037ca90u), sp0 - 0x244u, t8, rd32(sp0 - 0x2b0u));
    COW_AT(101bcd7a)
    wr32(sp0 - 0x298u, 0u);
    edi = sp0 - 0x288u;
    eax = 0u;
    ecx = 0x11u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x294u, 0u);
    wr32(sp0 - 0x290u, 0u);
    wr32(sp0 - 0x2b4u, sp0 - 0x288u);
    wr32(sp0 - 0x28cu, 0u);
    wr32(sp0 - 0x288u, 0x44u);
    g->esp = sp0 - 0x2b0u;
    cow_stdcall(g, rd32(COW_IMG(0x10329204u)), 1, sp0 - 0x288u);   /* kernel32.dll!GetStartupInfoA */
    COW_AT(101bcdaf)
    wr32(sp0 - 0x2b4u, sp0 - 0x298u);
    wr32(sp0 - 0x2b8u, sp0 - 0x288u);
    wr32(sp0 - 0x2bcu, 0u);
    wr32(sp0 - 0x2c0u, 0u);
    wr32(sp0 - 0x2c4u, 0u);
    wr32(sp0 - 0x2c8u, 0u);
    wr32(sp0 - 0x2ccu, 0u);
    wr32(sp0 - 0x2d0u, 0u);
    wr32(sp0 - 0x2d4u, sp0 - 0x140u);
    wr32(sp0 - 0x2d8u, 0u);
    g->eax = sp0 - 0x140u;
    g->ecx = sp0 - 0x298u;
    g->edx = sp0 - 0x288u;
    g->esp = sp0 - 0x2b0u;
    t9 = cow_stdcall(g, rd32(COW_IMG(0x10329200u)), 10, 0u, sp0 - 0x140u, 0u, 0u, 0u, 0u, 0u, 0u, sp0 - 0x288u, sp0 - 0x298u);   /* kernel32.dll!CreateProcessA */
    t10 = g->ecx;
    t11 = g->edx;
    eax = t9;
    ecx = t10;
    edx = t11;
    COW_AT(101bcdd5)
    if (eax != 0u) goto L_101bcdf3;
    COW_AT(101bcdd9)
    if (ebx != 0u)
    {
    COW_AT(101bcddd)
        wr32(sp0 - 0x2b4u, ebx);
        g->esp = sp0 - 0x2b0u;
        cow_stdcall(g, rd32(COW_IMG(0x10329024u)), 1, ebx);   /* advapi32.dll!RegCloseKey */
    }
L_101bcde4: ;
    COW_AT(101bcde4)
    g->ebx = rd32(sp0 - 0x2a8u);
    g->esi = rd32(sp0 - 0x2acu);
    g->edi = rd32(sp0 - 0x2b0u);
    return 1u;
L_101bcdf3: ;
    COW_AT(101bcdf3)
    t12 = rd32(sp0 - 0x294u);
    wr32(sp0 - 0x2b4u, t12);
    g->eax = eax;
    g->ecx = t12;
    t13 = rd32(COW_IMG(0x10329104u));
    g->esp = sp0 - 0x2b0u;
    t14 = cow_stdcall(g, t13, 1, t12);   /* kernel32.dll!CloseHandle */
    t15 = g->ecx;
    eax = t14;
    ecx = t15;
    esi = t13;
    COW_AT(101bce00)
    t16 = rd32(sp0 - 0x298u);
    wr32(sp0 - 0x2b4u, t16);
    g->eax = eax;
    g->edx = t16;
    g->esp = sp0 - 0x2b0u;
    t17 = cow_thiscall(g, esi, ecx, 1, t16);
    t18 = g->edx;
    eax = t17;
    edx = t18;
    COW_AT(101bce07)
    if (rd32(COW_IMG(0x10455c20u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x10455c20u));
    }
    else
    {
        ecx = rd32(COW_IMG(0x10455c20u));
    COW_AT(101bce11)
        wr32(sp0 - 0x2b4u, 1u);
        g->edx = edx;
        g->esp = sp0 - 0x2b0u;
        t19 = cow_call_regs(g, COW_IMG(0x10005600u), eax, ecx, g->edx, 0, 1, 1u);
        t20 = g->ecx;
        t21 = g->edx;
        eax = t19;
        ecx = t20;
        edx = t21;
    }
    COW_AT(101bce18)
    if (ebx != 0u)
    {
    COW_AT(101bce1c)
        wr32(sp0 - 0x2b4u, ebx);
        g->esp = sp0 - 0x2b0u;
        cow_stdcall(g, rd32(COW_IMG(0x10329024u)), 1, ebx);   /* advapi32.dll!RegCloseKey */
    }
    COW_AT(101bce23)
    g->ebx = rd32(sp0 - 0x2a8u);
    g->esi = rd32(sp0 - 0x2acu);
    g->edi = rd32(sp0 - 0x2b0u);
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101bccb0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101bccfdu:
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
        g->esp = sp0 - 0x2b0u;
        wr32(sp0 - 0x2b4u, sp0 - 0x2a4u);
        (void)sp0;
        return 1;
    }
    case 0x101bcd01u:
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
        g->esp = sp0 - 0x2b0u;
        wr32(sp0 - 0x2b4u, sp0 - 0x2a4u);
        (void)sp0;
        return 1;
    }
    case 0x101bcd10u:
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
        g->esp = sp0 - 0x2b0u;
        wr32(sp0 - 0x2b4u, sp0 - 0x2a4u);
        (void)sp0;
        return 1;
    }
    case 0x101bcd39u:
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
        g->esp = sp0 - 0x2b0u;
        wr32(sp0 - 0x2bcu, sp0 - 0x29cu);
        wr32(sp0 - 0x2b8u, sp0 - 0x244u);
        wr32(sp0 - 0x2b4u, sp0 - 0x2a0u);
        (void)sp0;
        return 1;
    }
    case 0x101bcd3du:
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
        g->esp = sp0 - 0x2b0u;
        wr32(sp0 - 0x2bcu, sp0 - 0x29cu);
        wr32(sp0 - 0x2b8u, sp0 - 0x244u);
        wr32(sp0 - 0x2b4u, sp0 - 0x2a0u);
        (void)sp0;
        return 1;
    }
    case 0x101bcd45u:
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
        g->esp = sp0 - 0x2b0u;
        wr32(sp0 - 0x2bcu, sp0 - 0x29cu);
        wr32(sp0 - 0x2b8u, sp0 - 0x244u);
        wr32(sp0 - 0x2b4u, sp0 - 0x2a0u);
        (void)sp0;
        return 1;
    }
    case 0x101bcd4cu:
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
        g->esp = sp0 - 0x2b0u;
        wr32(sp0 - 0x2bcu, sp0 - 0x29cu);
        wr32(sp0 - 0x2b8u, sp0 - 0x244u);
        (void)sp0;
        return 1;
    }
    case 0x101bcd5bu:
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
        g->esp = sp0 - 0x2b0u;
        wr32(sp0 - 0x2bcu, sp0 - 0x29cu);
        wr32(sp0 - 0x2b8u, sp0 - 0x244u);
        wr32(sp0 - 0x2b4u, sp0 - 0x2a0u);
        (void)sp0;
        return 1;
    }
    case 0x101bcd7au:
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
        g->esp = sp0 - 0x2c0u;
        wr32(sp0 - 0x2c0u, sp0 - 0x140u);
        wr32(sp0 - 0x2b8u, sp0 - 0x244u);
        (void)sp0;
        return 1;
    }
    case 0x101bcdafu:
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
        g->esp = sp0 - 0x2b0u;
        wr32(sp0 - 0x2b4u, sp0 - 0x288u);
        (void)sp0;
        return 1;
    }
    case 0x101bcdd5u:
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
        g->esp = sp0 - 0x2b0u;
        wr32(sp0 - 0x2d4u, sp0 - 0x140u);
        wr32(sp0 - 0x2b8u, sp0 - 0x288u);
        wr32(sp0 - 0x2b4u, sp0 - 0x298u);
        (void)sp0;
        return 1;
    }
    case 0x101bcdd9u:
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
        g->esp = sp0 - 0x2b0u;
        wr32(sp0 - 0x2d4u, sp0 - 0x140u);
        wr32(sp0 - 0x2b8u, sp0 - 0x288u);
        wr32(sp0 - 0x2b4u, sp0 - 0x298u);
        (void)sp0;
        return 1;
    }
    case 0x101bcdddu:
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
        g->esp = sp0 - 0x2b0u;
        wr32(sp0 - 0x2d4u, sp0 - 0x140u);
        wr32(sp0 - 0x2b8u, sp0 - 0x288u);
        wr32(sp0 - 0x2b4u, sp0 - 0x298u);
        (void)sp0;
        return 1;
    }
    case 0x101bcde4u:
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
        g->esp = sp0 - 0x2b0u;
        (void)sp0;
        return 1;
    }
    case 0x101bcdf3u:
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
        g->esp = sp0 - 0x2b0u;
        wr32(sp0 - 0x2d4u, sp0 - 0x140u);
        wr32(sp0 - 0x2b8u, sp0 - 0x288u);
        wr32(sp0 - 0x2b4u, sp0 - 0x298u);
        (void)sp0;
        return 1;
    }
    case 0x101bce00u:
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
        g->esp = sp0 - 0x2b0u;
        wr32(sp0 - 0x2d4u, sp0 - 0x140u);
        wr32(sp0 - 0x2b8u, sp0 - 0x288u);
        (void)sp0;
        return 1;
    }
    case 0x101bce07u:
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
        g->esp = sp0 - 0x2b0u;
        wr32(sp0 - 0x2d4u, sp0 - 0x140u);
        wr32(sp0 - 0x2b8u, sp0 - 0x288u);
        (void)sp0;
        return 1;
    }
    case 0x101bce11u:
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
        g->esp = sp0 - 0x2b0u;
        wr32(sp0 - 0x2d4u, sp0 - 0x140u);
        wr32(sp0 - 0x2b8u, sp0 - 0x288u);
        (void)sp0;
        return 1;
    }
    case 0x101bce18u:
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
        g->esp = sp0 - 0x2b0u;
        wr32(sp0 - 0x2d4u, sp0 - 0x140u);
        wr32(sp0 - 0x2b8u, sp0 - 0x288u);
        (void)sp0;
        return 1;
    }
    case 0x101bce1cu:
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
        g->esp = sp0 - 0x2b0u;
        wr32(sp0 - 0x2d4u, sp0 - 0x140u);
        wr32(sp0 - 0x2b8u, sp0 - 0x288u);
        (void)sp0;
        return 1;
    }
    case 0x101bce23u:
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
        g->esp = sp0 - 0x2b0u;
        wr32(sp0 - 0x2d4u, sp0 - 0x140u);
        wr32(sp0 - 0x2b8u, sp0 - 0x288u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101bccb0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101bccb0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
