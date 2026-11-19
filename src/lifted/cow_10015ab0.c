/* f_0x10015ab0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10015ab0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10015ab6u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10015ab6;
    case 0x10015abau: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10015aba;
    case 0x10015ac9u: eax = g->eax; edx = g->edx; goto E_10015ac9;
    case 0x10015aceu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10015ace;
    case 0x10015ad5u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10015ad5;
    case 0x10015addu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10015add;
    case 0x10015aecu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10015aec;
    case 0x10015b00u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10015b00;
    case 0x10015b08u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10015b08;
    case 0x10015b0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10015b0c;
    case 0x10015b14u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10015b14;
    case 0x10015b1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10015b1b;
    case 0x10015b22u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10015b22;
    case 0x10015b29u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10015b29;
    case 0x10015b32u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10015b32;
    case 0x10015b39u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10015b39;
    case 0x10015b3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10015b3e;
    case 0x10015b42u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10015b42;
    case 0x10015b47u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10015b47;
    case 0x10015b4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10015b4c;
    case 0x10015b56u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10015b56;
    case 0x10015b5cu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10015b5c;
    case 0x10015b66u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10015b66;
    case 0x10015b6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10015b6c;
    case 0x10015b71u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10015b71;
    default: break;
    }
#endif

    COW_AT(10015ab0)
    g->ecx = self;
    g->edx = in_edx;
    t1 = cow_stdcall(g, rd32(COW_IMG(0x103291a4u)), 0);   /* kernel32.dll!GetCurrentProcess */
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(10015ab6)
    if (eax != 0u)
    {
    COW_AT(10015aba)
        if ((int32_t)rd32(COW_IMG(0x10456aacu)) <= 0)
        {
            ecx = 0x20u;
            edx = rd32(COW_IMG(0x10456aacu));
        }
        else
        {
            edx = rd32(COW_IMG(0x10456aacu));
    COW_AT(10015ac9)
            if ((int32_t)edx >= 3)
            {
                ecx = 0x20u;
            }
            else
            {
    COW_AT(10015ace)
                ecx = rd32(COW_IMG(0x10350550u) + edx * 4u);
            }
        }
    COW_AT(10015ad5)
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0;
        t4 = cow_stdcall(g, rd32(COW_IMG(0x103291a0u)), 2, eax, ecx);   /* kernel32.dll!SetPriorityClass */
        t5 = g->ecx;
        t6 = g->edx;
        eax = t4;
        ecx = t5;
        edx = t6;
    }
    COW_AT(10015add)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t7 = cow_thiscall_cdecl(g, COW_IMG(0x10311cbau), ecx, 2, 0x8001fu, 0x8001fu);
    t8 = g->ecx;
    t9 = g->edx;
    eax = t7;
    ecx = t8;
    edx = t9;
    COW_AT(10015aec)
    COW_AT(10015b00)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t10 = cow_stdcall(g, rd32(COW_IMG(0x103294b8u)), 1, 0u);   /* ole32.dll!CoInitialize */
    t11 = g->ecx;
    t12 = g->edx;
    eax = t10;
    ecx = t11;
    edx = t12;
    COW_AT(10015b08)
    if ((int32_t)eax >= 0) goto L_10015b14;
    COW_AT(10015b0c)
    return 1u;
L_10015b14: ;
    COW_AT(10015b14)
    g->eax = eax;
    g->esp = sp0;
    t13 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 1, 0x10u);
    t14 = g->ecx;
    t15 = g->edx;
    eax = t13;
    ecx = t14;
    edx = t15;
    COW_AT(10015b1b)
    if (eax == 0u)
    {
    COW_AT(10015b71)
        wr32(COW_IMG(0x104570b0u), 0u);
    }
    else
    {
    COW_AT(10015b22)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0;
        t16 = cow_thiscall(g, COW_IMG(0x10029220u), eax, 0);
        t17 = g->ecx;
        t18 = g->edx;
        eax = t16;
        ecx = t17;
        edx = t18;
    COW_AT(10015b29)
        wr32(COW_IMG(0x104570b0u), eax);
        if (eax != 0u)
        {
    COW_AT(10015b32)
            g->eax = eax;
            g->esp = sp0;
            t19 = cow_fastcall(g, COW_IMG(0x10029290u), eax, edx, 0);
            t20 = g->ecx;
            t21 = g->edx;
            eax = t19;
            ecx = t20;
            edx = t21;
    COW_AT(10015b39)
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0;
            t22 = cow_stdcall(g, COW_IMG(0x100161b0u), 0);
            t23 = g->ecx;
            t24 = g->edx;
            eax = t22;
            ecx = t23;
            edx = t24;
    COW_AT(10015b3e)
            if ((uint8_t)eax != 0u)
            {
    COW_AT(10015b42)
                g->eax = eax;
                g->ecx = ecx;
                g->esp = sp0;
                t25 = cow_call_regs(g, COW_IMG(0x10016300u), g->eax, g->ecx, edx, 1, 0);
                t26 = g->ecx;
                t27 = g->edx;
                eax = t25;
                ecx = t26;
                edx = t27;
            }
        }
    }
    COW_AT(10015b47)
    g->eax = eax;
    g->esp = sp0;
    t28 = cow_call_regs(g, COW_IMG(0x10016320u), g->eax, g->ecx, edx, 1, 0);
    t29 = g->edx;
    eax = t28;
    edx = t29;
    COW_AT(10015b4c)
    if (rd32(COW_IMG(0x104570b0u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x104570b0u));
    }
    else
    {
        ecx = rd32(COW_IMG(0x104570b0u));
    COW_AT(10015b56)
        g->eax = rd32(ecx);
        g->edx = edx;
        t30 = rd32(ecx);
        g->esp = sp0;
        t31 = cow_thiscall(g, rd32(t30), ecx, 1, 1u);
        t32 = g->ecx;
        t33 = g->edx;
        eax = t31;
        ecx = t32;
        edx = t33;
    COW_AT(10015b5c)
        wr32(COW_IMG(0x104570b0u), 0u);
    }
    COW_AT(10015b66)
    g->esp = sp0;
    cow_stdcall(g, rd32(COW_IMG(0x103294b4u)), 0);   /* ole32.dll!CoUninitialize */
    COW_AT(10015b6c)
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10015ab0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10015ab6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10015abau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10015ac9u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        g->ecx = 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10015aceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10015ad5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10015addu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10015aecu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10015b00u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10015b08u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10015b0cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10015b14u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10015b1bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10015b22u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10015b29u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10015b32u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10015b39u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10015b3eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10015b42u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10015b47u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10015b4cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10015b56u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10015b5cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10015b66u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10015b6cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10015b71u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10015ab0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10015ab0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
