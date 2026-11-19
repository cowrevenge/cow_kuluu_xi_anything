/* f_0x102ad9b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102ad9b0(Guest* g)
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
    uint32_t t2;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102ad9c0u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_102ad9c0;
    case 0x102ad9cau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102ad9ca;
    case 0x102ad9cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102ad9cf;
    case 0x102ad9d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102ad9d5;
    case 0x102ad9d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102ad9d7;
    case 0x102ad9ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102ad9dd;
    case 0x102ad9e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102ad9e4;
    case 0x102ad9f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102ad9f7;
    case 0x102ada15u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102ada15;
    case 0x102ada20u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102ada20;
    case 0x102ada49u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_102ada49;
    default: break;
    }
#endif

    COW_AT(102ad9b0)
    if (rd32(arg1 + 0x4cu) == 0u)
    {
    COW_AT(102ad9c0)
        if ((int32_t)rd32(arg1 + 0x44u) <= 0)
        {
            ecx = self;
            edx = in_edx;
            esi = 0u;
        }
        else
        {
            eax = rd32(arg1 + 0x44u);
    COW_AT(102ad9ca)
            ecx = rd32(arg1 + 0x48u);
            edx = eax;
            esi = 0u;
L_102ad9cf: ;
    COW_AT(102ad9cf)
            if ((int32_t)rd32(ecx) > (int32_t)esi)
            {
                eax = rd32(ecx);
    COW_AT(102ad9d5)
                esi = eax;
            }
    COW_AT(102ad9d7)
            if (edx != 1u)
            {
                ecx = ecx + 4u;
                edx = edx - 1u;
                goto L_102ad9cf;
            }
            ecx = ecx + 4u;
            edx = edx - 1u;
        }
    COW_AT(102ad9dd)
        if (rd32(arg1 + 0x50u) == 0u)
        {
            eax = rd32(arg1 + 0x50u);
        }
        else
        {
            eax = rd32(arg1 + 0x50u);
    COW_AT(102ad9e4)
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t1 = cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103bef68u), 0x1ddu);
            t2 = g->ecx;
            t3 = g->edx;
            eax = t1;
            ecx = t2;
            edx = t3;
        }
    COW_AT(102ad9f7)
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 4u;
        t4 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, esi, 4u, COW_IMG(0x103bef68u), 0x1dfu, in_esi);
        t5 = g->ecx;
        wr32(arg1 + 0x50u, t4);
        if ((int32_t)esi <= 0)
        {
            eax = 0u;
            ecx = t5;
            goto L_102ada20;
        }
        eax = 0u;
L_102ada15: ;
    COW_AT(102ada15)
        t6 = rd32(arg1 + 0x50u);
        wr32(eax * 4u + t6, eax);
        if ((int32_t)(eax + 1u) < (int32_t)esi)
        {
            eax = eax + 1u;
            goto L_102ada15;
        }
        eax = eax + 1u;
        ecx = t6;
L_102ada20: ;
    COW_AT(102ada20)
        t7 = rd32(arg1 + 0x34u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = t7;
        g->esp = sp0;
        t8 = cow_cdecl(g, COW_IMG(0x102a9f10u), 3, t7, in_esi, in_edi);
        t9 = g->ecx;
        t10 = g->edx;
        g->ecx = t9;
        g->edx = t10;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x102ad1f0u), 3, arg1, t7, in_esi);
        t11 = g->ecx;
        t12 = g->edx;
        t13 = rd32(arg1 + 0x34u);
        g->eax = t13;
        g->ecx = t11;
        g->edx = t12;
        g->esp = sp0 - 8u;
        t14 = cow_cdecl(g, COW_IMG(0x102a9f50u), 3, t13, arg1, t7);
        t15 = g->ecx;
        t16 = g->edx;
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x102ad790u), 1, arg1);
        wr32(arg1 + 0x30u, COW_IMG(0x102b3360u));
    }
    COW_AT(102ada49)
    g->esi = in_esi;
    g->edi = in_edi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102ad9b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102ad9c0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ad9cau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ad9cfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ad9d5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ad9d7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ad9ddu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ad9e4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ad9f7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ada15u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ada20u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ada49u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102ad9b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102ad9b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
