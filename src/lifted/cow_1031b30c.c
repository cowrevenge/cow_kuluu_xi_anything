/* f_0x1031b30c - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_1031b30c(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d4;
    double d5;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    double loc_18_d;
    double loc_c_d;
    uint32_t t6;
    uint32_t t7;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_esi = g->esi;
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1031b327u: eax = g->eax; ecx = g->ecx; in_esi = rd32(sp0 - 0x10u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_1031b327;
    case 0x1031b329u: eax = g->eax; ecx = g->ecx; in_esi = rd32(sp0 - 0x10u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_1031b329;
    case 0x1031b33bu: in_esi = rd32(sp0 - 0x10u); loc_c_d = rdf64(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_1031b33b;
    case 0x1031b340u: ecx = g->ecx; in_esi = rd32(sp0 - 0x10u); loc_c_d = rdf64(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_1031b340;
    case 0x1031b34eu: eax = g->eax; ecx = g->ecx; in_esi = rd32(sp0 - 0x10u); loc_c_d = rdf64(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_1031b34e;
    case 0x1031b35cu: eax = g->eax; ecx = g->ecx; esi = g->esi; in_esi = rd32(sp0 - 0x10u); loc_c_d = rdf64(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_1031b35c;
    case 0x1031b36fu: in_esi = rd32(sp0 - 0x10u); loc_c_d = rdf64(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_1031b36f;
    case 0x1031b374u: in_esi = rd32(sp0 - 0x10u); loc_c_d = rdf64(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_1031b374;
    case 0x1031b379u: ecx = g->ecx; in_esi = rd32(sp0 - 0x10u); loc_c_d = rdf64(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_1031b379;
    case 0x1031b387u: eax = g->eax; ecx = g->ecx; in_esi = rd32(sp0 - 0x10u); loc_c_d = rdf64(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_1031b387;
    case 0x1031b395u: eax = g->eax; ecx = g->ecx; in_esi = rd32(sp0 - 0x10u); loc_c_d = rdf64(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_1031b395;
    case 0x1031b397u: in_esi = rd32(sp0 - 0x10u); loc_c_d = rdf64(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_1031b397;
    case 0x1031b39cu: ecx = g->ecx; in_esi = rd32(sp0 - 0x10u); loc_c_d = rdf64(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_1031b39c;
    case 0x1031b3a5u: ecx = g->ecx; in_esi = rd32(sp0 - 0x10u); loc_c_d = rdf64(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_1031b3a5;
    case 0x1031b3b3u: eax = g->eax; ecx = g->ecx; in_esi = rd32(sp0 - 0x10u); loc_c_d = rdf64(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_1031b3b3;
    case 0x1031b3bbu: eax = g->eax; ecx = g->ecx; in_esi = rd32(sp0 - 0x10u); loc_c_d = rdf64(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_1031b3bb;
    case 0x1031b3c9u: eax = g->eax; ecx = g->ecx; in_esi = rd32(sp0 - 0x10u); loc_c_d = rdf64(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_1031b3c9;
    case 0x1031b3cdu: in_esi = rd32(sp0 - 0x10u); loc_c_d = rdf64(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_1031b3cd;
    case 0x1031b3d2u: in_esi = rd32(sp0 - 0x10u); loc_c_d = rdf64(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_1031b3d2;
    case 0x1031b3d7u: in_esi = rd32(sp0 - 0x10u); loc_c_d = rdf64(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_1031b3d7;
    case 0x1031b3e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_18_d = rdf64(sp0 - 0x18u); in_esi = rd32(sp0 - 0x10u); loc_c_d = rdf64(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_1031b3e4;
    case 0x1031b3f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_18_d = rdf64(sp0 - 0x18u); in_esi = rd32(sp0 - 0x10u); loc_c_d = rdf64(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_1031b3f6;
    case 0x1031b401u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_18_d = rdf64(sp0 - 0x18u); in_esi = rd32(sp0 - 0x10u); loc_c_d = rdf64(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_1031b401;
    case 0x1031b403u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_18_d = rdf64(sp0 - 0x18u); in_esi = rd32(sp0 - 0x10u); loc_c_d = rdf64(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_1031b403;
    case 0x1031b40bu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_18_d = rdf64(sp0 - 0x18u); in_esi = rd32(sp0 - 0x10u); loc_c_d = rdf64(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_1031b40b;
    case 0x1031b419u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_18_d = rdf64(sp0 - 0x18u); in_esi = rd32(sp0 - 0x10u); loc_c_d = rdf64(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_1031b419;
    case 0x1031b41eu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_18_d = rdf64(sp0 - 0x18u); in_esi = rd32(sp0 - 0x10u); loc_c_d = rdf64(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_1031b41e;
    case 0x1031b426u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_18_d = rdf64(sp0 - 0x18u); in_esi = rd32(sp0 - 0x10u); loc_c_d = rdf64(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_1031b426;
    case 0x1031b428u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_18_d = rdf64(sp0 - 0x18u); in_esi = rd32(sp0 - 0x10u); loc_c_d = rdf64(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_1031b428;
    case 0x1031b430u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_18_d = rdf64(sp0 - 0x18u); in_esi = rd32(sp0 - 0x10u); loc_c_d = rdf64(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_1031b430;
    case 0x1031b432u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_18_d = rdf64(sp0 - 0x18u); in_esi = rd32(sp0 - 0x10u); loc_c_d = rdf64(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_1031b432;
    case 0x1031b437u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_18_d = rdf64(sp0 - 0x18u); in_esi = rd32(sp0 - 0x10u); loc_c_d = rdf64(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_1031b437;
    default: break;
    }
#endif

    COW_AT(1031b30c)
    d1 = rdf64(sp0 + 4u);
    if (d1 >= rdf64(COW_IMG(0x1034a1d8u)))
    {
        x0 = rdf64(sp0 + 4u);
    }
    else
    {
        x0 = rdf64(sp0 + 4u);
    COW_AT(1031b327)
        x0 = -x0;
    }
    COW_AT(1031b329)
    if (rd32(sp0 + 0x10u) != 0x7ff00000u)
    {
        loc_c_d = x0;
        goto L_1031b36f;
    }
    loc_c_d = x0;
    COW_AT(1031b33b)
    if (rd32(sp0 + 0xcu) != 0u) goto L_1031b397;
    COW_AT(1031b340)
    if (loc_c_d > rdf64(COW_IMG(0x1034a1e0u))) goto L_1031b3b3;
    eax = (uint16_t)cow_fsw(g, loc_c_d, rdf64(COW_IMG(0x1034a1e0u)), 0u) | 0x7ff00000u;
    COW_AT(1031b34e)
    if (!(loc_c_d >= rdf64(COW_IMG(0x1034a1e0u)))) goto L_1031b3c9;
L_1031b35c: ;
    COW_AT(1031b35c)
    d2 = rdf64(COW_IMG(0x103d2c40u));
    wrf64(arg5, d2);
    edx = 0u;
    esi = 1u;
L_1031b437: ;
    COW_AT(1031b437)
    g->esi = in_esi;
    g->edx = edx;
    return esi;
L_1031b36f: ;
    COW_AT(1031b36f)
    if (rd32(sp0 + 0x10u) != 0xfff00000u) goto L_1031b397;
    COW_AT(1031b374)
    if (rd32(sp0 + 0xcu) != 0u) goto L_1031b397;
    COW_AT(1031b379)
    if (loc_c_d > rdf64(COW_IMG(0x1034a1e0u))) goto L_1031b3c9;
    eax = (uint16_t)cow_fsw(g, loc_c_d, rdf64(COW_IMG(0x1034a1e0u)), 0u) | 0x7ff00000u;
    COW_AT(1031b387)
    if (loc_c_d >= rdf64(COW_IMG(0x1034a1e0u))) goto L_1031b35c;
    COW_AT(1031b395)
L_1031b3b3: ;
    COW_AT(1031b3b3)
    edx = 0u;
    x0 = rdf64(COW_IMG(0x103d2c38u));
L_1031b432: ;
    COW_AT(1031b432)
    wrf64(arg5, x0);
    esi = 0u;
    goto L_1031b437;
L_1031b397: ;
    COW_AT(1031b397)
    if (arg2 != 0x7ff00000u) goto L_1031b3cd;
    COW_AT(1031b39c)
    if (arg1 != 0u)
    {
        edx = 0u;
        esi = 0u;
        goto L_1031b437;
    }
    COW_AT(1031b3a5)
    d3 = rdf64(sp0 + 0xcu);
    if (!(d3 > rdf64(COW_IMG(0x1034a1d8u))))
    {
        eax = (uint16_t)cow_fsw(g, d3, rdf64(COW_IMG(0x1034a1d8u)), 0u) | 0x7ff00000u;
        goto L_1031b3bb;
    }
    goto L_1031b3b3;
L_1031b3bb: ;
    COW_AT(1031b3bb)
    d4 = rdf64(sp0 + 0xcu);
    if (d4 >= rdf64(COW_IMG(0x1034a1d8u)))
    {
        edx = 0u;
        goto L_1031b430;
    }
L_1031b3c9: ;
    COW_AT(1031b3c9)
    edx = 0u;
    x0 = 0.0;
    goto L_1031b432;
L_1031b3cd: ;
    COW_AT(1031b3cd)
    if (arg2 != 0xfff00000u)
    {
        edx = 0u;
        esi = 0u;
        goto L_1031b437;
    }
    COW_AT(1031b3d2)
    if (arg1 != 0u)
    {
        edx = 0u;
        esi = 0u;
        goto L_1031b437;
    }
    COW_AT(1031b3d7)
    d5 = rdf64(sp0 + 0xcu);
    g->eax = 0x7ff00000u;
    g->edx = 0u;
    g->esp = sp0 - 4u;
    t6 = cow_thiscall_cdecl(g, COW_IMG(0x1031b43cu), 0xfff00000u, 5, cow_dlo(d5), cow_dhi(d5), in_esi, cow_dlo(loc_c_d), cow_dhi(loc_c_d));
    t7 = g->edx;
    eax = t6;
    edx = t7;
    loc_18_d = d5;
    COW_AT(1031b3e4)
    d8 = rdf64(sp0 + 0xcu);
    if (!(d8 > rdf64(COW_IMG(0x1034a1d8u))))
    {
        ecx = eax;
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, rdf64(COW_IMG(0x1034a1d8u)), 0u);
        goto L_1031b40b;
    }
    ecx = eax;
    COW_AT(1031b3f6)
    if (ecx != 1u)
    {
        x0 = rdf64(COW_IMG(0x103d2c38u));
    }
    else
    {
        x0 = rdf64(COW_IMG(0x103d2c38u));
    COW_AT(1031b401)
        x0 = -x0;
    }
    COW_AT(1031b403)
    wrf64(sp0 + 0xcu, x0);
    x0 = rdf64(sp0 + 0xcu);
    goto L_1031b432;
L_1031b40b: ;
    COW_AT(1031b40b)
    d9 = rdf64(sp0 + 0xcu);
    if (d9 >= rdf64(COW_IMG(0x1034a1d8u))) goto L_1031b430;
    COW_AT(1031b419)
    if (ecx != 1u)
    {
    COW_AT(1031b426)
        x0 = 0.0;
    }
    else
    {
    COW_AT(1031b41e)
        x0 = rdf64(COW_IMG(0x103d2c58u));
    }
    COW_AT(1031b428)
    wrf64(sp0 + 0xcu, x0);
    x0 = rdf64(sp0 + 0xcu);
    goto L_1031b432;
L_1031b430: ;
    COW_AT(1031b430)
    x0 = 1.0;
    goto L_1031b432;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1031b30c(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1031b327u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = rd32(sp0 - 0x10u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1031b329u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = rd32(sp0 - 0x10u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1031b33bu:
    {
        uint32_t in_esi;
        double loc_c_d;
        in_esi = rd32(sp0 - 0x10u);
        loc_c_d = rdf64(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->eax = 0x7ff00000u;
        g->ecx = 0xfff00000u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1031b340u:
    {
        uint32_t ecx;
        uint32_t in_esi;
        double loc_c_d;
        ecx = g->ecx;
        in_esi = rd32(sp0 - 0x10u);
        loc_c_d = rdf64(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->eax = 0x7ff00000u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1031b34eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        double loc_c_d;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = rd32(sp0 - 0x10u);
        loc_c_d = rdf64(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1031b35cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_esi;
        double loc_c_d;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x10u);
        loc_c_d = rdf64(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031b36fu:
    {
        uint32_t in_esi;
        double loc_c_d;
        in_esi = rd32(sp0 - 0x10u);
        loc_c_d = rdf64(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->eax = 0x7ff00000u;
        g->ecx = 0xfff00000u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1031b374u:
    {
        uint32_t in_esi;
        double loc_c_d;
        in_esi = rd32(sp0 - 0x10u);
        loc_c_d = rdf64(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->eax = 0x7ff00000u;
        g->ecx = 0xfff00000u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1031b379u:
    {
        uint32_t ecx;
        uint32_t in_esi;
        double loc_c_d;
        ecx = g->ecx;
        in_esi = rd32(sp0 - 0x10u);
        loc_c_d = rdf64(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->eax = 0x7ff00000u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1031b387u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        double loc_c_d;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = rd32(sp0 - 0x10u);
        loc_c_d = rdf64(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1031b395u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        double loc_c_d;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = rd32(sp0 - 0x10u);
        loc_c_d = rdf64(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1031b397u:
    {
        uint32_t in_esi;
        double loc_c_d;
        in_esi = rd32(sp0 - 0x10u);
        loc_c_d = rdf64(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->eax = 0x7ff00000u;
        g->ecx = 0xfff00000u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1031b39cu:
    {
        uint32_t ecx;
        uint32_t in_esi;
        double loc_c_d;
        ecx = g->ecx;
        in_esi = rd32(sp0 - 0x10u);
        loc_c_d = rdf64(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->eax = 0x7ff00000u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1031b3a5u:
    {
        uint32_t ecx;
        uint32_t in_esi;
        double loc_c_d;
        ecx = g->ecx;
        in_esi = rd32(sp0 - 0x10u);
        loc_c_d = rdf64(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->eax = 0x7ff00000u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1031b3b3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        double loc_c_d;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = rd32(sp0 - 0x10u);
        loc_c_d = rdf64(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1031b3bbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        double loc_c_d;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = rd32(sp0 - 0x10u);
        loc_c_d = rdf64(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1031b3c9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        double loc_c_d;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = rd32(sp0 - 0x10u);
        loc_c_d = rdf64(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1031b3cdu:
    {
        uint32_t in_esi;
        double loc_c_d;
        in_esi = rd32(sp0 - 0x10u);
        loc_c_d = rdf64(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->eax = 0x7ff00000u;
        g->ecx = 0xfff00000u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1031b3d2u:
    {
        uint32_t in_esi;
        double loc_c_d;
        in_esi = rd32(sp0 - 0x10u);
        loc_c_d = rdf64(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->eax = 0x7ff00000u;
        g->ecx = 0xfff00000u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1031b3d7u:
    {
        uint32_t in_esi;
        double loc_c_d;
        in_esi = rd32(sp0 - 0x10u);
        loc_c_d = rdf64(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->eax = 0x7ff00000u;
        g->ecx = 0xfff00000u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1031b3e4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        double loc_18_d;
        double loc_c_d;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_18_d = rdf64(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c_d = rdf64(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1031b3f6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        double loc_18_d;
        double loc_c_d;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_18_d = rdf64(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c_d = rdf64(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1031b401u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        double loc_18_d;
        double loc_c_d;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_18_d = rdf64(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c_d = rdf64(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1031b403u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        double loc_18_d;
        double loc_c_d;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_18_d = rdf64(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c_d = rdf64(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1031b40bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        double loc_18_d;
        double loc_c_d;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_18_d = rdf64(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c_d = rdf64(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1031b419u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        double loc_18_d;
        double loc_c_d;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_18_d = rdf64(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c_d = rdf64(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1031b41eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        double loc_18_d;
        double loc_c_d;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_18_d = rdf64(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c_d = rdf64(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1031b426u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        double loc_18_d;
        double loc_c_d;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_18_d = rdf64(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c_d = rdf64(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1031b428u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        double loc_18_d;
        double loc_c_d;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_18_d = rdf64(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c_d = rdf64(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1031b430u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        double loc_18_d;
        double loc_c_d;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_18_d = rdf64(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c_d = rdf64(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1031b432u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        double loc_18_d;
        double loc_c_d;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_18_d = rdf64(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c_d = rdf64(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1031b437u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        double loc_18_d;
        double loc_c_d;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_18_d = rdf64(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c_d = rdf64(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1031b30c(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1031b30c(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
