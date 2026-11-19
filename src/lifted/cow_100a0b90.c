/* f_0x100a0b90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_100a0b90(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 32u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100a0b9au: ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_100a0b9a;
    case 0x100a0b9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_100a0b9e;
    case 0x100a0bd6u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100a0bd6;
    case 0x100a0be4u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100a0be4;
    case 0x100a0bf9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100a0bf9;
    case 0x100a0c02u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100a0c02;
    case 0x100a0c17u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100a0c17;
    case 0x100a0c2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100a0c2f;
    case 0x100a0c39u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100a0c39;
    case 0x100a0c61u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100a0c61;
    case 0x100a0c6au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100a0c6a;
    case 0x100a0c82u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100a0c82;
    case 0x100a0c8du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100a0c8d;
    case 0x100a0c9au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100a0c9a;
    case 0x100a0ccbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_100a0ccb;
    default: break;
    }
#endif

    COW_AT(100a0b90)
    if ((uint16_t)rd32(sp0 + 0xcu) < 0x61u)
    {
        edx = rd32(sp0 + 0xcu);
        goto L_100a0b9e;
    }
    COW_AT(100a0b9a)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 0xffffffffu;
L_100a0b9e: ;
    COW_AT(100a0b9e)
    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_esi);
    wr8(sp0 + 0xcu, 0u);
    wr32(sp0 - 0xcu, in_edi);
    if (rd8(rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0xa0u) + 0xf8u) != 0u)
    {
        edi = 0xfffffffeu;
        loc_4 = in_ebx;
        loc_8 = in_esi;
        loc_c = in_edi;
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0xa0u);
        ecx = rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u);
    COW_AT(100a0bd6)
        wr32(sp0 - 0x10u, 0xffu);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t1 = cow_thiscall(g, COW_IMG(0x10095790u), ecx, 1, 0xffu);
        t2 = g->ecx;
        t3 = g->edx;
        if ((uint8_t)t1 == 0u)
        {
            ecx = t2;
            edx = t3;
    COW_AT(100a0bf9)
            if (rd32(ecx + 0x170u) != 0x2fu)
            {
    COW_AT(100a0c17)
                wr32(sp0 - 0x10u, sp0 + 0xcu);
                wr32(sp0 - 0x14u, arg6);
                wr32(sp0 - 0x18u, arg4);
                wr32(sp0 - 0x1cu, edx);
                g->esi = COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u;
                g->eax = arg6;
                g->esp = sp0 - 0xcu;
                t6 = cow_cdecl(g, COW_IMG(0x100a0d80u), 4, edx, arg4, arg6, sp0 + 0xcu);
                eax = t6;
            }
            else
            {
    COW_AT(100a0c02)
                wr32(sp0 - 0x10u, arg6);
                wr32(sp0 - 0x14u, arg4);
                wr32(sp0 - 0x18u, edx);
                g->eax = arg4;
                g->esp = sp0 - 0xcu;
                t5 = cow_cdecl(g, COW_IMG(0x100a0d40u), 3, edx, arg4, arg6);
                eax = t5;
            }
        }
        else
        {
            edx = t3;
    COW_AT(100a0be4)
            wr32(sp0 - 0x10u, arg6);
            wr32(sp0 - 0x14u, arg4);
            wr32(sp0 - 0x18u, edx);
            g->eax = arg4;
            g->esp = sp0 - 0xcu;
            t4 = cow_cdecl(g, COW_IMG(0x100a0d00u), 3, edx, arg4, arg6);
            eax = t4;
        }
    COW_AT(100a0c2f)
        if ((int32_t)eax < 0)
        {
            edi = eax;
            loc_4 = rd32(sp0 - 4u);
            loc_8 = rd32(sp0 - 8u);
            loc_c = rd32(sp0 - 0xcu);
        }
        else
        {
            edi = eax;
    COW_AT(100a0c39)
            t7 = rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u);
            wr16(t7 + 0x1c0u, (uint16_t)edi);
            t8 = rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u);
            wr8(t8 + 0x1bcu, 0xcu);
            t9 = rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u);
            wr16(t9 + 0x1beu, (uint16_t)arg2);
            if (rd8(sp0 + 0xcu) == 0u)
            {
                loc_4 = rd32(sp0 - 4u);
                loc_8 = rd32(sp0 - 8u);
                loc_c = rd32(sp0 - 0xcu);
            }
            else
            {
                eax = (t8 & 0xffffff00u) | rd8(sp0 + 0xcu);
                ecx = t9;
                edx = (t7 & 0xffff0000u) | (uint16_t)arg2;
    COW_AT(100a0c61)
                if (rd8(COW_IMG(0x104807f5u)) != 0u)
                {
                    loc_4 = rd32(sp0 - 4u);
                    loc_8 = rd32(sp0 - 8u);
                    loc_c = rd32(sp0 - 0xcu);
                }
                else
                {
    COW_AT(100a0c6a)
                    if (rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0x12cu) >> 0x16u & 1u)
                    {
                        loc_4 = rd32(sp0 - 4u);
                        loc_8 = rd32(sp0 - 8u);
                        loc_c = rd32(sp0 - 0xcu);
                    }
                    else
                    {
                        esi = rd16(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0x1fau);
    COW_AT(100a0c82)
                        if (rd32(COW_IMG(0x10480af0u) + esi * 4u) == 0u)
                        {
                            loc_4 = rd32(sp0 - 4u);
                            loc_8 = rd32(sp0 - 8u);
                            loc_c = rd32(sp0 - 0xcu);
                        }
                        else
                        {
                            eax = rd32(COW_IMG(0x10480af0u) + esi * 4u);
    COW_AT(100a0c8d)
                            wr32(sp0 - 0x10u, esi);
                            g->eax = eax;
                            g->esp = sp0 - 0xcu;
                            t10 = cow_cdecl(g, COW_IMG(0x100a0ce0u), 1, esi);
                            if ((uint8_t)t10 != 1u)
                            {
                                loc_4 = rd32(sp0 - 4u);
                                loc_8 = rd32(sp0 - 8u);
                                loc_c = rd32(sp0 - 0xcu);
                            }
                            else
                            {
    COW_AT(100a0c9a)
                                t11 = rd32(COW_IMG(0x10480af0u) + esi * 4u);
                                wr16(t11 + 0x1c0u, (uint16_t)edi);
                                wr8(rd32(COW_IMG(0x10480af0u) + esi * 4u) + 0x1bcu, 0xcu);
                                wr16(rd32(COW_IMG(0x10480af0u) + esi * 4u) + 0x1beu, rd16(COW_IMG(0x10485f7au)));
                                loc_4 = rd32(sp0 - 4u);
                                loc_8 = rd32(sp0 - 8u);
                                loc_c = rd32(sp0 - 0xcu);
                            }
                        }
                    }
                }
            }
        }
    }
    COW_AT(100a0ccb)
    g->ebx = loc_4;
    g->esi = loc_8;
    g->edi = loc_c;
    return edi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100a0b90(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100a0b9au:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100a0b9eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100a0bd6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->esi = COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u;
        (void)sp0;
        return 1;
    }
    case 0x100a0be4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->esi = COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u;
        (void)sp0;
        return 1;
    }
    case 0x100a0bf9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->esi = COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u;
        (void)sp0;
        return 1;
    }
    case 0x100a0c02u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->esi = COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u;
        (void)sp0;
        return 1;
    }
    case 0x100a0c17u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->esi = COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u;
        (void)sp0;
        return 1;
    }
    case 0x100a0c2fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->esi = COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u;
        (void)sp0;
        return 1;
    }
    case 0x100a0c39u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->esi = COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u;
        (void)sp0;
        return 1;
    }
    case 0x100a0c61u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->esi = COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u;
        (void)sp0;
        return 1;
    }
    case 0x100a0c6au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->esi = COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u;
        (void)sp0;
        return 1;
    }
    case 0x100a0c82u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100a0c8du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100a0c9au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100a0ccbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100a0b90(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100a0b90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
