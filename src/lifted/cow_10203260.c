/* f_0x10203260 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10203260(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10203272u: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10203272;
    case 0x10203279u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10203279;
    case 0x10203280u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10203280;
    case 0x10203284u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10203284;
    case 0x1020328fu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1020328f;
    case 0x10203291u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10203291;
    case 0x10203295u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10203295;
    case 0x1020329au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1020329a;
    case 0x102032a3u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102032a3;
    case 0x102032a8u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102032a8;
    case 0x102032adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102032ad;
    case 0x102032b9u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102032b9;
    case 0x102032beu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102032be;
    case 0x102032c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102032c3;
    case 0x102032cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102032cd;
    case 0x102032d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102032d3;
    case 0x102032e5u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102032e5;
    case 0x102032ecu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102032ec;
    case 0x102032f0u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102032f0;
    case 0x102032f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102032f8;
    case 0x10203300u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10203300;
    default: break;
    }
#endif

    COW_AT(10203260)
    if (arg2 == 0u)
    {
        eax = in_eax;
        edx = 0x12u;
        ebx = in_ebx;
        esi = 0x12u;
    }
    else
    {
    COW_AT(10203272)
        eax = COW_IMG(0x10663af0u);
        ecx = 0u;
        ebx = in_ebx;
L_10203279: ;
    COW_AT(10203279)
        if (rd8(eax + 0x62u) == 0u)
        {
            ebx = (ebx & 0xffffff00u) | rd8(eax + 0x62u);
            goto L_10203284;
        }
        ebx = (ebx & 0xffffff00u) | rd8(eax + 0x62u);
    COW_AT(10203280)
        if (rd32(eax) == arg2) goto L_10203291;
L_10203284: ;
    COW_AT(10203284)
        if ((int32_t)(eax + 0x7cu) < (int32_t)COW_IMG(0x106643a8u))
        {
            eax = eax + 0x7cu;
            ecx = ecx + 1u;
            goto L_10203279;
        }
        eax = eax + 0x7cu;
    COW_AT(1020328f)
        edx = 0x12u;
        esi = 0x12u;
    }
L_102032cd: ;
    COW_AT(102032cd)
    if ((int32_t)edx >= (int32_t)esi) goto L_102032f8;
    ecx = edx;
    COW_AT(102032d3)
    eax = COW_IMG(0x10663af0u) + edx * 0x7cu;
L_102032e5: ;
    COW_AT(102032e5)
    if (rd8(eax + 0x62u) == 0u)
    {
        ebx = (ebx & 0xffffff00u) | rd8(eax + 0x62u);
        goto L_102032f0;
    }
    ebx = (ebx & 0xffffff00u) | rd8(eax + 0x62u);
    COW_AT(102032ec)
    if (rd32(eax) == arg1) goto L_10203300;
L_102032f0: ;
    COW_AT(102032f0)
    if ((int32_t)(ecx + 1u) < (int32_t)esi)
    {
        eax = eax + 0x7cu;
        ecx = ecx + 1u;
        goto L_102032e5;
    }
    eax = eax + 0x7cu;
L_102032f8: ;
    COW_AT(102032f8)
    return eax & 0xffffff00u;
L_10203291: ;
    COW_AT(10203291)
    if ((int32_t)ecx < 0) goto L_102032a3;
    COW_AT(10203295)
    if ((int32_t)ecx > 5) goto L_102032a3;
    COW_AT(1020329a)
    edx = 0u;
    esi = 6u;
    goto L_102032cd;
L_102032a3: ;
    COW_AT(102032a3)
    if ((int32_t)ecx < 6) goto L_102032b9;
    COW_AT(102032a8)
    if ((int32_t)ecx > 11) goto L_102032b9;
    COW_AT(102032ad)
    edx = 6u;
    esi = 0xcu;
    goto L_102032cd;
L_102032b9: ;
    COW_AT(102032b9)
    if ((int32_t)ecx < 12)
    {
        edx = 0x12u;
        esi = 0x12u;
    }
    else
    {
    COW_AT(102032be)
        if ((int32_t)ecx > 17)
        {
            edx = 0x12u;
            esi = 0x12u;
        }
        else
        {
    COW_AT(102032c3)
            edx = 0xcu;
            esi = 0x12u;
        }
    }
    goto L_102032cd;
L_10203300: ;
    COW_AT(10203300)
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10203260(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10203272u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        g->esp = sp0 - 0xcu;
        g->edx = 0x12u;
        g->esi = 0x12u;
        g->edi = arg2;
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10203279u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->edx = 0x12u;
        g->esi = 0x12u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10203280u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->edx = 0x12u;
        g->esi = 0x12u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10203284u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->edx = 0x12u;
        g->esi = 0x12u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1020328fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->edx = 0x12u;
        g->esi = 0x12u;
        (void)sp0;
        return 1;
    }
    case 0x10203291u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->edx = 0x12u;
        g->esi = 0x12u;
        (void)sp0;
        return 1;
    }
    case 0x10203295u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->edx = 0x12u;
        g->esi = 0x12u;
        (void)sp0;
        return 1;
    }
    case 0x1020329au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x102032a3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->edx = 0x12u;
        g->esi = 0x12u;
        (void)sp0;
        return 1;
    }
    case 0x102032a8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->edx = 0x12u;
        g->esi = 0x12u;
        (void)sp0;
        return 1;
    }
    case 0x102032adu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x102032b9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->edx = 0x12u;
        g->esi = 0x12u;
        (void)sp0;
        return 1;
    }
    case 0x102032beu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->edx = 0x12u;
        g->esi = 0x12u;
        (void)sp0;
        return 1;
    }
    case 0x102032c3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x102032cdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x102032d3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x102032e5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102032ecu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102032f0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102032f8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10203300u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10203260(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10203260(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
