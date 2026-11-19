/* f_0x100f1f00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100f1f00(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
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
    case 0x100f1f20u: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100f1f20;
    case 0x100f1f2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100f1f2e;
    case 0x100f1f39u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100f1f39;
    case 0x100f1f4au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_100f1f4a;
    case 0x100f1f53u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_100f1f53;
    case 0x100f1f55u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_100f1f55;
    case 0x100f1f58u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_100f1f58;
    case 0x100f1f5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_100f1f5f;
    case 0x100f1f70u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_100f1f70;
    case 0x100f1f79u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_100f1f79;
    case 0x100f1f7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_100f1f7b;
    case 0x100f1f7eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_100f1f7e;
    case 0x100f1f86u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x14u); goto E_100f1f86;
    case 0x100f1f94u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100f1f94;
    case 0x100f1fa1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100f1fa1;
    case 0x100f1faau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100f1faa;
    case 0x100f1fb0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_100f1fb0;
    case 0x100f1fb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_100f1fb9;
    case 0x100f1fdfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100f1fdf;
    case 0x100f1fe6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100f1fe6;
    case 0x100f1feau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100f1fea;
    case 0x100f1fefu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100f1fef;
    case 0x100f200fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_100f200f;
    default: break;
    }
#endif

    COW_AT(100f1f00)
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    t1 = rd8(self + 7u);
    wr32(self, 0u);
    t2 = rd16(self + 4u);
    wr8(self + 7u, (uint8_t)((uint8_t)t1 + 1u));
    if ((uint16_t)t2 != 0u)
    {
        eax = in_eax;
        ebx = in_ebx;
        ebp = in_ebp;
        loc_c = in_esi;
        loc_10 = in_edi;
    }
    else
    {
        ecx = ((self | t1) & 0xffffff00u) | (uint8_t)((uint8_t)t1 + 1u);
    COW_AT(100f1f20)
        g->eax = in_eax;
        g->ecx = ecx;
        g->edx = in_edx;
        g->esp = sp0 - 0x10u;
        t3 = cow_stdcall(g, COW_IMG(0x10310dc2u), 0);
        t4 = g->ecx;
        t5 = g->edx;
        if (t3 != 1u)
        {
            eax = t3;
            ebx = in_ebx;
            ebp = in_ebp;
            loc_c = in_esi;
            loc_10 = in_edi;
        }
        else
        {
            eax = t3;
            ecx = t4;
            edx = t5;
    COW_AT(100f1f2e)
            wr16(self + 4u, (uint16_t)eax);
            if (rd32(self + 0x20u) == 0u)
            {
                eax = rd32(self + 0x20u);
    COW_AT(100f1f39)
                wr32(sp0 - 0x14u, 0x1060u);
                g->eax = eax;
                g->esp = sp0 - 8u;
                t6 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x1060u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
                t7 = g->ecx;
                t8 = g->edx;
                if (t6 == 0u)
                {
                    ecx = t7;
                    edx = t8;
    COW_AT(100f1f53)
                    eax = 0u;
                }
                else
                {
                    eax = t6;
                    edx = t8;
    COW_AT(100f1f4a)
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x10u;
                    t9 = cow_thiscall(g, COW_IMG(0x100f29e0u), eax, 0);
                    t10 = g->ecx;
                    t11 = g->edx;
                    eax = t9;
                    ecx = t10;
                    edx = t11;
                }
    COW_AT(100f1f55)
                wr32(self + 0x20u, eax);
            }
    COW_AT(100f1f58)
            if (rd32(self + 0x24u) != 0u)
            {
                eax = rd32(self + 0x24u);
            }
            else
            {
                eax = rd32(self + 0x24u);
    COW_AT(100f1f5f)
                wr32(sp0 - 0x14u, 0x1060u);
                g->eax = eax;
                g->esp = sp0 - 8u;
                t12 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x1060u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
                t13 = g->ecx;
                t14 = g->edx;
                if (t12 == 0u)
                {
                    ecx = t13;
                    edx = t14;
    COW_AT(100f1f79)
                    eax = 0u;
                }
                else
                {
                    eax = t12;
                    edx = t14;
    COW_AT(100f1f70)
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x10u;
                    t15 = cow_thiscall(g, COW_IMG(0x100f29e0u), eax, 0);
                    t16 = g->ecx;
                    t17 = g->edx;
                    eax = t15;
                    ecx = t16;
                    edx = t17;
                }
    COW_AT(100f1f7b)
                wr32(self + 0x24u, eax);
            }
    COW_AT(100f1f7e)
            wr32(sp0 - 0x14u, in_ebp);
            if (rd8(self + 6u) != 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(self + 6u);
                loc_14 = in_ebp;
            }
            else
            {
                eax = (eax & 0xffffff00u) | rd8(self + 6u);
    COW_AT(100f1f86)
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                t18 = cow_stdcall(g, COW_IMG(0x100e6b10u), 0);
                t19 = g->ecx;
                t20 = g->edx;
                if ((int16_t)t18 <= 0)
                {
                    eax = t18;
                    edx = t20;
                    loc_14 = in_ebp;
                    goto L_100f1fb0;
                }
                eax = t18;
                ecx = t19;
                edx = t20;
                ebp = t18;
                edi = 0u;
L_100f1f94: ;
    COW_AT(100f1f94)
                wr32(sp0 - 0x18u, edi);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                t21 = cow_thiscall_cdecl(g, COW_IMG(0x100e6c40u), ecx, 1, edi);
                t22 = g->ecx;
                t23 = g->edx;
                if (t21 == 0u)
                {
                    eax = t21;
                    ecx = t22;
                    edx = t23;
                }
                else
                {
                    eax = t21;
                    ecx = t22;
                    edx = t23;
    COW_AT(100f1fa1)
                    wr32(sp0 - 0x18u, eax);
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x14u;
                    t24 = cow_cdecl(g, COW_IMG(0x100e63c0u), 1, eax);
                    t25 = g->ecx;
                    t26 = g->edx;
                    eax = t24;
                    ecx = t25;
                    edx = t26;
                }
    COW_AT(100f1faa)
                if ((int16_t)(edi + 1u) < (int16_t)ebp)
                {
                    edi = edi + 1u;
                    goto L_100f1f94;
                }
                loc_14 = rd32(sp0 - 0x14u);
            }
L_100f1fb0: ;
    COW_AT(100f1fb0)
            if ((uint8_t)arg1 == 0u)
            {
                eax = (eax & 0xffffff00u) | (uint8_t)arg1;
                ebx = in_ebx;
                ebp = loc_14;
                loc_c = rd32(sp0 - 0xcu);
                loc_10 = rd32(sp0 - 0x10u);
            }
            else
            {
                ebp = loc_14;
    COW_AT(100f1fb9)
                wr32(sp0 - 0x14u, in_ebx);
                wr32(sp0 - 0x18u, self);
                wr32(sp0 - 0x1cu, COW_IMG(0x100f2020u));
                wr32(sp0 - 0x20u, 0xffffffffu);
                wr32(sp0 - 0x24u, sp0 - 8u);
                wr32(sp0 - 8u, 0u);
                wr32(sp0 - 4u, 0u);
                g->eax = sp0 - 8u;
                g->edx = edx;
                t27 = rd8(self + 6u);
                g->esp = sp0 - 0x14u;
                t28 = cow_thiscall(g, COW_IMG(0x100f25f0u), self, 4, sp0 - 8u, 0xffffffffu, COW_IMG(0x100f2020u), self);
                t29 = g->edx;
                if (t28 != 0u)
                {
                    eax = t28;
                    edx = t29;
                    ebx = (in_ebx & 0xffffff00u) | t27;
                }
                else
                {
                    eax = t28;
                    edx = t29;
                    ebx = (in_ebx & 0xffffff00u) | t27;
    COW_AT(100f1fdf)
                    if (rd8(self + 6u) != 0u)
                    {
                        eax = (eax & 0xffffff00u) | rd8(self + 6u);
                    }
                    else
                    {
                        eax = (eax & 0xffffff00u) | rd8(self + 6u);
    COW_AT(100f1fe6)
                        wr16(self + 0xau, 0u);
                    }
                }
    COW_AT(100f1fea)
                if ((uint8_t)ebx != 0u)
                {
                    ebx = rd32(sp0 - 0x14u);
                    loc_c = rd32(sp0 - 0xcu);
                    loc_10 = rd32(sp0 - 0x10u);
                }
                else
                {
                    ebx = rd32(sp0 - 0x14u);
    COW_AT(100f1fef)
                    wr32(sp0 - 0x14u, self);
                    wr32(sp0 - 0x18u, 0u);
                    wr32(sp0 - 0x1cu, 0xffffffffu);
                    wr32(sp0 - 0x20u, sp0 - 8u);
                    g->eax = eax;
                    g->esp = sp0 - 0x10u;
                    t30 = cow_thiscall(g, COW_IMG(0x100f2690u), self, 4, sp0 - 8u, 0xffffffffu, 0u, self);
                    wr32(sp0 - 0x14u, self);
                    wr32(sp0 - 0x18u, 0u);
                    wr32(sp0 - 0x1cu, 0xffffffffu);
                    wr32(sp0 - 0x20u, sp0 - 8u);
                    t31 = cow_thiscall(g, COW_IMG(0x100f2720u), self, 4, sp0 - 8u, 0xffffffffu, 0u, self);
                    eax = t31;
                    loc_c = rd32(sp0 - 0xcu);
                    loc_10 = rd32(sp0 - 0x10u);
                }
            }
        }
    }
    COW_AT(100f200f)
    g->ebx = ebx;
    g->esi = loc_c;
    g->edi = loc_10;
    g->ebp = ebp;
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100f1f00(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100f1f20u:
    {
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100f1f2eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100f1f39u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100f1f4au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100f1f53u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100f1f55u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100f1f58u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100f1f5fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100f1f70u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100f1f79u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100f1f7bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100f1f7eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100f1f86u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100f1f94u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100f1fa1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100f1faau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100f1fb0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100f1fb9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100f1fdfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        g->edi = 0u;
        wr32(sp0 - 0x24u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100f1fe6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        g->edi = 0u;
        wr32(sp0 - 0x24u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100f1feau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        g->edi = 0u;
        wr32(sp0 - 0x24u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100f1fefu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = 0u;
        wr32(sp0 - 0x24u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100f200fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100f1f00(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100f1f00(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
