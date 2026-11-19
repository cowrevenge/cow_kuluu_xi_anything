/* f_0x100d8fb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100d8fb0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100d8fc6u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100d8fc6;
    case 0x100d8fddu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100d8fdd;
    case 0x100d8fe5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100d8fe5;
    case 0x100d902au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100d902a;
    case 0x100d9038u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100d9038;
    case 0x100d9056u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100d9056;
    case 0x100d9063u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100d9063;
    default: break;
    }
#endif

    COW_AT(100d8fb0)
    if (arg1 == 0u)
    {
        esi = 1u;
    }
    else
    {
    COW_AT(100d8fc6)
        t1 = rd32(arg1 + 0x46cu);
        g->eax = t1;
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        t2 = cow_stdcall(g, rd32(COW_IMG(0x103291c8u)), 2, t1, 0x32u);   /* kernel32.dll!WaitForSingleObject */
        t3 = g->ecx;
        t4 = g->edx;
        if (t2 != 0u)
        {
            esi = 1u;
        }
        else
        {
            ecx = t3;
            edx = t4;
    COW_AT(100d8fdd)
            if (rd32(arg1 + 0x460u) != 0u)
            {
                esi = 1u;
            }
            else
            {
    COW_AT(100d8fe5)
                wr16(arg1 + 0x488u, 0u);
                wr16(arg1 + 0x48au, 0u);
                wr16(arg1 + 0x484u, 0x10u);
                wr8(arg1 + 0x486u, 0x80u);
                wr8(arg1 + 0x487u, 2u);
                esi = arg2;
                edi = arg1 + 0x48cu;
                ecx = 5u;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                wr16(arg1 + 0x484u, 0x24u);
                wr32(arg1 + 0x47cu, 0x24u);
                wr32(arg1 + 0x480u, 0x46465849u);
                if (rd32(arg1 + 0x18u) == 0u)
                {
                    eax = rd32(arg1 + 0x18u);
                }
                else
                {
                    eax = rd32(arg1 + 0x18u);
    COW_AT(100d902a)
                    t5 = rd32(arg1 + 0x1cu);
                    g->eax = eax;
                    g->esp = sp0 - 0x10u;
                    t6 = cow_thiscall_cdecl(g, eax, t5, 3, t5, arg1 + 0x47cu, 0x24u);
                    t7 = g->ecx;
                    wr32(arg1 + 0x47cu, t6);
                    eax = t6;
                    ecx = t7;
                }
    COW_AT(100d9038)
                t8 = rd32(arg1 + 0x470u);
                wr32(arg1 + 0x460u, 5u);
                g->ecx = ecx;
                g->edx = t8;
                g->esp = sp0 - 0x10u;
                cow_stdcall(g, rd32(COW_IMG(0x103291d8u)), 3, t8, 1u, 0u);   /* kernel32.dll!ReleaseSemaphore */
                t9 = g->ecx;
                t10 = g->edx;
                ecx = t9;
                edx = t10;
                esi = 0u;
            }
    COW_AT(100d9056)
            t11 = rd32(arg1 + 0x46cu);
            g->esp = sp0 - 0xcu;
            cow_stdcall(g, rd32(COW_IMG(0x103291ccu)), 1, t11);   /* kernel32.dll!ReleaseMutex */
        }
    }
    COW_AT(100d9063)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return esi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100d8fb0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100d8fc6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = arg1;
        g->esi = 1u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100d8fddu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = arg1;
        g->esi = 1u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100d8fe5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100d902au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg1 + 0x47cu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100d9038u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100d9056u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100d9063u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100d8fb0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100d8fb0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
