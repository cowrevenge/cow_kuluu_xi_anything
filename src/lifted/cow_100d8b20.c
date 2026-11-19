/* f_0x100d8b20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100d8b20(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
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
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100d8b2fu: eax = g->eax; in_edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100d8b2f;
    case 0x100d8b42u: eax = g->eax; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100d8b42;
    case 0x100d8b4cu: eax = g->eax; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100d8b4c;
    case 0x100d8b52u: eax = g->eax; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100d8b52;
    case 0x100d8b8au: eax = g->eax; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100d8b8a;
    case 0x100d8b97u: eax = g->eax; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100d8b97;
    default: break;
    }
#endif

    COW_AT(100d8b20)
    if (arg1 == 0u)
    {
        edi = 1u;
    }
    else
    {
    COW_AT(100d8b2f)
        t1 = rd32(arg1 + 0x46cu);
        g->eax = t1;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t2 = cow_stdcall(g, rd32(COW_IMG(0x103291c8u)), 2, t1, 0x32u);   /* kernel32.dll!WaitForSingleObject */
        t3 = g->edx;
        if (t2 != 0u)
        {
            edi = 1u;
        }
        else
        {
            edx = t3;
    COW_AT(100d8b42)
            if (rd32(arg1 + 0x460u) != 0u)
            {
                eax = rd32(arg1 + 0x460u);
                edi = 1u;
            }
            else
            {
                eax = rd32(arg1 + 0x460u);
    COW_AT(100d8b4c)
                if (rd32(arg1 + 4u) != 0xffffffffu)
                {
                    edi = 1u;
                }
                else
                {
    COW_AT(100d8b52)
                    wr16(arg1 + 8u, 2u);
                    wr32(arg1 + 0xcu, arg2);
                    g->eax = eax;
                    g->ecx = arg2;
                    g->edx = arg3;
                    g->esp = sp0 - 8u;
                    t4 = cow_stdcall(g, rd32(COW_IMG(0x10329480u)), 1, arg3);   /* ws2_32.dll!htons */
                    t5 = g->ecx;
                    t6 = g->edx;
                    wr16(arg1 + 0xau, (uint16_t)t4);
                    t7 = rd32(arg1 + 0x470u);
                    wr32(arg1 + 0x460u, 2u);
                    g->eax = t7;
                    g->edx = t6;
                    t8 = cow_stdcall(g, rd32(COW_IMG(0x103291d8u)), 3, t7, 1u, 0u);   /* kernel32.dll!ReleaseSemaphore */
                    t9 = g->edx;
                    eax = t8;
                    edx = t9;
                    edi = 0u;
                }
            }
    COW_AT(100d8b8a)
            t10 = rd32(arg1 + 0x46cu);
            g->esp = sp0 - 8u;
            cow_stdcall(g, rd32(COW_IMG(0x103291ccu)), 1, t10);   /* kernel32.dll!ReleaseMutex */
        }
    }
    COW_AT(100d8b97)
    g->esi = in_esi;
    g->edi = in_edi;
    return edi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100d8b20(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100d8b2fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100d8b42u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100d8b4cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100d8b52u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100d8b8au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100d8b97u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
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
void cow_adapter_100d8b20(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100d8b20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
