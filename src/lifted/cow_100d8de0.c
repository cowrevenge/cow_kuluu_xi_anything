/* f_0x100d8de0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100d8de0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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
    case 0x100d8df6u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100d8df6;
    case 0x100d8e0du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100d8e0d;
    case 0x100d8e19u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100d8e19;
    case 0x100d8e2du: eax = g->eax; ecx = g->ecx; esi = g->esi; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100d8e2d;
    case 0x100d8e32u: eax = g->eax; ecx = g->ecx; esi = g->esi; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100d8e32;
    case 0x100d8e5au: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100d8e5a;
    case 0x100d8e80u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100d8e80;
    case 0x100d8e96u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100d8e96;
    case 0x100d8ea3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100d8ea3;
    case 0x100d8ec1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100d8ec1;
    case 0x100d8eceu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100d8ece;
    default: break;
    }
#endif

    COW_AT(100d8de0)
    if (arg1 == 0u)
    {
        esi = 1u;
    }
    else
    {
    COW_AT(100d8df6)
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
            eax = t2;
            ecx = t3;
            edx = t4;
    COW_AT(100d8e0d)
            if (rd32(arg1 + 0x460u) != 0u)
            {
                esi = 1u;
            }
            else
            {
    COW_AT(100d8e19)
                if (rd16(arg2) < 0x14u)
                {
                    eax = (eax & 0xffff0000u) | rd16(arg2);
                }
                else
                {
    COW_AT(100d8e2d)
                    eax = 0x14u;
                }
    COW_AT(100d8e32)
                wr16(arg1 + 0x484u, 0x10u);
                wr8(arg1 + 0x486u, 0x80u);
                wr8(arg1 + 0x487u, 1u);
                wr16(arg1 + 0x488u, 0u);
                wr16(arg1 + 0x48au, 0u);
                wr16(arg1 + 0x48cu, rd16(arg2));
                wr16(arg1 + 0x484u, 0x12u);
                if ((uint16_t)eax == 0u)
                {
                    edx = arg2;
                }
                else
                {
    COW_AT(100d8e5a)
                    t5 = (uint32_t)(uint16_t)eax << 2u;
                    esi = arg2 + 4u;
                    edi = arg1 + 0x48eu;
                    ecx = t5 >> 2u;
                    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                    ecx = t5 & 3u;
                    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
                    wr16(arg1 + 0x484u, (uint16_t)(rd16(arg1 + 0x484u) + (uint16_t)(eax << 2u)));
                    edx = t5;
                }
    COW_AT(100d8e80)
                wr32(arg1 + 0x480u, 0x46465849u);
                t6 = rd16(arg1 + 0x484u);
                wr32(arg1 + 0x47cu, t6);
                if (rd32(arg1 + 0x18u) == 0u)
                {
                    ecx = rd32(arg1 + 0x18u);
                }
                else
                {
                    eax = t6;
                    ecx = rd32(arg1 + 0x18u);
    COW_AT(100d8e96)
                    t7 = rd32(arg1 + 0x1cu);
                    g->eax = eax;
                    g->edx = t7;
                    g->esp = sp0 - 0x10u;
                    t8 = cow_thiscall_cdecl(g, ecx, ecx, 3, t7, arg1 + 0x47cu, eax);
                    t9 = g->ecx;
                    t10 = g->edx;
                    wr32(arg1 + 0x47cu, t8);
                    ecx = t9;
                    edx = t10;
                }
    COW_AT(100d8ea3)
                t11 = rd32(arg1 + 0x470u);
                wr32(arg1 + 0x460u, 5u);
                g->eax = t11;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t12 = cow_stdcall(g, rd32(COW_IMG(0x103291d8u)), 3, t11, 1u, 0u);   /* kernel32.dll!ReleaseSemaphore */
                t13 = g->edx;
                eax = t12;
                edx = t13;
                esi = 0u;
            }
    COW_AT(100d8ec1)
            t14 = rd32(arg1 + 0x46cu);
            g->esp = sp0 - 0xcu;
            cow_stdcall(g, rd32(COW_IMG(0x103291ccu)), 1, t14);   /* kernel32.dll!ReleaseMutex */
        }
    }
    COW_AT(100d8ece)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return esi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100d8de0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100d8df6u:
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
    case 0x100d8e0du:
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
    case 0x100d8e19u:
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
    case 0x100d8e2du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->edx = arg2;
        g->ebx = arg1 + 0x47cu;
        g->ebp = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100d8e32u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->edx = arg2;
        g->ebx = arg1 + 0x47cu;
        g->ebp = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100d8e5au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->edx = arg2;
        g->ebx = arg1 + 0x47cu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100d8e80u:
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
    case 0x100d8e96u:
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
    case 0x100d8ea3u:
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
    case 0x100d8ec1u:
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
    case 0x100d8eceu:
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
void cow_adapter_100d8de0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100d8de0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
