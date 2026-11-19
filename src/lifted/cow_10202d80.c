/* f_0x10202d80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=7 */
void cow_fn_10202d80(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t t2;
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
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg7 = rd32(sp0 + 0x1cu);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10202ddcu: in_esi = g->esi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_10202ddc;
    case 0x10202ddfu: in_esi = g->esi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_10202ddf;
    case 0x10202de7u: in_esi = g->esi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_10202de7;
    case 0x10202df7u: in_esi = g->esi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_10202df7;
    case 0x10202dfeu: eax = g->eax; in_esi = g->esi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_10202dfe;
    case 0x10202e05u: eax = g->eax; in_esi = g->esi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_10202e05;
    case 0x10202e0du: eax = g->eax; ecx = g->ecx; in_esi = g->esi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_10202e0d;
    case 0x10202e18u: eax = g->eax; ecx = g->ecx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10202e18;
    case 0x10202e23u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10202e23;
    case 0x10202e3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10202e3b;
    case 0x10202e46u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10202e46;
    case 0x10202e53u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10202e53;
    case 0x10202e57u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10202e57;
    case 0x10202e6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10202e6b;
    case 0x10202e71u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10202e71;
    case 0x10202e7eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_10202e7e;
    case 0x10202e82u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_10202e82;
    case 0x10202eacu: eax = g->eax; ecx = g->ecx; in_esi = g->esi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_10202eac;
    case 0x10202eb9u: eax = g->eax; ecx = g->ecx; in_esi = g->esi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_10202eb9;
    case 0x10202ebdu: eax = g->eax; ecx = g->ecx; in_esi = g->esi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_10202ebd;
    case 0x10202edbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_10202edb;
    default: break;
    }
#endif

    COW_AT(10202d80)
    wr32(COW_IMG(0x106643e8u), arg2);
    wr32(COW_IMG(0x106643ecu), arg3);
    wr8(COW_IMG(0x103852b0u), (uint8_t)arg7);
    wr8(COW_IMG(0x106643f0u), (uint8_t)arg4);
    wr8(COW_IMG(0x106643f1u), (uint8_t)arg5);
    wr32(COW_IMG(0x106643e4u), arg1);
    wr32(COW_IMG(0x106643fcu), 0u);
    wr8(COW_IMG(0x106643f2u), (uint8_t)arg6);
    wr32(COW_IMG(0x106643e0u), 0u);
    if ((uint32_t)(int8_t)arg7 == 2u) goto L_10202df7;
    COW_AT(10202ddc)
    if ((uint32_t)(int8_t)arg7 == 3u) goto L_10202de7;
    COW_AT(10202ddf)
    wr8(COW_IMG(0x106643f4u), 0u);
    eax = (uint32_t)(int8_t)arg7 - 3u;
L_10202dfe: ;
    COW_AT(10202dfe)
    wr8(COW_IMG(0x106643f3u), 6u);
