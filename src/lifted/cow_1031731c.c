/* f_0x1031731c - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=2 */
void cow_fn_1031731c(Guest* g)
{
    double d3;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_18;
    uint32_t loc_1c;
    double loc_1c_d;
    uint32_t t1;
    uint32_t t2;
    uint32_t t4;
    uint32_t t5;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10317333u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10317333;
    case 0x10317344u: eax = g->eax; edx = g->edx; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10317344;
    case 0x10317351u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_1c_d = rdf64(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10317351;
    case 0x10317356u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_1c_d = rdf64(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10317356;
    case 0x10317359u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_1c_d = rdf64(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10317359;
    case 0x10317360u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10317360;
    case 0x1031737cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031737c;
    case 0x10317381u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10317381;
    case 0x1031738du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031738d;
    case 0x10317392u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_1c_d = rdf64(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10317392;
    case 0x10317399u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10317399;
    case 0x103173a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_1c_d = rdf64(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_103173a2;
    case 0x103173a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_103173a9;
    case 0x103173b0u: eax = g->eax; edx = g->edx; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_103173b0;
    case 0x103173c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_103173c8;
    case 0x103173cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_103173cd;
    default: break;
    }
#endif

    COW_AT(1031731c)
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    COW_RET(0x10317333u);
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x1031ff40u), self, 2, 0x133fu, 0xffffu);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(10317333)
    if ((rd32(sp0 + 0xau) & 0x7ff0u) != 0x7ff0u)
    {
        edi = eax;
    COW_AT(103173b0)
        g->esp = sp0 - 0x14u;
        COW_RET(0x103173c8u);
        cow_thiscall_cdecl(g, COW_IMG(0x1031ff40u), 0xffffu, 2, edi, 0xffffu);
        loc_1c = edi;
    COW_AT(103173c8)
        x0 = cow_bits2d(arg1, arg2 & 0x7fffffffu);
    }
    else
    {
        edi = eax;
        eax = (rd32(sp0 + 0xau) & 0xffff0000u) | (rd32(sp0 + 0xau) & 0x7ff0u);
    COW_AT(10317344)
        d3 = rdf64(sp0 + 4u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        COW_RET(0x10317351u);
        t4 = cow_cdecl(g, COW_IMG(0x1031f64bu), 3, cow_dlo(d3), cow_dhi(d3), in_edi);
        t5 = g->edx;
        eax = t4;
        edx = t5;
        loc_1c_d = d3;
    COW_AT(10317351)
        if (eax == 1u)
        {
            eax = eax - 1u;
            ecx = cow_dhi(loc_1c_d);
    COW_AT(103173a2)
            g->esp = sp0 - 0x14u;
            COW_RET(0x103173a9u);
            cow_thiscall_cdecl(g, COW_IMG(0x1031ff40u), ecx, 2, edi, 0xffffu);
            loc_1c = edi;
    COW_AT(103173a9)
            x0 = rdf64(sp0 + 4u);
        }
        else
        {
            eax = eax - 1u;
            ecx = cow_dhi(loc_1c_d);
    COW_AT(10317356)
            if (eax == 1u)
            {
                eax = eax - 1u;
    COW_AT(10317392)
                g->esp = sp0 - 0x14u;
                COW_RET(0x10317399u);
                cow_thiscall_cdecl(g, COW_IMG(0x1031ff40u), ecx, 2, edi, 0xffffu);
                loc_1c = edi;
    COW_AT(10317399)
                x0 = -rdf64(sp0 + 4u);
            }
            else
            {
                eax = eax - 1u;
    COW_AT(10317359)
                if (eax == 1u)
                {
                    eax = eax - 1u;
                    loc_18 = edi;
                    x0 = rdf64(sp0 + 4u);
    COW_AT(10317381)
                    g->esp = sp0 - 0x14u;
                    COW_RET(0x1031738du);
                    cow_call_regs(g, COW_IMG(0x1031f766u), g->eax, ecx, edx, 1, 4, 0x15u, cow_dlo(x0), cow_dhi(x0), loc_18);
                    d9 = cow_take_float(g);
                    x0 = d9;
    COW_AT(1031738d)
                }
                else
                {
                    eax = eax - 1u;
                    loc_18 = edi;
                    x0 = rdf64(sp0 + 4u);
    COW_AT(10317360)
                    d6 = fr(g, x0 + rdf64(COW_IMG(0x1034a1e0u)));
                    d7 = rdf64(sp0 + 4u);
                    g->esp = sp0 - 0x14u;
                    COW_RET(0x1031737cu);
                    cow_thiscall_cdecl(g, COW_IMG(0x1031f81au), ecx, 7, 8u, 0x15u, cow_dlo(d7), cow_dhi(d7), cow_dlo(d6), cow_dhi(d6), loc_18);
                    d8 = cow_take_float(g);
                    x0 = d8;
    COW_AT(1031737c)
                }
            }
        }
    }
    COW_AT(103173cd)
    g->esi = in_esi;
    g->edi = in_edi;
    fpush(g, x0);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1031731c(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10317333u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->esi = 0xffffu;
        wr32(sp0 - 0x1cu, 0x133fu);
        wr32(sp0 - 0x18u, 0xffffu);
        (void)sp0;
        return 1;
    }
    case 0x10317344u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        g->ecx = 0xffffu;
        g->ebp = sp0 - 4u;
        g->esi = 0xffffu;
        (void)sp0;
        return 1;
    }
    case 0x10317351u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_1c_d;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_1c_d = rdf64(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->esi = 0xffffu;
        (void)sp0;
        return 1;
    }
    case 0x10317356u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_1c_d;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_1c_d = rdf64(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = 0xffffu;
        (void)sp0;
        return 1;
    }
    case 0x10317359u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_1c_d;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_1c_d = rdf64(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317360u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031737cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317381u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031738du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317392u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_1c_d;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_1c_d = rdf64(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = 0xffffu;
        (void)sp0;
        return 1;
    }
    case 0x10317399u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x18u, 0xffffu);
        (void)sp0;
        return 1;
    }
    case 0x103173a2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_1c_d;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_1c_d = rdf64(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = 0xffffu;
        (void)sp0;
        return 1;
    }
    case 0x103173a9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x18u, 0xffffu);
        (void)sp0;
        return 1;
    }
    case 0x103173b0u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        g->ecx = 0xffffu;
        g->ebp = sp0 - 4u;
        g->esi = 0xffffu;
        (void)sp0;
        return 1;
    }
    case 0x103173c8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x18u, 0xffffu);
        wr32(sp0 - 0xcu, arg1);
        wr32(sp0 - 8u, arg2 & 0x7fffffffu);
        (void)sp0;
        return 1;
    }
    case 0x103173cdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1031731c(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1031731c(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
