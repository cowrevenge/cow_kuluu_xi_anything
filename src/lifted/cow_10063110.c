/* f_0x10063110 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10063110(Guest* g)
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
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10061140u: in_eax = g->eax; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; self = g->ecx - 0xffffffccu; goto E_10061140;
    case 0x1006114du: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; in_edi = g->edi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); self = g->esi - 0xffffffccu; g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1006114d;
    case 0x10061160u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); self = g->ebp - 0xffffffc8u; g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10061160;
    case 0x10061164u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); self = g->ebp - 0xffffffc8u; g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_10061164;
    case 0x10061169u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); self = g->ebp - 0xffffffc8u; g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_10061169;
    case 0x1006116eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); self = g->ebp - 0xffffffc8u; g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_1006116e;
    case 0x10061170u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); self = g->ebp - 0xffffffc8u; g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_10061170;
    case 0x1006117fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); self = g->ebp - 0xffffffc8u; g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_1006117f;
    case 0x10061180u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); self = g->ebp - 0xffffffc8u; g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10061180;
    case 0x10061185u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); self = g->ebp - 0xffffffc8u; g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10061185;
    case 0x1006118eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); self = g->ebp - 0xffffffc8u; g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1006118e;
    case 0x10061196u: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; in_edi = g->edi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); self = g->esi - 0xffffffccu; g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10061196;
    case 0x1006119au: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; in_edi = g->edi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); self = g->esi - 0xffffffccu; g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1006119a;
    case 0x1006119fu: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; in_edi = g->edi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); self = g->esi - 0xffffffccu; g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1006119f;
    case 0x100611a1u: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; in_edi = g->edi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); self = g->esi - 0xffffffccu; g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100611a1;
    case 0x100611b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; in_edi = g->edi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); self = g->esi - 0xffffffccu; g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100611b2;
    case 0x100611bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; in_edi = g->edi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); self = g->esi - 0xffffffccu; g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100611bb;
    default: break;
    }
#endif

    COW_AT(10063110)
    COW_AT(10061140)
    if ((arg1 & 2u) == 0u) goto L_10061196;
    COW_AT(1006114d)
    if ((int32_t)(rd32(self - 0x38u) - 1u) < 0)
    {
        eax = rd32(self - 0x38u) - 1u;
        ecx = rd32(self - 0x38u) * 0xfu;
        edx = in_edx;
    }
    else
    {
        eax = rd32(self - 0x38u) - 1u;
        esi = self + rd32(self - 0x38u) * 0x78u - 0x34u;
    COW_AT(10061160)
        edx = in_edx;
        edi = eax + 1u;
L_10061164: ;
    COW_AT(10061164)
        if (esi == 0x78u)
        {
            esi = esi - 0x78u;
    COW_AT(1006116e)
            ecx = 0u;
        }
        else
        {
            esi = esi - 0x78u;
    COW_AT(10061169)
            ecx = esi + 0x34u;
        }
    COW_AT(10061170)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t1 = cow_thiscall(g, COW_IMG(0x1003b5c0u), ecx, 0);
        t2 = g->edx;
        t3 = cow_fastcall(g, COW_IMG(0x100747c0u), esi, t2, 0);
        t4 = g->ecx;
        t5 = g->edx;
        if (edi != 1u)
        {
            eax = t3;
            edx = t5;
            edi = edi - 1u;
            goto L_10061164;
        }
        eax = t3;
        ecx = t4;
        edx = t5;
    COW_AT(1006117f)
    }
    COW_AT(10061180)
    if (arg1 & 1u)
    {
    COW_AT(10061185)
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x1002c8e0u), 1, self - 0x38u);
        t6 = g->edx;
        edx = t6;
    }
    COW_AT(1006118e)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return self - 0x38u;
L_10061196: ;
    COW_AT(10061196)
    if (self == 0x34u)
    {
    COW_AT(1006119f)
        ecx = 0u;
    }
    else
    {
    COW_AT(1006119a)
        ecx = self;
    }
    COW_AT(100611a1)
    g->eax = in_eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t7 = cow_thiscall(g, COW_IMG(0x1003b5c0u), ecx, 0);
    t8 = g->edx;
    t9 = cow_fastcall(g, COW_IMG(0x100747c0u), self - 0x34u, t8, 0);
    t10 = g->ecx;
    t11 = g->edx;
    if (!(arg1 & 1u))
    {
        edx = t11;
    }
    else
    {
        eax = t9;
        ecx = t10;
        edx = t11;
    COW_AT(100611b2)
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x10028710u), 1, self - 0x34u);
        t12 = g->edx;
        edx = t12;
    }
    COW_AT(100611bb)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return self - 0x34u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10063110(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10061140u:
    {
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        self = g->ecx - 0xffffffccu;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1006114du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        self = g->esi - 0xffffffccu;
        g->esp = sp0 - 8u;
        g->ebx = (in_ebx & 0xffffff00u) | (uint8_t)arg1;
        (void)sp0;
        return 1;
    }
    case 0x10061160u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        self = g->ebp - 0xffffffc8u;
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | (uint8_t)arg1;
        (void)sp0;
        return 1;
    }
    case 0x10061164u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
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
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        self = g->ebp - 0xffffffc8u;
        g->esp = sp0 - 0x10u;
        g->ebx = (in_ebx & 0xffffff00u) | (uint8_t)arg1;
        (void)sp0;
        return 1;
    }
    case 0x10061169u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
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
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        self = g->ebp - 0xffffffc8u;
        g->esp = sp0 - 0x10u;
        g->ebx = (in_ebx & 0xffffff00u) | (uint8_t)arg1;
        (void)sp0;
        return 1;
    }
    case 0x1006116eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
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
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        self = g->ebp - 0xffffffc8u;
        g->esp = sp0 - 0x10u;
        g->ebx = (in_ebx & 0xffffff00u) | (uint8_t)arg1;
        (void)sp0;
        return 1;
    }
    case 0x10061170u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
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
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        self = g->ebp - 0xffffffc8u;
        g->esp = sp0 - 0x10u;
        g->ebx = (in_ebx & 0xffffff00u) | (uint8_t)arg1;
        (void)sp0;
        return 1;
    }
    case 0x1006117fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
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
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        self = g->ebp - 0xffffffc8u;
        g->esp = sp0 - 0x10u;
        g->ebx = (in_ebx & 0xffffff00u) | (uint8_t)arg1;
        (void)sp0;
        return 1;
    }
    case 0x10061180u:
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
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        self = g->ebp - 0xffffffc8u;
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | (uint8_t)arg1;
        (void)sp0;
        return 1;
    }
    case 0x10061185u:
    {
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
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        self = g->ebp - 0xffffffc8u;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1006118eu:
    {
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
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        self = g->ebp - 0xffffffc8u;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10061196u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
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
        in_ebp = g->ebp;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        self = g->esi - 0xffffffccu;
        g->esp = sp0 - 8u;
        g->ebx = (in_ebx & 0xffffff00u) | (uint8_t)arg1;
        (void)sp0;
        return 1;
    }
    case 0x1006119au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
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
        in_ebp = g->ebp;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        self = g->esi - 0xffffffccu;
        g->esp = sp0 - 8u;
        g->ebx = (in_ebx & 0xffffff00u) | (uint8_t)arg1;
        (void)sp0;
        return 1;
    }
    case 0x1006119fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
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
        in_ebp = g->ebp;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        self = g->esi - 0xffffffccu;
        g->esp = sp0 - 8u;
        g->ebx = (in_ebx & 0xffffff00u) | (uint8_t)arg1;
        (void)sp0;
        return 1;
    }
    case 0x100611a1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
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
        in_ebp = g->ebp;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        self = g->esi - 0xffffffccu;
        g->esp = sp0 - 8u;
        g->ebx = (in_ebx & 0xffffff00u) | (uint8_t)arg1;
        (void)sp0;
        return 1;
    }
    case 0x100611b2u:
    {
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
        in_ebp = g->ebp;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        self = g->esi - 0xffffffccu;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100611bbu:
    {
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
        in_ebp = g->ebp;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        self = g->esi - 0xffffffccu;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10063110(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10063110(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
