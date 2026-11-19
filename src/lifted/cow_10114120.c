/* f_0x10114120 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10114120(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_c;
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
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 40u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10114144u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10114144;
    case 0x10114158u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->edi; goto E_10114158;
    case 0x10114170u: eax = g->eax; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10114170;
    case 0x10114180u: eax = g->eax; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_10114180;
    case 0x10114182u: eax = g->eax; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_10114182;
    case 0x1011419bu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; in_ebx = rd32(sp0 - 0x20u); loc_c = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x20u); goto E_1011419b;
    case 0x101141a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; in_ebx = rd32(sp0 - 0x20u); loc_c = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x20u); goto E_101141a7;
    case 0x101141b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; in_ebx = rd32(sp0 - 0x20u); loc_c = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x20u); goto E_101141b1;
    case 0x101141bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; in_ebx = rd32(sp0 - 0x20u); loc_c = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x20u); goto E_101141ba;
    case 0x101141c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; in_ebx = rd32(sp0 - 0x20u); loc_c = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x20u); goto E_101141c6;
    case 0x101141cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; in_ebx = rd32(sp0 - 0x20u); loc_c = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x20u); goto E_101141cd;
    case 0x101141e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); goto E_101141e9;
    case 0x101141fcu: eax = g->eax; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); goto E_101141fc;
    case 0x1011420cu: eax = g->eax; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); goto E_1011420c;
    case 0x1011420eu: eax = g->eax; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); goto E_1011420e;
    case 0x10114212u: eax = g->eax; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); goto E_10114212;
    case 0x1011421eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); goto E_1011421e;
    case 0x10114225u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); goto E_10114225;
    case 0x1011422eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); goto E_1011422e;
    case 0x10114237u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); goto E_10114237;
    default: break;
    }
#endif

    COW_AT(10114120)
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    wr32(sp0 - 0xcu, 0u);
    if (rd16(self + 0x108u) == rd16(self + 0x10au))
    {
        edx = in_edx;
        ebp = 0u;
        esi = 0u;
        loc_14 = in_ebp;
        loc_18 = in_esi;
        loc_1c = in_edi;
        loc_c = 0u;
    }
    else
    {
        eax = (in_eax & 0xffff0000u) | rd16(self + 0x108u);
    COW_AT(10114144)
        wr32(sp0 - 0x20u, 0xffffffffu);
        wr32(sp0 - 0x24u, rd32(self));
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 0x1cu;
        t1 = cow_stdcall(g, rd32(COW_IMG(0x103291c8u)), 2, rd32(self), 0xffffffffu);   /* kernel32.dll!WaitForSingleObject */
        t2 = g->edx;
        if (t1 == 0xffffffffu)
        {
            edx = t2;
            ebp = 0u;
            esi = 0u;
            loc_14 = in_ebp;
            loc_18 = in_esi;
            loc_1c = in_edi;
            loc_c = 0u;
        }
        else
        {
    COW_AT(10114158)
            if (sp0 - 0x10u == self + rd16(self + 0x108u) * 0x10u + 8u)
            {
                edx = (uint32_t)rd16(self + 0x108u) << 4u;
                ebp = 0u;
                esi = 0u;
                loc_c = rd32(sp0 - 0xcu);
            }
            else
            {
                eax = self + rd16(self + 0x108u) * 0x10u + 8u;
    COW_AT(10114170)
                t3 = rd32(eax + 4u);
                wr32(sp0 - 0xcu, t3);
                if (rd32(eax + 8u) == 0u)
                {
                    edx = t3;
                    ebp = rd32(eax);
                    esi = rd32(eax + 8u);
                    loc_c = t3;
                }
                else
                {
                    edx = t3;
                    ebp = rd32(eax);
                    esi = rd32(eax + 8u);
                    loc_c = t3;
    COW_AT(10114180)
                    wr32(esi, rd32(esi) + 1u);
                }
            }
    COW_AT(10114182)
            wr32(sp0 - 0x20u, in_ebx);
            if (rd32(self + rd16(self + 0x108u) * 0x10u + 0x10u) == 0u)
            {
                ecx = sp0 - 0x10u;
            }
            else
            {
                eax = rd32(self + rd16(self + 0x108u) * 0x10u + 0x10u);
                ebx = self + rd16(self + 0x108u) * 0x10u + 8u;
    COW_AT(1011419b)
                t4 = rd32(eax) - 1u;
                t5 = rd32(eax);
                wr32(eax, t4);
                if (t5 >= 2u)
                {
                    ecx = t5;
                    edx = t4;
                }
                else
                {
                    ecx = t5;
                    edx = t4;
    COW_AT(101141a7)
                    if (rd32(rd32(ebx + 8u) + 4u) == 0u)
                    {
                        eax = rd32(rd32(ebx + 8u) + 4u);
                    }
                    else
                    {
                        eax = rd32(rd32(ebx + 8u) + 4u);
    COW_AT(101141b1)
                        wr32(sp0 - 0x24u, eax);
                        g->ebx = ebx;
                        g->eax = eax;
                        g->esp = sp0 - 0x18u;
                        t6 = cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 3, eax, in_ebx, rd32(sp0 - 0x1cu));
                        t7 = g->edx;
                        eax = t6;
                        edx = t7;
                        loc_c = rd32(sp0 - 0xcu);
                    }
    COW_AT(101141ba)
                    t8 = rd32(ebx + 8u);
                    wr32(sp0 - 0x24u, t8);
                    g->esp = sp0 - 0x20u;
                    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t8, edx, 1, 1, t8);
                    t9 = g->ecx;
                    t10 = g->edx;
                    ecx = t9;
                    edx = t10;
                    loc_c = rd32(sp0 - 0xcu);
                }
    COW_AT(101141c6)
                wr32(ebx + 8u, 0u);
            }
    COW_AT(101141cd)
            wr32(sp0 - 0x24u, rd32(self));
            t11 = rd32(self);
            t12 = rd8(self + 0x108u);
            wr16(self + 0x108u, t12 + 1u & 0xfu);
            g->edx = t12 + 1u & 0xfu;
            g->esp = sp0 - 0x20u;
            cow_stdcall(g, rd32(COW_IMG(0x103291ccu)), 1, t11);   /* kernel32.dll!ReleaseMutex */
            t13 = g->edx;
            edx = t13;
            loc_14 = rd32(sp0 - 0x14u);
            loc_18 = rd32(sp0 - 0x18u);
            loc_1c = rd32(sp0 - 0x1cu);
            loc_c = rd32(sp0 - 0xcu);
        }
    }
    COW_AT(101141e9)
    wr32(arg1 + 8u, 0u);
    if (arg1 == sp0 - 0x10u) goto L_1011420e;
    COW_AT(101141fc)
    wr32(arg1, ebp);
    wr32(arg1 + 4u, loc_c);
    wr32(arg1 + 8u, esi);
    if (esi == 0u) goto L_10114237;
    edx = loc_c;
    COW_AT(1011420c)
    wr32(esi, rd32(esi) + 1u);
