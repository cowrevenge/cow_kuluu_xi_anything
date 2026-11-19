/* f_0x100f6980 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100f6980(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4c;
    uint32_t loc_50;
    uint32_t loc_54;
    uint32_t loc_58;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 104u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100f69a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_esi = g->esi; in_edi = g->edi; loc_54 = rd32(sp0 - 0x54u); in_ebp = rd32(sp0 - 0x50u); in_ebx = rd32(sp0 - 0x4cu); g->ebp = rd32(sp0 - 0x50u); g->ebx = rd32(sp0 - 0x4cu); goto E_100f69a1;
    case 0x100f69a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); goto E_100f69a3;
    case 0x100f69bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100f69bd;
    case 0x100f69d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100f69d1;
    case 0x100f69ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100f69dd;
    case 0x100f69f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100f69f4;
    case 0x100f69f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100f69f8;
    case 0x100f6a02u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100f6a02;
    case 0x100f6a0du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100f6a0d;
    case 0x100f6a12u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100f6a12;
    case 0x100f6a1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100f6a1e;
    case 0x100f6a26u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100f6a26;
    case 0x100f6a48u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100f6a48;
    case 0x100f6a52u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100f6a52;
    case 0x100f6a58u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100f6a58;
    case 0x100f6a7au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100f6a7a;
    case 0x100f6a92u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f6a92;
    case 0x100f6a94u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); goto E_100f6a94;
    default: break;
    }
#endif

    COW_AT(100f6980)
    wr32(sp0 - 0x4cu, in_ebx);
    wr32(sp0 - 0x50u, in_ebp);
    wr32(sp0 - 0x54u, 0u);
    wr32(sp0 - 0x58u, sp0 + 4u);
    wr32(sp0 - 0x5cu, arg1);
    g->eax = sp0 + 4u;
    g->esp = sp0 - 0x50u;
    t1 = cow_thiscall(g, COW_IMG(0x100f42d0u), self, 3, arg1, sp0 + 4u, 0u);
    if (t1 != 0x18u)
    {
        esi = in_esi;
        edi = in_edi;
        loc_4c = in_ebx;
        loc_50 = in_ebp;
    }
    else
    {
        eax = t1;
    COW_AT(100f69a1)
        wr32(sp0 - 0x54u, in_esi);
        wr32(sp0 - 0x58u, in_edi);
        loc_4c = in_ebx;
        loc_50 = in_ebp;
        loc_54 = in_esi;
        loc_58 = in_edi;
L_100f69a3: ;
    COW_AT(100f69a3)
        wr32(sp0 - 0x5cu, arg1);
        wr32(sp0 - 0x60u, sp0 - 0x48u);
        g->eax = eax;
        g->ecx = arg1;
        g->edx = sp0 - 0x48u;
        g->esp = sp0 - 0x58u;
        t2 = cow_cdecl(g, COW_IMG(0x1031046fu), 2, sp0 - 0x48u, arg1);
        t3 = g->ecx;
        t4 = g->edx;
        if (t2 != 0u)
        {
            eax = t2;
            edx = t4;
        }
        else
        {
            ecx = t3;
            edx = t4;
    COW_AT(100f69bd)
            t5 = rd32(sp0 - 6u);
            wr16(self + 0xe4u, (uint16_t)(rd16(self + 0xe4u) + 1u));
            if (t5 >> 8u & 1u)
            {
                eax = t5;
            }
            else
            {
                eax = t5;
    COW_AT(100f69d1)
                if (rd16(self + 0xe6u) == 0u)
                {
                    ecx = (ecx & 0xffff0000u) | rd16(self + 0xe6u);
                    goto L_100f6a52;
                }
                ecx = (ecx & 0xffff0000u) | rd16(self + 0xe6u);
    COW_AT(100f69dd)
                if (rd32(sp0 - 0x14u) >= rd32(self + (uint16_t)ecx * 0x48u + 0xd4u))
                {
                    eax = (uint16_t)ecx;
                    edx = (uint16_t)ecx * 9u;
                    goto L_100f6a52;
                }
                eax = (uint16_t)ecx;
    COW_AT(100f69f4)
                if ((int32_t)eax > 0)
                {
    COW_AT(100f69f8)
                    edx = eax * 0x48u + self + 0xa0u;
L_100f6a02: ;
    COW_AT(100f6a02)
                    if (rd32(sp0 - 0x14u) >= rd32(edx + 0x34u)) goto L_100f6a26;
    COW_AT(100f6a0d)
                    if ((int32_t)eax < 4)
                    {
    COW_AT(100f6a12)
                        esi = edx;
                        edi = edx + 0x48u;
                        ecx = 0x12u;
                        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                    }
    COW_AT(100f6a1e)
                    if ((int32_t)(eax - 1u) > 0)
                    {
                        eax = eax - 1u;
                        edx = edx - 0x48u;
                        goto L_100f6a02;
                    }
                    eax = eax - 1u;
                }
L_100f6a26: ;
    COW_AT(100f6a26)
                esi = sp0 - 0x48u;
                edi = eax * 0x48u + self + 0xe8u;
                ecx = 0x12u;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                if (rd16(self + 0xe6u) >= 4u)
                {
                    edx = eax * 9u;
                    eax = (eax & 0xffff0000u) | rd16(self + 0xe6u);
                }
                else
                {
                    edx = eax * 9u;
                    eax = (eax & 0xffff0000u) | rd16(self + 0xe6u);
    COW_AT(100f6a48)
                    wr16(self + 0xe6u, (uint16_t)(eax + 1u));
                    eax = eax + 1u;
                }
            }
        }
L_100f6a7a: ;
    COW_AT(100f6a7a)
        wr32(sp0 - 0x5cu, 0u);
        wr32(sp0 - 0x60u, sp0 + 4u);
        wr32(sp0 - 0x64u, arg1);
        g->eax = eax;
        g->esp = sp0 - 0x58u;
        t6 = cow_thiscall(g, COW_IMG(0x100f42d0u), self, 3, arg1, sp0 + 4u, 0u);
        if (t6 == 0x18u)
        {
            eax = t6;
            loc_4c = rd32(sp0 - 0x4cu);
            loc_50 = rd32(sp0 - 0x50u);
            loc_54 = rd32(sp0 - 0x54u);
            loc_58 = rd32(sp0 - 0x58u);
            goto L_100f69a3;
        }
    COW_AT(100f6a92)
        esi = rd32(sp0 - 0x54u);
        edi = rd32(sp0 - 0x58u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_50 = rd32(sp0 - 0x50u);
    }
    COW_AT(100f6a94)
    g->ebx = loc_4c;
    g->esi = esi;
    g->edi = edi;
    g->ebp = loc_50;
    return;
L_100f6a52: ;
    COW_AT(100f6a52)
    if ((uint16_t)ecx < 4u)
    {
    COW_AT(100f6a58)
        esi = sp0 - 0x48u;
        edi = self + (uint16_t)ecx * 0x48u + 0xe8u;
        ecx = 0x12u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr16(self + 0xe6u, (uint16_t)(rd16(self + 0xe6u) + 1u));
        eax = (uint16_t)ecx * 9u;
    }
    goto L_100f6a7a;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100f6980(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100f69a1u:
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
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        in_ebp = rd32(sp0 - 0x50u);
        in_ebx = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x50u;
        g->ebp = arg1;
        wr32(sp0 - 0x58u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100f69a3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x58u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100f69bdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        g->ebp = arg1;
        wr32(sp0 - 0x60u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100f69d1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        g->ebp = arg1;
        wr32(sp0 - 0x60u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100f69ddu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        g->ebp = arg1;
        wr32(sp0 - 0x60u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100f69f4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        g->ebp = arg1;
        wr32(sp0 - 0x60u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100f69f8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        g->ebp = arg1;
        wr32(sp0 - 0x60u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100f6a02u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        g->ebp = arg1;
        wr32(sp0 - 0x60u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100f6a0du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        g->ebp = arg1;
        wr32(sp0 - 0x60u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100f6a12u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        g->ebp = arg1;
        wr32(sp0 - 0x60u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100f6a1eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        g->ebp = arg1;
        wr32(sp0 - 0x60u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100f6a26u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        g->ebp = arg1;
        wr32(sp0 - 0x60u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100f6a48u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        g->ebp = arg1;
        wr32(sp0 - 0x60u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100f6a52u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        g->ebp = arg1;
        wr32(sp0 - 0x60u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100f6a58u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        g->ebp = arg1;
        wr32(sp0 - 0x60u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100f6a7au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        g->ebp = arg1;
        wr32(sp0 - 0x60u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100f6a92u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100f6a94u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100f6980(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100f6980(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
