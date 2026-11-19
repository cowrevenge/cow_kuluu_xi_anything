/* f_0x101874f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=3 */
uint32_t cow_fn_101874f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
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
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101874fdu: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_101874fd;
    case 0x10187511u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_10187511;
    case 0x1018751du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; self = g->edi; in_ebp = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_1018751d;
    case 0x1018752du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; self = g->edi; in_ebp = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_1018752d;
    case 0x10187535u: ecx = g->ecx; edx = g->edx; in_esi = g->esi; self = g->edi; in_ebp = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_10187535;
    case 0x10187540u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; self = g->edi; in_ebp = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_10187540;
    case 0x1018754au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0x10u); goto E_1018754a;
    case 0x10187551u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0x10u); goto E_10187551;
    case 0x1018756bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0x10u); goto E_1018756b;
    case 0x10187572u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0x10u); goto E_10187572;
    case 0x10187582u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0x10u); goto E_10187582;
    case 0x1018758au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; self = g->edi; in_ebp = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_1018758a;
    case 0x10187595u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; self = g->edi; in_ebp = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_10187595;
    case 0x101875a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; self = g->edi; in_ebp = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_101875a5;
    case 0x101875b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_ebp = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_101875b3;
    default: break;
    }
#endif

    COW_AT(101874f0)
    if (rd32(self + 0x14u) != 0u) goto L_10187511;
    eax = rd32(self + 0x14u);
    COW_AT(101874fd)
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t1 = cow_stdcall(g, COW_IMG(0x10017d30u), 0);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return t1 & 0xffffff00u;
L_10187511: ;
    COW_AT(10187511)
    if (rd32(self + 4u) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        ecx = rd32(self + 4u);
    COW_AT(1018751d)
        g->ebx = in_ebx & 0xffffff00u;
        g->edx = arg2;
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, COW_IMG(0x101874f0u), ecx, 3, arg1, arg2, arg3);
        t2 = g->edx;
        edx = t2;
    }
    COW_AT(1018752d)
    if (arg3 != 0u)
    {
        eax = arg3;
        ebx = in_ebx & 0xffffff00u;
    }
    else
    {
    COW_AT(10187535)
        g->eax = arg3;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t3 = cow_thiscall(g, COW_IMG(0x101880b0u), self, 0);
        t4 = g->edx;
        if (t3 == arg1)
        {
            eax = t3;
            edx = t4;
            ebx = in_ebx & 0xffffff00u;
        }
        else
        {
            edx = t4;
    COW_AT(10187540)
            if (rd32(self + 0x10u) == 0u)
            {
                eax = rd32(self + 0x10u);
            }
            else
            {
                eax = rd32(self + 0x10u);
    COW_AT(1018754a)
                if (rd32(eax + 8u) == 0u) goto L_1018756b;
                esi = rd32(eax + 8u);
L_10187551: ;
    COW_AT(10187551)
                g->ebx = (in_ebx & 0xffffff00u) | 1u;
                g->ebp = arg1;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t5 = cow_thiscall(g, COW_IMG(0x1018abf0u), esi, 0);
                t6 = g->ecx;
                t7 = g->edx;
                g->edx = t7;
                cow_cdecl(g, COW_IMG(0x1002c8b0u), 1, esi);
                t8 = g->edx;
                if (rd32(rd32(self + 0x10u) + 8u) != 0u)
                {
                    eax = rd32(self + 0x10u);
                    edx = t8;
                    esi = rd32(rd32(self + 0x10u) + 8u);
                    goto L_10187551;
                }
                eax = rd32(self + 0x10u);
                edx = t8;
            }
L_1018756b: ;
    COW_AT(1018756b)
            if (rd32(self + 0x10u) != 0u)
            {
                esi = rd32(self + 0x10u);
    COW_AT(10187572)
                g->ebx = (in_ebx & 0xffffff00u) | 1u;
                g->ebp = arg1;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t9 = cow_thiscall(g, COW_IMG(0x1018abf0u), esi, 0);
                t10 = g->ecx;
                t11 = g->edx;
                g->edx = t11;
                t12 = cow_cdecl(g, COW_IMG(0x1002c8b0u), 1, esi);
                t13 = g->edx;
                eax = t12;
                edx = t13;
            }
    COW_AT(10187582)
            wr32(self + 0x10u, 0u);
            ebx = (in_ebx & 0xffffff00u) | 1u;
        }
    }
    COW_AT(1018758a)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t14 = cow_thiscall(g, COW_IMG(0x101880b0u), self, 0);
    t15 = g->ecx;
    t16 = g->edx;
    if (t14 == arg1)
    {
        eax = t14;
    }
    else
    {
        eax = t14;
        ecx = t15;
        edx = t16;
    COW_AT(10187595)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t17 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x46u);
        t18 = g->edx;
        if (t17 == 0u)
        {
            eax = t17;
            ebx = (ebx & 0xffffff00u) | 1u;
        }
        else
        {
            eax = t17;
            edx = t18;
            ebx = (ebx & 0xffffff00u) | 1u;
    COW_AT(101875a5)
            g->eax = eax;
            g->esp = sp0 - 0xcu;
            t19 = cow_thiscall(g, COW_IMG(0x1018a7a0u), eax, 3, self, arg1, arg3);
            eax = t19;
        }
    }
    COW_AT(101875b3)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return (eax & 0xffffff00u) | (uint8_t)ebx;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101874f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101874fdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10187511u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = in_ebx & 0xffffff00u;
        (void)sp0;
        return 1;
    }
    case 0x1018751du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        self = g->edi;
        in_ebp = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = in_ebx & 0xffffff00u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018752du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        self = g->edi;
        in_ebp = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = in_ebx & 0xffffff00u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10187535u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        self = g->edi;
        in_ebp = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = arg3;
        g->ebx = in_ebx & 0xffffff00u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10187540u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        self = g->edi;
        in_ebp = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = in_ebx & 0xffffff00u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018754au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10187551u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018756bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10187572u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10187582u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018758au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        self = g->edi;
        in_ebp = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10187595u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        self = g->edi;
        in_ebp = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101875a5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        self = g->edi;
        in_ebp = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101875b3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_ebp = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101874f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101874f0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
