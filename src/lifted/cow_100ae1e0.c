/* f_0x100ae1e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100ae1e0(Guest* g)
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100ae1fbu: in_eax = g->eax; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ae1fb;
    case 0x100ae214u: in_eax = g->eax; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ae214;
    case 0x100ae21bu: in_eax = g->eax; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ae21b;
    case 0x100ae234u: in_eax = g->eax; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ae234;
    case 0x100ae23bu: in_eax = g->eax; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ae23b;
    case 0x100ae254u: in_eax = g->eax; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ae254;
    case 0x100ae268u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ae268;
    case 0x100ae270u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ae270;
    case 0x100ae284u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ae284;
    case 0x100ae2b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ae2b5;
    case 0x100ae2cau: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ae2ca;
    default: break;
    }
#endif

    COW_AT(100ae1e0)
    wr8(COW_IMG(0x104896e4u), 0u);
    wr16(COW_IMG(0x104886d8u), (uint16_t)arg1);
    if ((uint16_t)arg1 < 0x7d0u)
    {
    COW_AT(100ae214)
        if ((uint16_t)arg1 < 0x3e8u)
        {
    COW_AT(100ae234)
            if ((uint16_t)arg1 < 0x100u)
            {
    COW_AT(100ae254)
                g->eax = in_eax;
                g->esp = sp0 - 8u;
                t7 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, in_edx, 1, 1, 0x6bu);
                t8 = g->edx;
                eax = t7;
                edx = t8;
                edi = t7 + (uint16_t)arg1;
            }
            else
            {
    COW_AT(100ae23b)
                g->eax = in_eax;
                g->esp = sp0 - 8u;
                t5 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, in_edx, 1, 1, 0x6eu);
                t6 = g->edx;
                eax = t5;
                edx = t6;
                edi = t5 + (uint16_t)arg1 - 0x100u;
            }
        }
        else
        {
    COW_AT(100ae21b)
            g->eax = in_eax;
            g->esp = sp0 - 8u;
            t3 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, in_edx, 1, 1, 0x6cu);
            t4 = g->edx;
            eax = t3;
            edx = t4;
            edi = t3 + (uint16_t)arg1 - 0x3e8u;
        }
    }
    else
    {
    COW_AT(100ae1fb)
        g->eax = in_eax;
        g->esp = sp0 - 8u;
        t1 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, in_edx, 1, 1, 0x6du);
        t2 = g->edx;
        eax = t1;
        edx = t2;
        edi = t1 + (uint16_t)arg1 - 0x7d0u;
    }
    COW_AT(100ae268)
    if (rd32(COW_IMG(0x10487e88u)) != edi) goto L_100ae284;
    COW_AT(100ae270)
    t9 = rd32(COW_IMG(0x10487e84u));
    wr32(COW_IMG(0x10489908u), t9);
    wr8(COW_IMG(0x104896e4u), 2u);
    g->esi = in_esi;
    g->edi = in_edi;
    return t9;
L_100ae284: ;
    COW_AT(100ae284)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t10 = cow_thiscall(g, COW_IMG(0x101c4af0u), rd32(COW_IMG(0x10662dccu)), 1, edi);
    t11 = g->edx;
    t12 = rd32(COW_IMG(0x10662dccu));
    wr32(COW_IMG(0x104897f0u), t10);
    g->edx = t11;
    t13 = cow_thiscall(g, COW_IMG(0x101c4820u), t12, 6, edi, 0u, 0u, COW_IMG(0x104896e4u), COW_IMG(0x100ae2d0u), 0u);
    t14 = g->ecx;
    t15 = g->edx;
    if ((int32_t)t13 >= 0)
    {
        eax = t13;
    }
    else
    {
        eax = t13;
        ecx = t14;
        edx = t15;
    COW_AT(100ae2b5)
        g->eax = eax;
        g->esp = sp0 - 0x10u;
        t16 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
        wr8(COW_IMG(0x104896e4u), 0xffu);
        eax = t16;
    }
    COW_AT(100ae2ca)
    g->esi = in_esi;
    g->edi = in_edi;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100ae1e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100ae1fbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edi;
        uint32_t in_eax;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ae214u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edi;
        uint32_t in_eax;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ae21bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edi;
        uint32_t in_eax;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ae234u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edi;
        uint32_t in_eax;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ae23bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edi;
        uint32_t in_eax;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ae254u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edi;
        uint32_t in_eax;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ae268u:
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
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100ae270u:
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
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100ae284u:
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
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100ae2b5u:
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
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100ae2cau:
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
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100ae1e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100ae1e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
