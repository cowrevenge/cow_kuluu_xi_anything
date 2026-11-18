/* f_0x1031592e - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1031592e(Guest* g)
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
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1031593fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1031593f;
    case 0x10315950u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_10315950;
    case 0x10315968u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); goto E_10315968;
    case 0x10315971u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); goto E_10315971;
    case 0x1031597fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_1031597f;
    case 0x10315985u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_10315985;
    case 0x10315987u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_10315987;
    case 0x10315992u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_10315992;
    case 0x10315993u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); goto E_10315993;
    case 0x103159a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); goto E_103159a4;
    case 0x103159bau: eax = g->eax; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_103159ba;
    case 0x103159c1u: eax = g->eax; edx = g->edx; esi = g->esi; goto E_103159c1;
    default: break;
    }
#endif

    COW_AT(1031592e)
    g->esp = sp0 - 4u;
    t1 = cow_fastcall(g, COW_IMG(0x103159d3u), self, in_edx, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd32(COW_IMG(0x109b2704u)) != 1u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t3;
    COW_AT(1031593f)
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t4 = cow_cdecl(g, rd32(COW_IMG(0x103291a4u)), 1, arg1);   /* kernel32.dll!GetCurrentProcess */
        t5 = g->ecx;
        t6 = g->edx;
        g->ecx = t5;
        g->edx = t6;
        t7 = cow_stdcall(g, rd32(COW_IMG(0x10329268u)), 2, t4, arg1);   /* kernel32.dll!TerminateProcess */
        t8 = g->ecx;
        t9 = g->edx;
        eax = t7;
        ecx = t8;
        edx = t9;
    }
    COW_AT(10315950)
    wr32(COW_IMG(0x109b2700u), 1u);
    wr8(COW_IMG(0x109b26fcu), (uint8_t)arg3);
    if (arg2 == 0u)
    {
    COW_AT(10315968)
        if (rd32(COW_IMG(0x109f943cu)) == 0u)
        {
            eax = rd32(COW_IMG(0x109f943cu));
        }
        else
        {
            eax = rd32(COW_IMG(0x109f943cu));
    COW_AT(10315971)
            if (rd32(COW_IMG(0x109f9438u)) - 4u < eax)
            {
                ecx = rd32(COW_IMG(0x109f9438u));
                goto L_10315992;
            }
            ecx = rd32(COW_IMG(0x109f9438u));
            esi = rd32(COW_IMG(0x109f9438u)) - 4u;
L_1031597f: ;
    COW_AT(1031597f)
            if (rd32(esi) == 0u)
            {
                eax = rd32(esi);
            }
            else
            {
                eax = rd32(esi);
    COW_AT(10315985)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                t10 = cow_thiscall(g, eax, ecx, 0);
                t11 = g->ecx;
                t12 = g->edx;
                eax = t10;
                ecx = t11;
                edx = t12;
            }
    COW_AT(10315987)
            if (esi - 4u >= rd32(COW_IMG(0x109f943cu)))
            {
                esi = esi - 4u;
                goto L_1031597f;
            }
L_10315992: ;
    COW_AT(10315992)
        }
    COW_AT(10315993)
        g->eax = eax;
        g->esp = sp0;
        t13 = cow_call_regs(g, COW_IMG(0x103159e5u), g->eax, ecx, edx, 1, 4, COW_IMG(0x1034f228u), COW_IMG(0x1034f230u), in_ebx, in_edi);
        t14 = g->edx;
        eax = t13;
        ecx = COW_IMG(0x1034f230u);
        edx = t14;
    }
    COW_AT(103159a4)
    g->eax = eax;
    g->esp = sp0;
    t15 = cow_call_regs(g, COW_IMG(0x103159e5u), g->eax, ecx, edx, 1, 4, COW_IMG(0x1034f234u), COW_IMG(0x1034f23cu), in_ebx, in_edi);
    t16 = g->edx;
    if (arg3 == 0u)
    {
        eax = t15;
        edx = t16;
        goto L_103159c1;
    }
    eax = t15;
    edx = t16;
    COW_AT(103159ba)
    g->esp = sp0 - 4u;
    cow_fastcall(g, COW_IMG(0x103159dcu), COW_IMG(0x1034f23cu), edx, 0);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_103159c1: ;
    COW_AT(103159c1)
    wr32(COW_IMG(0x109b2704u), 1u);
    g->esp = sp0 - 4u;
    cow_stdcall(g, rd32(COW_IMG(0x1032926cu)), 1, arg1);   /* kernel32.dll!ExitProcess */
    rt_fatal(g, COW_IMG(0x103159cbu), "no way on");
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1031592e(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1031593fu:
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
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10315950u:
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
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10315968u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = arg3;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10315971u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = arg3;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1031597fu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg3;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10315985u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg3;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10315987u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg3;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10315992u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg3;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10315993u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = arg3;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x103159a4u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = arg3;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x103159bau:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ecx = COW_IMG(0x1034f23cu);
        (void)sp0;
        return 1;
    }
    case 0x103159c1u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        g->ecx = COW_IMG(0x1034f23cu);
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1031592e(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1031592e(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
