/* f_0x101c96d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101c96d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101c96d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = g->edi; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101c96d9;
    case 0x101c96ddu: in_eax = g->eax; self = g->ecx; in_ebx = g->ebx; in_edi = g->edi; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101c96dd;
    case 0x101c96f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_101c96f7;
    case 0x101c96fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_101c96fc;
    case 0x101c9700u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_101c9700;
    case 0x101c9707u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_101c9707;
    case 0x101c9709u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_101c9709;
    case 0x101c9715u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_101c9715;
    case 0x101c971au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_101c971a;
    case 0x101c971fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_101c971f;
    case 0x101c9729u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_101c9729;
    case 0x101c972eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_101c972e;
    case 0x101c9738u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_101c9738;
    case 0x101c9749u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_101c9749;
    case 0x101c9751u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_101c9751;
    case 0x101c9756u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_101c9756;
    case 0x101c975au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_101c975a;
    case 0x101c9766u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_101c9766;
    case 0x101c976fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_101c976f;
    case 0x101c9772u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_101c9772;
    case 0x101c9776u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = g->edi; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101c9776;
    case 0x101c9777u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = g->edi; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101c9777;
    default: break;
    }
#endif

    COW_AT(101c96d0)
    if (arg2 != 0u) goto L_101c96dd;
    COW_AT(101c96d9)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 0u;
L_101c96dd: ;
    COW_AT(101c96dd)
    g->eax = in_eax;
    g->ecx = self;
    g->esp = sp0 - 0xcu;
    t1 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 0u);
    t2 = g->ecx;
    if (rd8(arg2) == 0u)
    {
        eax = 0u;
        ebx = rd32(sp0 + 4u);
        goto L_101c976f;
    }
    eax = 0u;
    ecx = (t2 & 0xffffff00u) | rd8(arg2);
    ebx = rd32(sp0 + 4u);
    edi = t1;
L_101c96f7: ;
    COW_AT(101c96f7)
    if ((int16_t)ebx <= 0)
    {
        sf = (int16_t)ebx < 0;
        goto L_101c9772;
    }
    COW_AT(101c96fc)
    if ((int32_t)eax <= 0)
    {
    COW_AT(101c9707)
        edx = 0u;
    }
    else
    {
    COW_AT(101c9700)
        edx = (uint32_t)(int8_t)rd8(arg2 + eax - 1u);
    }
    COW_AT(101c9709)
    t3 = rd8(arg2 + eax);
    wr8(sp0 + 4u, (uint8_t)t3);
    if ((uint8_t)t3 == 0x85u)
    {
        ecx = (ecx & 0xffffff00u) | t3;
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | t3;
    COW_AT(101c9715)
        if ((uint8_t)edx != 0x85u) goto L_101c9738;
    COW_AT(101c971a)
        if ((uint8_t)ecx != 0xdau) goto L_101c9729;
    COW_AT(101c971f)
        ecx = rd32(rd32(edi) + 0x17cu);
L_101c9756: ;
    COW_AT(101c9756)
        if (ecx != 0u)
        {
    COW_AT(101c975a)
            ebx = ebx + ((edx & 0xffff0000u) | (uint16_t)(rd16(ecx + 0x20u) - rd16(ecx + 0x22u))) + 1u;
        }
    }
L_101c9766: ;
    COW_AT(101c9766)
    if (rd8(arg2 + eax + 1u) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(arg2 + eax + 1u);
        eax = eax + 1u;
        goto L_101c96f7;
    }
    eax = eax + 1u;
L_101c976f: ;
    COW_AT(101c976f)
    sf = (int16_t)ebx < 0;
L_101c9772: ;
    COW_AT(101c9772)
    if (sf)
    {
    COW_AT(101c9776)
        eax = eax - 1u;
    }
    COW_AT(101c9777)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return eax;
L_101c9729: ;
    COW_AT(101c9729)
    if ((uint8_t)ecx != 0xc8u) goto L_101c9738;
    COW_AT(101c972e)
    ecx = rd32(rd32(edi) + 0x180u);
    edx = rd32(edi);
    goto L_101c9756;
L_101c9738: ;
    COW_AT(101c9738)
    if ((int32_t)((uint8_t)rd32(sp0 + 4u) - 0x20u) < 0)
    {
        ecx = (uint8_t)rd32(sp0 + 4u) - 0x20u;
        goto L_101c9766;
    }
    ecx = (uint8_t)rd32(sp0 + 4u) - 0x20u;
    COW_AT(101c9749)
    if ((int32_t)ecx > 139) goto L_101c9766;
    COW_AT(101c9751)
    ecx = rd32(ecx * 4u + rd32(edi));
    edx = rd32(edi);
    goto L_101c9756;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101c96d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101c96d9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = g->edi;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101c96ddu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        in_eax = g->eax;
        self = g->ecx;
        in_ebx = g->ebx;
        in_edi = g->edi;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101c96f7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101c96fcu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101c9700u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101c9707u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101c9709u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101c9715u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101c971au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101c971fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101c9729u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101c972eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101c9738u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101c9749u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101c9751u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101c9756u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101c975au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101c9766u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101c976fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101c9772u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->of = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x101c9776u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = g->edi;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101c9777u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = g->edi;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101c96d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101c96d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
