/* f_0x101e4e50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101e4e50(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 40u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101e4e7du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0xcu); goto E_101e4e7d;
    case 0x101e4e9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_101e4e9f;
    case 0x101e4eb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e4eb6;
    case 0x101e4ebdu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e4ebd;
    case 0x101e4ec4u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e4ec4;
    case 0x101e4ecbu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e4ecb;
    case 0x101e4ed0u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e4ed0;
    case 0x101e4edeu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e4ede;
    case 0x101e4ee4u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e4ee4;
    case 0x101e4efeu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e4efe;
    case 0x101e4f3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101e4f3e;
    case 0x101e4f4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101e4f4e;
    case 0x101e4f6au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101e4f6a;
    case 0x101e4f75u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0xcu); goto E_101e4f75;
    default: break;
    }
#endif

    COW_AT(101e4e50)
    wr32(sp0 - 0xcu, in_ebp);
    wr32(sp0 - 0x10u, sp0 - 8u);
    t1 = (self & 0xffffff00u) | rd8(self + 0x894u);
    wr32(sp0 - 0x14u, t1);
    wr32(sp0 - 8u, 0u);
    wr8(sp0 - 4u, 0u);
    g->eax = sp0 - 8u;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t2 = cow_thiscall_cdecl(g, COW_IMG(0x101e4ca0u), t1, 3, t1, sp0 - 8u, in_ebp);
    t3 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        edx = t3;
        goto L_101e4f75;
    }
    COW_AT(101e4e7d)
    wr32(sp0 - 0x10u, sp0 - 4u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, arg2 + 0x40u);
    g->eax = 0u;
    g->edx = sp0 - 4u;
    g->esp = sp0 - 0xcu;
    t4 = cow_cdecl(g, COW_IMG(0x101e4ce0u), 3, arg2 + 0x40u, 0u, sp0 - 4u);
    t5 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        eax = t4;
        edx = t5;
        goto L_101e4f75;
    }
    COW_AT(101e4e9f)
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    if (rd8(arg2 + (uint8_t)rd32(sp0 - 4u) + 0x3cu) > 3u)
    {
        eax = rd8(arg2 + (uint8_t)rd32(sp0 - 4u) + 0x3cu);
        edx = (uint8_t)rd32(sp0 - 4u);
        goto L_101e4ecb;
    }
    eax = rd8(arg2 + (uint8_t)rd32(sp0 - 4u) + 0x3cu);
    edx = (uint8_t)rd32(sp0 - 4u);
    COW_AT(101e4eb6)
    t6 = rd32(COW_IMG(0x101e4f80u) + eax * 4u);
    switch (t6 - RD)
    {
    case 0x101e4ebdu: goto L_101e4ebd;
    case 0x101e4ec4u: goto L_101e4ec4;
    case 0x101e4ecbu: goto L_101e4ecb;
    default: rt_fatal(g, COW_IMG(0x101e4eb6u), "switch");
    }
    return 0;
L_101e4ebd: ;
    COW_AT(101e4ebd)
    edi = 0x202u;
L_101e4ed0: ;
    COW_AT(101e4ed0)
    if (rd32(COW_IMG(0x10664494u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10664494u));
    COW_AT(101e4ede)
        if ((rd8(arg2 + 0x34u) & 0x10u) != 0u)
        {
    COW_AT(101e4ee4)
            wr32(sp0 - 0x18u, 0x80808080u);
            t7 = rd32(arg2 + 0x38u);
            wr32(sp0 - 0x1cu, t7);
            g->eax = t7;
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t8 = cow_thiscall(g, COW_IMG(0x1020b4b0u), ecx, 1, t7);
            t9 = g->edx;
            wr32(sp0 - 0x1cu, t8);
            wr32(sp0 - 0x20u, 0xeu);
            wr32(sp0 - 0x24u, 2u);
            g->esp = sp0 - 0x14u;
            t10 = cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, t9, 4, 2u, 0xeu, t8, 0x80808080u);
            t11 = g->edx;
            eax = t10;
            edx = t11;
        }
    }
    COW_AT(101e4efe)
    wr32(sp0 - 0x18u, 0x80808080u);
    wr32(sp0 - 0x1cu, edi);
    wr32(sp0 - 0x20u, 0x15u);
    wr32(sp0 - 0x24u, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t12 = cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, edx, 4, 0u, 0x15u, edi, 0x80808080u);
    t13 = g->edx;
    wr32(sp0 - 0x18u, 0x80808080u);
    wr32(sp0 - 0x1cu, arg2 + 4u);
    wr32(sp0 - 0x20u, 0x10u);
    wr32(sp0 - 0x24u, 1u);
    t14 = cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, t13, 4, 1u, 0x10u, arg2 + 4u, 0x80808080u);
    t15 = g->edx;
    wr32(sp0 - 0x18u, 0x80808080u);
    wr32(sp0 - 0x1cu, arg2 + 4u);
    wr32(sp0 - 0x20u, 0x29u);
    wr32(sp0 - 0x24u, 3u);
    t16 = cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, t15, 4, 3u, 0x29u, arg2 + 4u, 0x80808080u);
    t17 = g->edx;
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = t16;
        edx = t17;
    }
    else
    {
        ecx = rd32(COW_IMG(0x104dfd98u));
    COW_AT(101e4f3e)
        if (rd32(ecx + 0x3c350u) == rd16(arg2 + 0x2cu))
        {
            eax = rd16(arg2 + 0x2cu);
            edx = rd32(ecx + 0x3c350u);
        }
        else
        {
            eax = rd16(arg2 + 0x2cu);
            edx = rd32(ecx + 0x3c350u);
    COW_AT(101e4f4e)
            wr32(sp0 - 0x18u, 0x80808080u);
            wr32(sp0 - 0x1cu, 0u);
            wr32(sp0 - 0x20u, eax);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t18 = cow_cdecl(g, COW_IMG(0x101cbc10u), 4, eax, 0u, 0x80808080u, rd32(sp0 - 0x14u));
            t19 = g->edx;
            wr32(sp0 - 0x1cu, t18);
            wr32(sp0 - 0x20u, 0x23u);
            wr32(sp0 - 0x24u, 4u);
            g->esp = sp0 - 0x14u;
            t20 = cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, t19, 4, 4u, 0x23u, t18, 0x80808080u);
            t21 = g->edx;
            eax = t20;
            edx = t21;
        }
    }
    COW_AT(101e4f6a)
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = rd32(sp0 - 0xcu);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_101e4ec4: ;
    COW_AT(101e4ec4)
    edi = 0x203u;
    goto L_101e4ed0;
L_101e4ecb: ;
    COW_AT(101e4ecb)
    edi = 0x201u;
    goto L_101e4ed0;
L_101e4f75: ;
    COW_AT(101e4f75)
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101e4e50(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101e4e7du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x10u, sp0 - 8u);
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101e4e9fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebp = arg2;
        wr32(sp0 - 0x10u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101e4eb6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x14u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101e4ebdu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x14u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101e4ec4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x14u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101e4ecbu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x14u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101e4ed0u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x14u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101e4edeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x14u;
        g->ebp = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101e4ee4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x14u;
        g->ebp = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101e4efeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x14u;
        g->ebp = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101e4f3eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ebp = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101e4f4eu:
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
        g->esp = sp0 - 0x14u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101e4f6au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101e4f75u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101e4e50(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101e4e50(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
