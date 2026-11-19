/* f_0x100446a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100446a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_3c;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t pf;
    uint32_t sf;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 92u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100446b3u: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x48u); in_esi = rd32(sp0 - 0x44u); in_ebp = rd32(sp0 - 0x40u); in_ebx = rd32(sp0 - 0x3cu); g->ebp = rd32(sp0 - 0x40u); g->ebx = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x44u); goto E_100446b3;
    case 0x100446e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_100446e1;
    case 0x100446e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_100446e6;
    case 0x100446fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_100446fb;
    case 0x1004470cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_1004470c;
    case 0x10044717u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_10044717;
    case 0x10044721u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_10044721;
    case 0x10044745u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_10044745;
    case 0x10044756u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_10044756;
    case 0x10044784u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_10044784;
    case 0x1004479cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_1004479c;
    case 0x100447a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_100447a1;
    case 0x100447acu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_100447ac;
    case 0x100447b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_100447b0;
    case 0x100447b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_100447b5;
    case 0x100447bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_100447bf;
    case 0x100447c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_100447c3;
    case 0x100447c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_100447c5;
    case 0x100447c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_100447c9;
    case 0x100447ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_100447ce;
    case 0x100447d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_100447d9;
    case 0x100447ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_100447ec;
    default: break;
    }
#endif

    COW_AT(100446a0)
    wr32(sp0 - 0x3cu, in_ebx);
    wr32(sp0 - 0x40u, in_ebp);
    wr32(sp0 - 0x44u, in_esi);
    wr32(sp0 - 0x48u, in_edi);
    if (arg1 == 0u)
    {
        loc_3c = in_ebx;
        loc_40 = in_ebp;
        loc_44 = in_esi;
        loc_48 = in_edi;
    }
    else
    {
    COW_AT(100446b3)
        g->eax = in_eax;
        g->edx = in_edx;
        g->esp = sp0 - 0x48u;
        t1 = cow_thiscall(g, COW_IMG(0x100742a0u), sp0 - 0x38u, 0);
        t2 = g->edx;
        wr32(sp0 - 0x4cu, 0xffffffffu);
        wr32(sp0 - 0x50u, 0u);
        wr32(sp0 - 0x54u, 5u);
        wr32(sp0 - 0x58u, arg1);
        g->edx = t2;
        t3 = cow_thiscall(g, COW_IMG(0x100742b0u), sp0 - 0x38u, 4, arg1, 5u, 0u, 0xffffffffu);
        t4 = g->edx;
        wr32(sp0 - 0x4cu, 0u);
        g->edx = t4;
        t5 = cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x38u, 1, 0u);
        t6 = g->edx;
        if (t5 == 0u)
        {
            eax = t5;
            edx = t6;
        }
        else
        {
            edx = t6;
            edi = t5;
    COW_AT(100446e1)
L_100446e6: ;
    COW_AT(100446e6)
            wr32(sp0 - 0x4cu, 0xffffffffu);
            wr32(sp0 - 0x50u, 0u);
            wr32(sp0 - 0x54u, 5u);
            wr32(sp0 - 0x58u, rd32(COW_IMG(0x1047d128u)));
            g->eax = rd32(COW_IMG(0x1047d128u));
            g->edx = edx;
            t7 = rd32(COW_IMG(0x1047d128u));
            g->esp = sp0 - 0x48u;
            t8 = cow_thiscall(g, COW_IMG(0x10074310u), sp0 - 0x1cu, 4, t7, 5u, 0u, 0xffffffffu);
            t9 = g->edx;
            eax = t8;
            edx = t9;
L_100446fb: ;
    COW_AT(100446fb)
            wr32(sp0 - 0x4cu, 0u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x48u;
            t10 = cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
            t11 = g->ecx;
            t12 = g->edx;
            if (t10 == 0u)
            {
                ecx = t11;
                edx = t12;
                goto L_10044756;
            }
            eax = t10;
            ecx = t11;
            edx = t12;
            esi = t10;
    COW_AT(1004470c)
            if (!(rd8(esi + 0x1au) >> 2u & 1u)) goto L_100446fb;
    COW_AT(10044717)
            if (rd32(esi + 0x28u) != rd32(edi + 0x14u))
            {
                eax = rd32(edi + 0x14u);
                goto L_100446fb;
            }
            eax = rd32(edi + 0x14u);
    COW_AT(10044721)
            g->edx = edx;
            g->esp = sp0 - 0x48u;
            cow_call_regs(g, COW_IMG(0x10071e90u), eax, esi, g->edx, 1, 0);
            t13 = g->ecx;
            t14 = g->edx;
            wr32(sp0 - 0x4cu, t13);
            wr32(sp0 - 0x4cu, 0u);
            g->ebp = arg1;
            g->edx = t14;
            t15 = cow_call_regs(g, COW_IMG(0x100538e0u), sp0 - 0x4cu, esi, g->edx, 0, 1, 0u);
            t16 = g->edx;
            g->edx = t16;
            t17 = cow_thiscall(g, COW_IMG(0x10071ec0u), esi, 0);
            t18 = g->edx;
            if ((rd16(esi + 0x18u) & 0x7fffu) != 0u)
            {
                eax = t17;
                edx = t18;
                goto L_100446fb;
            }
            eax = t17;
            edx = t18;
            pf = PARITY((uint8_t)rd16(esi + 0x18u));
            zf = (rd16(esi + 0x18u) & 0x7fffu) == 0u;
            sf = (int16_t)(rd16(esi + 0x18u) & 0x7fffu) < 0;
    COW_AT(10044745)
            t19 = rd32(esi + 0x14u);
            wr32(sp0 - 0x4cu, t19);
            g->cf = 0u;
            g->pf = pf;
            g->af = 0u;
            g->zf = zf;
            g->sf = sf;
            g->of = 0u;
            g->edx = edx;
            g->esp = sp0 - 0x48u;
            cow_stdcall(g, COW_IMG(0x10073b20u), 1, t19);
            t20 = g->edx;
            edx = t20;
            goto L_100446e6;
        }
L_10044784: ;
    COW_AT(10044784)
        wr32(sp0 - 0x4cu, 0xffffffffu);
        wr32(sp0 - 0x50u, 0u);
        wr32(sp0 - 0x54u, 7u);
        wr32(sp0 - 0x58u, arg1);
        g->esp = sp0 - 0x48u;
        cow_thiscall(g, COW_IMG(0x100742b0u), sp0 - 0x38u, 4, arg1, 7u, 0u, 0xffffffffu);
        if (rd32(sp0 - 0x24u) == 0u)
        {
            loc_3c = rd32(sp0 - 0x3cu);
            loc_40 = rd32(sp0 - 0x40u);
            loc_44 = rd32(sp0 - 0x44u);
            loc_48 = rd32(sp0 - 0x48u);
        }
        else
        {
            edx = rd32(sp0 - 0x24u);
    COW_AT(1004479c)
L_100447a1: ;
    COW_AT(100447a1)
            eax = rd32(COW_IMG(0x1047d140u));
            ecx = rd32(rd32(COW_IMG(0x1047d140u)) + 0xd50u);
L_100447ac: ;
    COW_AT(100447ac)
            if (ecx == 0u) goto L_100447d9;
    COW_AT(100447b0)
            if (rd32(ecx + 0x1cu) != 0x4d730000u) goto L_100447c9;
    COW_AT(100447b5)
            if (rd32(ecx + 0x80u) == 0u)
            {
    COW_AT(100447c3)
                eax = 0u;
            }
            else
            {
                eax = rd32(ecx + 0x80u);
    COW_AT(100447bf)
                eax = rd32(eax);
            }
    COW_AT(100447c5)
            if (eax == edx) goto L_100447ce;
L_100447c9: ;
    COW_AT(100447c9)
            ecx = rd32(ecx + 0xcu);
            goto L_100447ac;
        }
    }
L_100447ec: ;
    COW_AT(100447ec)
    g->ebx = loc_3c;
    g->esi = loc_44;
    g->edi = loc_48;
    g->ebp = loc_40;
    return;
L_10044756: ;
    COW_AT(10044756)
    wr32(sp0 - 0x4cu, ecx);
    wr32(sp0 - 0x4cu, 0u);
    g->ebp = arg1;
    g->edx = edx;
    g->esp = sp0 - 0x48u;
    t21 = cow_call_regs(g, COW_IMG(0x100538e0u), sp0 - 0x4cu, edi, g->edx, 0, 1, 0u);
    t22 = g->edx;
    wr32(sp0 - 0x4cu, 1u);
    t23 = cow_call_regs(g, COW_IMG(0x10053890u), t21, edi, t22, 0, 1, 1u);
    t24 = g->edx;
    wr32(sp0 - 0x4cu, 0u);
    g->edx = t24;
    t25 = cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x38u, 1, 0u);
    t26 = g->edx;
    if (t25 != 0u)
    {
        edx = t26;
        edi = t25;
        goto L_100446e6;
    }
    eax = t25;
    edx = t26;
    goto L_10044784;
L_100447ce: ;
    COW_AT(100447ce)
    g->esp = sp0 - 0x48u;
    cow_call_regs(g, COW_IMG(0x10074ab0u), eax, ecx, edx, 1, 0);
    edx = rd32(sp0 - 0x24u);
    goto L_100447a1;
L_100447d9: ;
    COW_AT(100447d9)
    wr32(sp0 - 0x4cu, 0u);
    g->esp = sp0 - 0x48u;
    cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x38u, 1, 0u);
    if (rd32(sp0 - 0x24u) != 0u)
    {
        edx = rd32(sp0 - 0x24u);
        goto L_100447a1;
    }
    loc_3c = rd32(sp0 - 0x3cu);
    loc_40 = rd32(sp0 - 0x40u);
    loc_44 = rd32(sp0 - 0x44u);
    loc_48 = rd32(sp0 - 0x48u);
    goto L_100447ec;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100446a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100446b3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x48u);
        in_esi = rd32(sp0 - 0x44u);
        in_ebp = rd32(sp0 - 0x40u);
        in_ebx = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x48u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100446e1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x48u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100446e6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x48u;
        g->ebx = 0x7fffu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100446fbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x48u;
        g->ebx = 0x7fffu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1004470cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x48u;
        g->ebx = 0x7fffu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10044717u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x48u;
        g->ebx = 0x7fffu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10044721u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x48u;
        g->ebx = 0x7fffu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10044745u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x48u;
        g->ebx = 0x7fffu;
        g->ebp = arg1;
        g->cf = (uint8_t)(0u);
        g->af = (uint8_t)(0u);
        g->of = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x10044756u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x48u;
        g->ebx = 0x7fffu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10044784u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x48u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1004479cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x100447a1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x48u;
        g->esi = 0x4d730000u;
        (void)sp0;
        return 1;
    }
    case 0x100447acu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x48u;
        g->esi = 0x4d730000u;
        (void)sp0;
        return 1;
    }
    case 0x100447b0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x48u;
        g->esi = 0x4d730000u;
        (void)sp0;
        return 1;
    }
    case 0x100447b5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x48u;
        g->esi = 0x4d730000u;
        (void)sp0;
        return 1;
    }
    case 0x100447bfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x48u;
        g->esi = 0x4d730000u;
        (void)sp0;
        return 1;
    }
    case 0x100447c3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x48u;
        g->esi = 0x4d730000u;
        (void)sp0;
        return 1;
    }
    case 0x100447c5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x48u;
        g->esi = 0x4d730000u;
        (void)sp0;
        return 1;
    }
    case 0x100447c9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x48u;
        g->esi = 0x4d730000u;
        (void)sp0;
        return 1;
    }
    case 0x100447ceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x48u;
        g->esi = 0x4d730000u;
        (void)sp0;
        return 1;
    }
    case 0x100447d9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x48u;
        g->esi = 0x4d730000u;
        (void)sp0;
        return 1;
    }
    case 0x100447ecu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100446a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100446a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