L_1011420e: ;
    COW_AT(1011420e)
    if (esi != 0u)
    {
    COW_AT(10114212)
        t14 = rd32(esi) - 1u;
        t15 = rd32(esi);
        wr32(esi, t14);
        if (t15 < 2u)
        {
            ecx = t14;
    COW_AT(1011421e)
            if (rd32(esi + 4u) == 0u)
            {
                eax = rd32(esi + 4u);
            }
            else
            {
                eax = rd32(esi + 4u);
    COW_AT(10114225)
                wr32(sp0 - 0x20u, eax);
                g->ebx = in_ebx;
                g->eax = eax;
                g->esp = sp0 - 0x14u;
                t16 = cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 3, eax, loc_1c, loc_18);
                t17 = g->ecx;
                t18 = g->edx;
                eax = t16;
                ecx = t17;
                edx = t18;
                loc_14 = rd32(sp0 - 0x14u);
                loc_18 = rd32(sp0 - 0x18u);
                loc_1c = rd32(sp0 - 0x1cu);
            }
    COW_AT(1011422e)
            wr32(sp0 - 0x20u, esi);
            g->esp = sp0 - 0x1cu;
            cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, esi);
            loc_14 = rd32(sp0 - 0x14u);
            loc_18 = rd32(sp0 - 0x18u);
            loc_1c = rd32(sp0 - 0x1cu);
        }
    }
L_10114237: ;
    COW_AT(10114237)
    g->ebx = in_ebx;
    g->esi = loc_18;
    g->edi = loc_1c;
    g->ebp = loc_14;
    return arg1;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10114120(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10114144u:
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
        in_ebx = g->ebx;
        self = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        g->esi = 0u;
        wr32(sp0 - 0xcu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10114158u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->edi;
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10114170u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x1cu;
        g->ecx = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10114180u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->ecx = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10114182u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->ecx = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1011419bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x20u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        g->ecx = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101141a7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x20u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x101141b1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x20u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x101141bau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x20u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x101141c6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x20u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x101141cdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x20u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x101141e9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101141fcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->ecx = sp0 - 0x10u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1011420cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->ecx = sp0 - 0x10u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1011420eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->ecx = sp0 - 0x10u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10114212u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->ecx = sp0 - 0x10u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1011421eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10114225u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1011422eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10114237u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10114120(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10114120(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
