/* f_0x1010bda0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1010bda0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_804;
    uint32_t loc_808;
    uint32_t loc_80c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 2068u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1010bdb6u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; in_edi = g->edi; zf = g->zf; in_esi = rd32(sp0 - 0x808u); in_ebx = rd32(sp0 - 0x804u); g->ebx = rd32(sp0 - 0x804u); g->esi = rd32(sp0 - 0x808u); goto E_1010bdb6;
    case 0x1010bdbbu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; in_edi = g->edi; zf = g->zf; in_esi = rd32(sp0 - 0x808u); in_ebx = rd32(sp0 - 0x804u); g->ebx = rd32(sp0 - 0x804u); g->esi = rd32(sp0 - 0x808u); goto E_1010bdbb;
    case 0x1010bdbdu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; in_edi = g->edi; zf = g->zf; in_esi = rd32(sp0 - 0x808u); in_ebx = rd32(sp0 - 0x804u); g->ebx = rd32(sp0 - 0x804u); g->esi = rd32(sp0 - 0x808u); goto E_1010bdbd;
    case 0x1010bdc5u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; in_edi = g->edi; zf = g->zf; in_esi = rd32(sp0 - 0x808u); in_ebx = rd32(sp0 - 0x804u); g->ebx = rd32(sp0 - 0x804u); g->esi = rd32(sp0 - 0x808u); goto E_1010bdc5;
    case 0x1010bdcdu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; in_edi = g->edi; zf = g->zf; in_esi = rd32(sp0 - 0x808u); in_ebx = rd32(sp0 - 0x804u); g->ebx = rd32(sp0 - 0x804u); g->esi = rd32(sp0 - 0x808u); goto E_1010bdcd;
    case 0x1010bdd6u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; in_edi = g->edi; zf = g->zf; in_esi = rd32(sp0 - 0x808u); in_ebx = rd32(sp0 - 0x804u); g->ebx = rd32(sp0 - 0x804u); g->esi = rd32(sp0 - 0x808u); goto E_1010bdd6;
    case 0x1010bde6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = g->edi; zf = g->zf; goto E_1010bde6;
    case 0x1010bdebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = g->edi; zf = g->zf; goto E_1010bdeb;
    case 0x1010bdf7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; zf = g->zf; goto E_1010bdf7;
    case 0x1010bdfeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; zf = g->zf; goto E_1010bdfe;
    case 0x1010be02u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; zf = g->zf; goto E_1010be02;
    case 0x1010be07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; zf = g->zf; goto E_1010be07;
    case 0x1010be33u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; zf = g->zf; loc_80c = rd32(sp0 - 0x80cu); goto E_1010be33;
    case 0x1010be38u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; zf = g->zf; loc_80c = rd32(sp0 - 0x80cu); goto E_1010be38;
    case 0x1010be43u: eax = g->eax; edx = g->edx; ebx = g->ebx; in_edi = g->edi; zf = g->zf; loc_80c = rd32(sp0 - 0x80cu); goto E_1010be43;
    case 0x1010be53u: eax = g->eax; edx = g->edx; ebx = g->ebx; in_edi = g->edi; zf = g->zf; loc_80c = rd32(sp0 - 0x80cu); goto E_1010be53;
    case 0x1010be5cu: eax = g->eax; edx = g->edx; ebx = g->ebx; in_edi = g->edi; zf = g->zf; loc_80c = rd32(sp0 - 0x80cu); goto E_1010be5c;
    case 0x1010be65u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = g->edi; zf = g->zf; goto E_1010be65;
    case 0x1010be6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = g->edi; zf = g->zf; goto E_1010be6c;
    case 0x1010be73u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = g->edi; zf = g->zf; goto E_1010be73;
    case 0x1010be79u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = g->edi; zf = g->zf; goto E_1010be79;
    case 0x1010be7du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = g->edi; zf = g->zf; goto E_1010be7d;
    case 0x1010be81u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = g->edi; zf = g->zf; goto E_1010be81;
    case 0x1010be87u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = g->edi; zf = g->zf; goto E_1010be87;
    case 0x1010be8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = g->edi; zf = g->zf; goto E_1010be8b;
    case 0x1010be8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = g->edi; zf = g->zf; goto E_1010be8f;
    case 0x1010be96u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; zf = g->zf; goto E_1010be96;
    case 0x1010bea3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; zf = g->zf; loc_808 = rd32(sp0 - 0x808u); loc_804 = rd32(sp0 - 0x804u); goto E_1010bea3;
    default: break;
    }
#endif

    COW_AT(1010bda0)
    wr32(sp0 - 0x804u, in_ebx);
    wr32(sp0 - 0x808u, in_esi);
    if (rd32(arg2 + 4u) == 0u)
    {
        eax = rd32(arg2 + 4u);
    COW_AT(1010bdbb)
        ecx = 0u;
    }
    else
    {
        eax = rd32(arg2 + 4u);
    COW_AT(1010bdb6)
        ecx = rd32(eax + 4u);
    }
    COW_AT(1010bdbd)
    if (eax == 0u)
    {
        loc_804 = in_ebx;
        loc_808 = in_esi;
        goto L_1010bea3;
    }
    COW_AT(1010bdc5)
    if (ecx == 0u)
    {
        loc_804 = in_ebx;
        loc_808 = in_esi;
        goto L_1010bea3;
    }
    COW_AT(1010bdcd)
    if (rd8(ecx) == 0u)
    {
        loc_804 = in_ebx;
        loc_808 = in_esi;
        goto L_1010bea3;
    }
    COW_AT(1010bdd6)
    g->eax = eax;
    g->esp = sp0 - 0x808u;
    t1 = cow_thiscall(g, COW_IMG(0x10109540u), arg2, 0);
    if ((uint16_t)t1 <= 0x7feu)
    {
        ebx = t1;
    }
    else
    {
    COW_AT(1010bde6)
        ebx = 0x7feu;
    }
    COW_AT(1010bdeb)
    t2 = rd32(arg2 + 4u);
    wr16(sp0 - 0x800u, (uint16_t)ebx);
    if (t2 == 0u) goto L_1010be02;
    eax = t2;
    COW_AT(1010bdf7)
    if (rd32(eax + 4u) == 0u) goto L_1010be02;
    ecx = rd32(eax + 4u);
    COW_AT(1010bdfe)
    esi = ecx;
L_1010be07: ;
    COW_AT(1010be07)
    wr32(sp0 - 0x80cu, in_edi);
    edi = sp0 - 0x7feu;
    ecx = (uint16_t)ebx >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = ebx & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr8(sp0 + (uint16_t)ebx - 0x7feu, 0u);
    if ((int32_t)(ebx & 1u) >= 0)
    {
        eax = (uint16_t)ebx;
        edx = (uint16_t)ebx;
        zf = !(ebx & 1u);
    }
    else
    {
        eax = (uint16_t)ebx;
        ecx = ebx & 1u;
        edx = (uint16_t)ebx;
    COW_AT(1010be33)
        zf = (ecx - 1u | 0xfffffffeu) + 1u == 0u;
    }
    COW_AT(1010be38)
    if (zf)
    {
    COW_AT(1010be53)
        wr32(sp0 - 0x80cu, eax + 2u);
        wr32(sp0 - 0x810u, sp0 - 0x800u);
        loc_80c = eax + 2u;
        eax = sp0 - 0x800u;
    }
    else
    {
    COW_AT(1010be43)
        wr8(eax + sp0 - 0x7feu, 0u);
        wr32(sp0 - 0x80cu, eax + 3u);
        wr32(sp0 - 0x810u, sp0 - 0x800u);
        edx = sp0 - 0x800u;
        loc_80c = eax + 3u;
        eax = eax + 3u;
    }
    COW_AT(1010be5c)
    g->eax = eax;
    g->esp = sp0 - 0x808u;
    t3 = cow_fastcall(g, COW_IMG(0x1010c7c0u), arg1, edx, 2, sp0 - 0x800u, loc_80c);
    if (t3 == 0u)
    {
        loc_804 = rd32(sp0 - 0x804u);
        loc_808 = rd32(sp0 - 0x808u);
        goto L_1010bea3;
    }
    eax = t3;
    COW_AT(1010be65)
    if (rd32(arg1 + 8u) != 0u)
    {
        ecx = rd32(arg1 + 8u);
    COW_AT(1010be6c)
        if (rd32(ecx + 4u) == 0u)
        {
            edx = rd32(ecx + 4u);
            goto L_1010be79;
        }
        edx = rd32(ecx + 4u);
    COW_AT(1010be73)
        if (rd16(ecx + 0xau) >= (uint16_t)ebx) goto L_1010be7d;
L_1010be79: ;
    COW_AT(1010be79)
        wr16(ecx + 0xau, (uint16_t)ebx);
L_1010be7d: ;
    COW_AT(1010be7d)
        if (edx == 0u) goto L_1010be87;
    COW_AT(1010be81)
        if (rd16(ecx + 8u) <= (uint16_t)ebx) goto L_1010be8b;
L_1010be87: ;
    COW_AT(1010be87)
        wr16(ecx + 8u, (uint16_t)ebx);
L_1010be8b: ;
    COW_AT(1010be8b)
        wr32(ecx + 4u, edx + 1u);
    }
    COW_AT(1010be8f)
    if (rd32(arg1 + 8u) == 0u)
    {
        loc_804 = rd32(sp0 - 0x804u);
        loc_808 = rd32(sp0 - 0x808u);
        goto L_1010bea3;
    }
    ecx = rd32(arg1 + 8u);
    COW_AT(1010be96)
    g->ebx = rd32(sp0 - 0x804u);
    g->esi = rd32(sp0 - 0x808u);
    g->edi = in_edi;
    return eax - ecx;
L_1010be02: ;
    COW_AT(1010be02)
    esi = COW_IMG(0x103d3c84u);
    goto L_1010be07;
L_1010bea3: ;
    COW_AT(1010bea3)
    g->ebx = loc_804;
    g->esi = loc_808;
    g->edi = in_edi;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1010bda0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1010bdb6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        in_edi = g->edi;
        zf = g->zf;
        in_esi = rd32(sp0 - 0x808u);
        in_ebx = rd32(sp0 - 0x804u);
        g->esp = sp0 - 0x808u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1010bdbbu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        in_edi = g->edi;
        zf = g->zf;
        in_esi = rd32(sp0 - 0x808u);
        in_ebx = rd32(sp0 - 0x804u);
        g->esp = sp0 - 0x808u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1010bdbdu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        in_edi = g->edi;
        zf = g->zf;
        in_esi = rd32(sp0 - 0x808u);
        in_ebx = rd32(sp0 - 0x804u);
        g->esp = sp0 - 0x808u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1010bdc5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        in_edi = g->edi;
        zf = g->zf;
        in_esi = rd32(sp0 - 0x808u);
        in_ebx = rd32(sp0 - 0x804u);
        g->esp = sp0 - 0x808u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1010bdcdu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        in_edi = g->edi;
        zf = g->zf;
        in_esi = rd32(sp0 - 0x808u);
        in_ebx = rd32(sp0 - 0x804u);
        g->esp = sp0 - 0x808u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1010bdd6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        in_edi = g->edi;
        zf = g->zf;
        in_esi = rd32(sp0 - 0x808u);
        in_ebx = rd32(sp0 - 0x804u);
        g->esp = sp0 - 0x808u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1010bde6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x808u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1010bdebu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x808u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1010bdf7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x808u;
        (void)sp0;
        return 1;
    }
    case 0x1010bdfeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x808u;
        (void)sp0;
        return 1;
    }
    case 0x1010be02u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x808u;
        (void)sp0;
        return 1;
    }
    case 0x1010be07u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x808u;
        (void)sp0;
        return 1;
    }
    case 0x1010be33u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t loc_80c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        loc_80c = rd32(sp0 - 0x80cu);
        g->esp = sp0 - 0x808u;
        (void)sp0;
        return 1;
    }
    case 0x1010be38u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t loc_80c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        loc_80c = rd32(sp0 - 0x80cu);
        g->esp = sp0 - 0x808u;
        (void)sp0;
        return 1;
    }
    case 0x1010be43u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t loc_80c;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        zf = g->zf;
        loc_80c = rd32(sp0 - 0x80cu);
        g->esp = sp0 - 0x808u;
        g->ecx = arg1;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1010be53u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t loc_80c;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        zf = g->zf;
        loc_80c = rd32(sp0 - 0x80cu);
        g->esp = sp0 - 0x808u;
        g->ecx = arg1;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1010be5cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t loc_80c;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        zf = g->zf;
        loc_80c = rd32(sp0 - 0x80cu);
        g->esp = sp0 - 0x810u;
        g->ecx = arg1;
        g->esi = arg1;
        wr32(sp0 - 0x810u, sp0 - 0x800u);
        (void)sp0;
        return 1;
    }
    case 0x1010be65u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x808u;
        g->esi = arg1;
        wr32(sp0 - 0x810u, sp0 - 0x800u);
        (void)sp0;
        return 1;
    }
    case 0x1010be6cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x808u;
        g->esi = arg1;
        wr32(sp0 - 0x810u, sp0 - 0x800u);
        (void)sp0;
        return 1;
    }
    case 0x1010be73u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x808u;
        g->esi = arg1;
        wr32(sp0 - 0x810u, sp0 - 0x800u);
        (void)sp0;
        return 1;
    }
    case 0x1010be79u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x808u;
        g->esi = arg1;
        wr32(sp0 - 0x810u, sp0 - 0x800u);
        (void)sp0;
        return 1;
    }
    case 0x1010be7du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x808u;
        g->esi = arg1;
        wr32(sp0 - 0x810u, sp0 - 0x800u);
        (void)sp0;
        return 1;
    }
    case 0x1010be81u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x808u;
        g->esi = arg1;
        wr32(sp0 - 0x810u, sp0 - 0x800u);
        (void)sp0;
        return 1;
    }
    case 0x1010be87u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x808u;
        g->esi = arg1;
        wr32(sp0 - 0x810u, sp0 - 0x800u);
        (void)sp0;
        return 1;
    }
    case 0x1010be8bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x808u;
        g->esi = arg1;
        wr32(sp0 - 0x810u, sp0 - 0x800u);
        (void)sp0;
        return 1;
    }
    case 0x1010be8fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x808u;
        g->esi = arg1;
        wr32(sp0 - 0x810u, sp0 - 0x800u);
        (void)sp0;
        return 1;
    }
    case 0x1010be96u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x808u;
        wr32(sp0 - 0x810u, sp0 - 0x800u);
        (void)sp0;
        return 1;
    }
    case 0x1010bea3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t loc_804;
        uint32_t loc_808;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        loc_808 = rd32(sp0 - 0x808u);
        loc_804 = rd32(sp0 - 0x804u);
        g->esp = sp0 - 0x808u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1010bda0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1010bda0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