L_10202e05: ;
    COW_AT(10202e05)
    if (arg1 == 0u)
    {
    COW_AT(10202eac)
        if (rd32(rd32(COW_IMG(0x106643a8u)) + 8u) == 0u)
        {
            eax = rd32(rd32(COW_IMG(0x106643a8u)) + 8u);
        }
        else
        {
            eax = rd32(rd32(COW_IMG(0x106643a8u)) + 8u);
    COW_AT(10202eb9)
            wr32(eax + 0x34u, rd32(eax + 0x34u) | 1u);
        }
    COW_AT(10202ebd)
        g->eax = eax;
        g->esp = sp0 - 4u;
        t14 = cow_thiscall(g, COW_IMG(0x1015e830u), COW_IMG(0x10621838u), 1, 0u);
        t15 = rd32(COW_IMG(0x1057876cu));
        wr8(t15 + 0x59u, 0u);
        wr32(COW_IMG(0x103852acu), 0x80808080u);
        eax = t14;
        edx = t15;
    }
    else
    {
    COW_AT(10202e0d)
        if (rd32(COW_IMG(0x1057876cu)) != 0u)
        {
            ecx = rd32(COW_IMG(0x1057876cu));
    COW_AT(10202e18)
            g->esp = sp0 - 8u;
            t1 = cow_call_regs(g, COW_IMG(0x101597f0u), eax, ecx, (arg3 & 0xffffff00u) | (uint8_t)arg6, 1, 0);
            t2 = g->edx;
            if (t1 != 0u)
            {
                edx = t2;
                esi = t1;
    COW_AT(10202e23)
                t3 = rd32(esi + 4u);
                g->ebx = 0u;
                g->eax = t3;
                g->ecx = rd32(COW_IMG(0x106643a8u));
                g->edx = edx;
                t4 = rd32(COW_IMG(0x106643a8u));
                g->esp = sp0 - 8u;
                t5 = cow_stdcall(g, COW_IMG(0x10203540u), 1, t3);
                t6 = g->ecx;
                t7 = g->edx;
                wr32(COW_IMG(0x106643e0u), t5);
                if ((int32_t)t5 < 0)
                {
                    eax = t5;
                    ecx = t6;
                    edx = t7;
                    goto L_10202e46;
                }
                eax = t5;
                edx = t7;
    COW_AT(10202e3b)
                if ((int32_t)eax < (int8_t)rd8(COW_IMG(0x106643f3u))) goto L_10202e71;
                ecx = (uint32_t)(int8_t)rd8(COW_IMG(0x106643f3u));
L_10202e46: ;
    COW_AT(10202e46)
                g->esp = sp0 - 8u;
                t8 = cow_call_regs(g, COW_IMG(0x101cc550u), eax, g->ecx, g->edx, 1, 0);
                if ((int8_t)rd8(COW_IMG(0x106643f4u)) >= 0) goto L_10202e6b;
                eax = t8;
    COW_AT(10202e53)
                if (eax == 0u) goto L_10202e6b;
    COW_AT(10202e57)
                t9 = rd32(eax + 0x78u);
                t10 = rd32(esi + 4u);
                wr32(COW_IMG(0x106643e0u), 0xffffffffu);
                if (t9 == t10) goto L_10202e71;
L_10202e6b: ;
    COW_AT(10202e6b)
                wr32(COW_IMG(0x106643e0u), 0u);
            }
        }
L_10202e71: ;
    COW_AT(10202e71)
        if (rd32(rd32(COW_IMG(0x106643a8u)) + 8u) == 0u)
        {
            eax = rd32(rd32(COW_IMG(0x106643a8u)) + 8u);
        }
        else
        {
            eax = rd32(rd32(COW_IMG(0x106643a8u)) + 8u);
    COW_AT(10202e7e)
            wr32(eax + 0x34u, rd32(eax + 0x34u) & 0xfffffffeu);
        }
    COW_AT(10202e82)
        t11 = rd32(rd32(COW_IMG(0x106643a8u)) + 8u);
        g->esp = sp0 - 4u;
        cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t11, 2, t11, 0u);
        t12 = g->edx;
        t13 = rd32(COW_IMG(0x1057876cu));
        wr8(t13 + 0x59u, 1u);
        wr32(COW_IMG(0x103852acu), 0xa04040d0u);
        eax = t13;
        edx = t12;
    }
    COW_AT(10202edb)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t16 = cow_thiscall(g, COW_IMG(0x10157780u), rd32(COW_IMG(0x1057876cu)), 2, 0u, 0u);
    t17 = g->edx;
    cow_thiscall(g, COW_IMG(0x10157860u), rd32(COW_IMG(0x1057876cu)), 2, 0u, 0u);
    wr8(rd32(COW_IMG(0x1057876cu)) + 0x58u, 0u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_10202de7: ;
    COW_AT(10202de7)
    wr8(COW_IMG(0x106643f4u), 0xffu);
    wr8(COW_IMG(0x106643f3u), 0x12u);
    eax = (uint32_t)(int8_t)arg7 - 3u;
    goto L_10202e05;
L_10202df7: ;
    COW_AT(10202df7)
    wr8(COW_IMG(0x106643f4u), 0xffu);
    eax = (uint32_t)(int8_t)arg7 - 2u;
    goto L_10202dfe;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10202d80(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10202ddcu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg7 = rd32(sp0 + 0x1cu);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t in_ebx;
        uint32_t in_esi;
        in_esi = g->esi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int8_t)arg7 - 2u;
        g->ecx = arg1;
        g->edx = (arg3 & 0xffffff00u) | (uint8_t)arg6;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10202ddfu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg7 = rd32(sp0 + 0x1cu);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t in_ebx;
        uint32_t in_esi;
        in_esi = g->esi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int8_t)arg7 - 3u;
        g->ecx = arg1;
        g->edx = (arg3 & 0xffffff00u) | (uint8_t)arg6;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10202de7u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg7 = rd32(sp0 + 0x1cu);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t in_ebx;
        uint32_t in_esi;
        in_esi = g->esi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int8_t)arg7 - 3u;
        g->ecx = arg1;
        g->edx = (arg3 & 0xffffff00u) | (uint8_t)arg6;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10202df7u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg7 = rd32(sp0 + 0x1cu);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t in_ebx;
        uint32_t in_esi;
        in_esi = g->esi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int8_t)arg7 - 2u;
        g->ecx = arg1;
        g->edx = (arg3 & 0xffffff00u) | (uint8_t)arg6;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10202dfeu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        in_esi = g->esi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ecx = arg1;
        g->edx = (arg3 & 0xffffff00u) | (uint8_t)arg6;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10202e05u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        in_esi = g->esi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ecx = arg1;
        g->edx = (arg3 & 0xffffff00u) | (uint8_t)arg6;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10202e0du:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = g->esi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edx = (arg3 & 0xffffff00u) | (uint8_t)arg6;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10202e18u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edx = (arg3 & 0xffffff00u) | (uint8_t)arg6;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10202e23u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10202e3bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10202e46u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10202e53u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10202e57u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10202e6bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10202e71u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10202e7eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10202e82u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10202eacu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = g->esi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edx = (arg3 & 0xffffff00u) | (uint8_t)arg6;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10202eb9u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = g->esi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edx = (arg3 & 0xffffff00u) | (uint8_t)arg6;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10202ebdu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = g->esi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edx = (arg3 & 0xffffff00u) | (uint8_t)arg6;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10202edbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10202d80(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10202d80(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
