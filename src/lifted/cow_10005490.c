/* f_0x10005490 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10005490(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 48u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100054edu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_100054ed;
    case 0x100054f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_100054f9;
    case 0x10005505u: ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_10005505;
    case 0x10005518u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10005518;
    case 0x1000551cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1000551c;
    case 0x1000552au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1000552a;
    case 0x1000552fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1000552f;
    case 0x10005548u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10005548;
    case 0x10005551u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10005551;
    case 0x1000555eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1000555e;
    case 0x1000556bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1000556b;
    case 0x10005579u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10005579;
    case 0x10005580u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10005580;
    case 0x10005593u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10005593;
    default: break;
    }
#endif

    COW_AT(10005490)
    t1 = rd8(COW_IMG(0x10455c39u));
    t2 = rd8(COW_IMG(0x10455c38u));
    wr8(sp0 - 0x1eu, rd8(COW_IMG(0x10455c34u)));
    wr8(sp0 - 0x1du, (uint8_t)t1);
    wr8(sp0 - 0x1fu, (uint8_t)t2);
    wr32(sp0 - 0x1cu, COW_IMG(0x10455c34u));
    wr32(sp0 - 0x18u, COW_IMG(0x10455c39u));
    wr32(sp0 - 0x14u, COW_IMG(0x10455c36u));
    wr32(sp0 - 0x10u, COW_IMG(0x10455c35u));
    wr32(sp0 - 0xcu, COW_IMG(0x10455c37u));
    wr32(sp0 - 8u, COW_IMG(0x10455c38u));
    wr32(sp0 - 4u, 0u);
    eax = COW_IMG(0x10455c34u);
    ecx = sp0 - 0x1cu;
    edx = (in_edx & 0xffffff00u) | t2;
L_100054ed: ;
    COW_AT(100054ed)
    wr8(eax, 0u);
    if (rd32(ecx + 4u) != 0u)
    {
        eax = rd32(ecx + 4u);
        ecx = ecx + 4u;
        goto L_100054ed;
    }
    ecx = ecx + 4u;
    COW_AT(100054f9)
    if (arg1 == 0u)
    {
        esi = in_esi;
    }
    else
    {
    COW_AT(10005505)
        wr32(sp0 - 0x24u, in_esi);
        wr32(sp0 - 0x28u, COW_IMG(0x1034f9ecu));
        wr32(sp0 - 0x2cu, arg1);
        g->eax = arg1;
        g->esp = sp0 - 0x1cu;
        t3 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, arg1, COW_IMG(0x1034f9ecu), in_esi, rd32(sp0 - 0x20u));
        t4 = g->ecx;
        t5 = g->edx;
        eax = t3;
        ecx = t4;
        edx = t5;
        esi = sp0 - 0x1cu;
L_10005518: ;
    COW_AT(10005518)
        if (eax == 0u) goto L_10005548;
    COW_AT(1000551c)
        wr32(sp0 - 0x28u, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t6 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, eax);
        t7 = g->ecx;
        t8 = g->edx;
        if (t6 != 1u)
        {
            eax = t6;
            ecx = t7;
            edx = t8;
        }
        else
        {
            ecx = t7;
            edx = t8;
    COW_AT(1000552a)
            t9 = rd32(esi);
            wr8(t9, 1u);
            eax = t9;
        }
    COW_AT(1000552f)
        wr32(sp0 - 0x28u, COW_IMG(0x1034f9ecu));
        wr32(sp0 - 0x2cu, 0u);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t10 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, 0u, COW_IMG(0x1034f9ecu), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
        t11 = g->edx;
        if (rd32(esi + 4u) != 0u)
        {
            eax = t10;
            ecx = rd32(esi + 4u);
            edx = t11;
            esi = esi + 4u;
            goto L_10005518;
        }
        eax = t10;
        ecx = rd32(esi + 4u);
        edx = t11;
L_10005548: ;
    COW_AT(10005548)
        if ((uint8_t)arg3 != 0u)
        {
            esi = rd32(sp0 - 0x24u);
        }
        else
        {
            eax = (eax & 0xffffff00u) | (uint8_t)arg3;
            esi = rd32(sp0 - 0x24u);
    COW_AT(10005551)
            if (rd8(sp0 - 0x1fu) != rd8(COW_IMG(0x10455c38u)))
            {
                ecx = (ecx & 0xffffff00u) | rd8(sp0 - 0x1fu);
                goto L_10005579;
            }
            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10455c38u));
            ecx = (ecx & 0xffffff00u) | rd8(sp0 - 0x1fu);
    COW_AT(1000555e)
            if (rd8(sp0 - 0x1eu) != rd8(COW_IMG(0x10455c34u))) goto L_10005579;
            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10455c34u));
    COW_AT(1000556b)
            if (rd8(sp0 - 0x1du) == rd8(COW_IMG(0x10455c39u)))
            {
                ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x10455c39u));
                goto L_10005580;
            }
            ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x10455c39u));
L_10005579: ;
    COW_AT(10005579)
            wr8(COW_IMG(0x10455c40u), 1u);
L_10005580: ;
    COW_AT(10005580)
            t12 = rd8(COW_IMG(0x10455c37u));
            wr8(COW_IMG(0x10455c37u), 0u);
            wr8(COW_IMG(0x10455c41u), (uint8_t)t12);
        }
    }
    COW_AT(10005593)
    g->esi = esi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10005490(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100054edu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100054f9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10005505u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 0x20u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10005518u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1000551cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1000552au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1000552fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10005548u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10005551u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1000555eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1000556bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10005579u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10005580u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10005593u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10005490(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10005490(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
