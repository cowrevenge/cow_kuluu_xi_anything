/* f_0x1017afe0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1017afe0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
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
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 284u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1017b005u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x10cu); in_esi = rd32(sp0 - 0x108u); in_ebp = rd32(sp0 - 0x104u); g->ebp = rd32(sp0 - 0x104u); g->edi = rd32(sp0 - 0x10cu); g->esi = rd32(sp0 - 0x108u); goto E_1017b005;
    case 0x1017b010u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x10cu); in_esi = rd32(sp0 - 0x108u); in_ebp = rd32(sp0 - 0x104u); g->ebp = rd32(sp0 - 0x104u); g->edi = rd32(sp0 - 0x10cu); g->esi = rd32(sp0 - 0x108u); goto E_1017b010;
    case 0x1017b015u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x10cu); in_esi = rd32(sp0 - 0x108u); in_ebp = rd32(sp0 - 0x104u); g->ebp = rd32(sp0 - 0x104u); g->edi = rd32(sp0 - 0x10cu); g->esi = rd32(sp0 - 0x108u); goto E_1017b015;
    case 0x1017b017u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x10cu); in_esi = rd32(sp0 - 0x108u); in_ebp = rd32(sp0 - 0x104u); g->ebp = rd32(sp0 - 0x104u); g->edi = rd32(sp0 - 0x10cu); g->esi = rd32(sp0 - 0x108u); goto E_1017b017;
    case 0x1017b01du: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x10cu); in_esi = rd32(sp0 - 0x108u); in_ebp = rd32(sp0 - 0x104u); g->ebp = rd32(sp0 - 0x104u); g->edi = rd32(sp0 - 0x10cu); g->esi = rd32(sp0 - 0x108u); goto E_1017b01d;
    case 0x1017b04bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1017b04b;
    case 0x1017b057u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1017b057;
    case 0x1017b05bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1017b05b;
    case 0x1017b05fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1017b05f;
    case 0x1017b074u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1017b074;
    case 0x1017b07du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1017b07d;
    case 0x1017b092u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1017b092;
    case 0x1017b09cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1017b09c;
    case 0x1017b09fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1017b09f;
    case 0x1017b0a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1017b0a6;
    case 0x1017b0a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1017b0a9;
    case 0x1017b0beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1017b0be;
    case 0x1017b0c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1017b0c8;
    case 0x1017b0cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1017b0cb;
    case 0x1017b0d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1017b0d2;
    case 0x1017b0d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1017b0d5;
    case 0x1017b0e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1017b0e6;
    case 0x1017b0efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1017b0ef;
    case 0x1017b0f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1017b0f5;
    case 0x1017b0feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1017b0fe;
    default: break;
    }
#endif

    COW_AT(1017afe0)
    wr32(sp0 - 0x104u, in_ebp);
    wr32(sp0 - 0x108u, in_esi);
    wr32(sp0 - 0x10cu, in_edi);
    edi = sp0 - 0x100u;
    eax = 0u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    eax = 0xfu;
    edi = 0xffffffffu;
L_1017b005: ;
    COW_AT(1017b005)
    t1 = rd8(arg3 + eax);
    wr8(eax + sp0 - 0x100u, (uint8_t)t1);
    if ((int32_t)edi >= 0)
    {
        ecx = (ecx & 0xffffff00u) | t1;
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | t1;
    COW_AT(1017b010)
        if ((uint8_t)ecx > 0x20u)
        {
    COW_AT(1017b015)
            edi = eax;
        }
    }
    COW_AT(1017b017)
    if ((int32_t)(eax - 1u) > -1)
    {
        eax = eax - 1u;
        goto L_1017b005;
    }
    COW_AT(1017b01d)
    wr32(sp0 - 0x110u, in_ebx);
    wr32(sp0 - 0x114u, 0u);
    wr32(sp0 - 0x118u, arg3);
    g->eax = arg1;
    g->edx = in_edx;
    g->esp = sp0 - 0x110u;
    t2 = cow_thiscall(g, COW_IMG(0x10170f30u), arg1 + 0x44u, 2, arg3, 0u);
    t3 = g->edx;
    wr32(arg2 + 0x18u, t2);
    wr32(arg2 + 0x10u, t2);
    wr32(arg2 + 0x14u, t2);
    if ((int32_t)edi < 1)
    {
        eax = t2;
    }
    else
    {
        eax = t2;
        edx = t3;
    COW_AT(1017b04b)
        if (rd8(edi + sp0 - 0x100u) == 0x68u)
        {
            eax = (eax & 0xffffff00u) | rd8(edi + sp0 - 0x100u);
            edi = edi + sp0 - 0x100u;
            goto L_1017b05f;
        }
        eax = (eax & 0xffffff00u) | rd8(edi + sp0 - 0x100u);
        edi = edi + sp0 - 0x100u;
    COW_AT(1017b057)
        if ((uint8_t)eax == 0x6du) goto L_1017b05f;
    COW_AT(1017b05b)
        if ((uint8_t)eax != 0x6cu) goto L_1017b0d5;
L_1017b05f: ;
    COW_AT(1017b05f)
        wr32(sp0 - 0x114u, 0u);
        wr32(sp0 - 0x118u, sp0 - 0x100u);
        wr8(edi, 0x6du);
        g->eax = eax;
        g->esp = sp0 - 0x110u;
        t4 = cow_thiscall(g, COW_IMG(0x10170f30u), arg1 + 0x44u, 2, sp0 - 0x100u, 0u);
        if (t4 == 0u)
        {
            eax = t4;
        }
        else
        {
            eax = t4;
    COW_AT(1017b074)
            wr32(arg2 + 0x10u, eax);
            wr32(arg2 + 0x14u, eax);
            wr32(arg2 + 0x18u, eax);
        }
    COW_AT(1017b07d)
        wr32(sp0 - 0x114u, 0u);
        wr32(sp0 - 0x118u, sp0 - 0x100u);
        wr8(edi, 0x68u);
        g->eax = eax;
        g->edx = sp0 - 0x100u;
        g->esp = sp0 - 0x110u;
        t5 = cow_thiscall(g, COW_IMG(0x10170f30u), arg1 + 0x44u, 2, sp0 - 0x100u, 0u);
        t6 = g->edx;
        if (t5 == 0u)
        {
            edx = t6;
        }
        else
        {
            eax = t5;
            edx = t6;
    COW_AT(1017b092)
            t7 = rd32(arg2 + 0x14u);
            wr32(arg2 + 0x18u, eax);
            if (t7 == 0u)
            {
    COW_AT(1017b09c)
                wr32(arg2 + 0x14u, eax);
            }
    COW_AT(1017b09f)
            if (rd32(arg2 + 0x10u) == 0u)
            {
    COW_AT(1017b0a6)
                wr32(arg2 + 0x10u, eax);
            }
        }
    COW_AT(1017b0a9)
        wr32(sp0 - 0x114u, 0u);
        wr32(sp0 - 0x118u, sp0 - 0x100u);
        wr8(edi, 0x6cu);
        g->eax = sp0 - 0x100u;
        g->esp = sp0 - 0x110u;
        t8 = cow_thiscall(g, COW_IMG(0x10170f30u), arg1 + 0x44u, 2, sp0 - 0x100u, 0u);
        if (t8 == 0u)
        {
            eax = t8;
        }
        else
        {
            eax = t8;
    COW_AT(1017b0be)
            t9 = rd32(arg2 + 0x18u);
            wr32(arg2 + 0x10u, eax);
            if (t9 == 0u)
            {
    COW_AT(1017b0c8)
                wr32(arg2 + 0x18u, eax);
            }
    COW_AT(1017b0cb)
            if (rd32(arg2 + 0x14u) == 0u)
            {
    COW_AT(1017b0d2)
                wr32(arg2 + 0x14u, eax);
            }
        }
    }
L_1017b0d5: ;
    COW_AT(1017b0d5)
    wr16(arg2 + 0xd6u, 0u);
    if (rd8(arg3) != 0x5fu)
    {
        ebx = rd32(sp0 - 0x110u);
    }
    else
    {
        ebx = rd32(sp0 - 0x110u);
    COW_AT(1017b0e6)
        wr16(arg2 + 0xd6u, 1u);
    }
    COW_AT(1017b0ef)
    if (rd8(arg3) == 0x23u)
    {
    COW_AT(1017b0f5)
        wr16(arg2 + 0xd6u, 2u);
    }
    COW_AT(1017b0fe)
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x108u);
    g->edi = rd32(sp0 - 0x10cu);
    g->ebp = rd32(sp0 - 0x104u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1017afe0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1017b005u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10cu);
        in_esi = rd32(sp0 - 0x108u);
        in_ebp = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x10cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1017b010u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10cu);
        in_esi = rd32(sp0 - 0x108u);
        in_ebp = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x10cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1017b015u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10cu);
        in_esi = rd32(sp0 - 0x108u);
        in_ebp = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x10cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1017b017u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10cu);
        in_esi = rd32(sp0 - 0x108u);
        in_ebp = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x10cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1017b01du:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10cu);
        in_esi = rd32(sp0 - 0x108u);
        in_ebp = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x10cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1017b04bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x110u;
        g->ebx = arg1 + 0x44u;
        g->ebp = arg3;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017b057u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x110u;
        g->ebx = arg1 + 0x44u;
        g->ebp = arg3;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017b05bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x110u;
        g->ebx = arg1 + 0x44u;
        g->ebp = arg3;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017b05fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x110u;
        g->ebx = arg1 + 0x44u;
        g->ebp = arg3;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017b074u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x110u;
        g->ebx = arg1 + 0x44u;
        g->ebp = arg3;
        g->esi = arg2;
        wr32(sp0 - 0x118u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1017b07du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x110u;
        g->ebx = arg1 + 0x44u;
        g->ebp = arg3;
        g->esi = arg2;
        wr32(sp0 - 0x118u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1017b092u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x110u;
        g->ebx = arg1 + 0x44u;
        g->ebp = arg3;
        g->esi = arg2;
        wr32(sp0 - 0x118u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1017b09cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x110u;
        g->ebx = arg1 + 0x44u;
        g->ebp = arg3;
        g->esi = arg2;
        wr32(sp0 - 0x118u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1017b09fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x110u;
        g->ebx = arg1 + 0x44u;
        g->ebp = arg3;
        g->esi = arg2;
        wr32(sp0 - 0x118u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1017b0a6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x110u;
        g->ebx = arg1 + 0x44u;
        g->ebp = arg3;
        g->esi = arg2;
        wr32(sp0 - 0x118u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1017b0a9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x110u;
        g->ebx = arg1 + 0x44u;
        g->ebp = arg3;
        g->esi = arg2;
        wr32(sp0 - 0x118u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1017b0beu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x110u;
        g->ebp = arg3;
        g->esi = arg2;
        wr32(sp0 - 0x118u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1017b0c8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x110u;
        g->ebp = arg3;
        g->esi = arg2;
        wr32(sp0 - 0x118u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1017b0cbu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x110u;
        g->ebp = arg3;
        g->esi = arg2;
        wr32(sp0 - 0x118u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1017b0d2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x110u;
        g->ebp = arg3;
        g->esi = arg2;
        wr32(sp0 - 0x118u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1017b0d5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x110u;
        g->ebp = arg3;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017b0e6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x10cu;
        g->ebp = arg3;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017b0efu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x10cu;
        g->ebp = arg3;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017b0f5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x10cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1017b0feu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x10cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1017afe0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1017afe0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
