/* f_0x10248b00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10248b00(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_c;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 24u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10248b18u: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_10248b18;
    case 0x10248b1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_10248b1f;
    case 0x10248b37u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_10248b37;
    case 0x10248b3du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_10248b3d;
    case 0x10248b47u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_10248b47;
    case 0x10248b83u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10248b83;
    case 0x10248b91u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_c = rd32(sp0 - 0xcu); goto E_10248b91;
    case 0x10248b9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_c = rd32(sp0 - 0xcu); goto E_10248b9b;
    case 0x10248ba2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_c = rd32(sp0 - 0xcu); goto E_10248ba2;
    case 0x10248bb2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10248bb2;
    case 0x10248bb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10248bb9;
    case 0x10248bc6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10248bc6;
    case 0x10248bd3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10248bd3;
    case 0x10248bd9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10248bd9;
    case 0x10248be5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10248be5;
    case 0x10248bf6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_c = rd32(sp0 - 0xcu); goto E_10248bf6;
    default: break;
    }
#endif

    COW_AT(10248b00)
    wr32(sp0 - 0xcu, in_esi);
    if ((int32_t)rd32(rd32(COW_IMG(0x106690b8u)) + 0x94u) < 0)
    {
        ecx = self;
        edx = in_edx;
        esi = rd32(COW_IMG(0x106690b8u));
        loc_c = in_esi;
        goto L_10248b9b;
    }
    esi = rd32(COW_IMG(0x106690b8u));
    COW_AT(10248b18)
    if ((int32_t)rd32(esi + 0x48u) <= 0)
    {
        ecx = self;
        edx = in_edx;
        loc_c = in_esi;
    }
    else
    {
        eax = rd32(esi + 0x48u);
    COW_AT(10248b1f)
        t1 = rd32(esi + 0x50u);
        t2 = rd32(esi + 0x4cu);
        wr32(esi + 0x48u, eax - 1u);
        wr32(esi + 0x4cu, t1 + t2);
        if ((int32_t)(eax - 1u) >= 1)
        {
            eax = t1 + t2;
        }
        else
        {
            eax = t1 + t2;
    COW_AT(10248b37)
            if (rd32(esi + 0x54u) == 1u)
            {
    COW_AT(10248b3d)
                wr32(esi + 0x94u, 0xffffffffu);
            }
        }
    COW_AT(10248b47)
        wr32(sp0 - 4u, 0x40u);
        wr32(sp0 - 0x10u, sp0 - 8u);
        wr32(sp0 - 0x14u, sp0 - 4u);
        t3 = (uint32_t)((int32_t)(rd32(COW_IMG(0x103889f0u) + (uint32_t)(int8_t)rd8(esi + 0xb8u) * 4u) * (uint32_t)((int32_t)eax >> 0xcu)) >> 0xcu);
        wr32(sp0 - 8u, t3);
        g->ecx = sp0 - 4u;
        g->edx = t3;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x10248920u), 3, sp0 - 4u, sp0 - 8u, in_esi);
        t4 = g->ecx;
        t5 = g->edx;
        if (rd32(esi + 4u) == 0u)
        {
            ecx = t4;
            edx = t5;
            loc_c = in_esi;
        }
        else
        {
            eax = rd32(esi + 4u);
            ecx = t4;
    COW_AT(10248b83)
            t6 = rd32(sp0 - 8u);
            wr32(sp0 - 0x10u, t6);
            wr32(sp0 - 0x14u, eax);
            g->ecx = ecx;
            g->edx = t6;
            g->esp = sp0 - 0xcu;
            cow_cdecl(g, COW_IMG(0x10246900u), 2, eax, t6);
            t7 = g->ecx;
            t8 = g->edx;
            ecx = t7;
            edx = t8;
            loc_c = rd32(sp0 - 0xcu);
        }
    }
    COW_AT(10248b91)
    if ((int32_t)rd32(esi + 0x94u) >= 0) goto L_10248bf6;
L_10248b9b: ;
    COW_AT(10248b9b)
    if (rd32(esi + 4u) != 0u)
    {
    COW_AT(10248ba2)
        wr32(sp0 - 0x10u, 0u);
        t9 = rd32(esi + 0x38u);
        wr32(sp0 - 0x14u, t9);
        g->eax = t9;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t10 = cow_stdcall(g, rd32(COW_IMG(0x103291c8u)), 2, t9, 0u);   /* kernel32.dll!WaitForSingleObject */
        t11 = g->ecx;
        t12 = g->edx;
        if (t10 != 0u)
        {
            loc_c = rd32(sp0 - 0xcu);
        }
        else
        {
            ecx = t11;
            edx = t12;
    COW_AT(10248bb2)
            if (rd32(esi + 4u) == 0u)
            {
                eax = rd32(esi + 4u);
            }
            else
            {
                eax = rd32(esi + 4u);
    COW_AT(10248bb9)
                wr32(sp0 - 0x10u, eax);
                g->edx = edx;
                t13 = rd32(eax);
                g->esp = sp0 - 0xcu;
                cow_thiscall(g, rd32(t13 + 0x48u), t13, 1, eax);
                t14 = g->ecx;
                t15 = g->edx;
                if (rd32(esi + 4u) == 0u)
                {
                    ecx = t14;
                    edx = t15;
                }
                else
                {
                    eax = rd32(esi + 4u);
                    ecx = t14;
    COW_AT(10248bc6)
                    wr32(sp0 - 0x10u, eax);
                    g->edx = rd32(eax);
                    t16 = rd32(eax);
                    g->esp = sp0 - 0xcu;
                    cow_thiscall(g, rd32(t16 + 8u), ecx, 1, eax);
                    t17 = g->ecx;
                    t18 = g->edx;
                    wr32(esi + 4u, 0u);
                    ecx = t17;
                    edx = t18;
                }
    COW_AT(10248bd3)
                if (rd32(esi) == 0u)
                {
                    eax = rd32(esi);
                }
                else
                {
                    eax = rd32(esi);
    COW_AT(10248bd9)
                    wr32(sp0 - 0x10u, eax);
                    g->eax = eax;
                    t19 = rd32(eax);
                    g->esp = sp0 - 0xcu;
                    t20 = cow_thiscall(g, rd32(t19 + 8u), t19, 1, eax);
                    t21 = g->ecx;
                    wr32(esi, 0u);
                    eax = t20;
                    ecx = t21;
                }
            }
    COW_AT(10248be5)
            t22 = rd32(esi + 0x38u);
            wr32(sp0 - 0x10u, t22);
            g->esp = sp0 - 0xcu;
            cow_stdcall(g, rd32(COW_IMG(0x10329104u)), 1, t22);   /* kernel32.dll!CloseHandle */
            wr32(esi + 0x38u, 0u);
            loc_c = rd32(sp0 - 0xcu);
        }
    }
L_10248bf6: ;
    COW_AT(10248bf6)
    g->esi = loc_c;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10248b00(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10248b18u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10248b1fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10248b37u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10248b3du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10248b47u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10248b83u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x14u, sp0 - 4u);
        wr32(sp0 - 0x10u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10248b91u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10248b9bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10248ba2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10248bb2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10248bb9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10248bc6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10248bd3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10248bd9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10248be5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10248bf6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10248b00(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10248b00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
