/* f_0x10108990 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10108990(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101089adu: eax = g->eax; self = g->ecx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_101089ad;
    case 0x101089b8u: eax = g->eax; self = g->ecx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_101089b8;
    case 0x101089c2u: eax = g->eax; self = g->ecx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_101089c2;
    case 0x101089cbu: eax = g->eax; self = g->ecx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_101089cb;
    case 0x101089d6u: eax = g->eax; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101089d6;
    case 0x101089dbu: eax = g->eax; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101089db;
    case 0x101089e2u: eax = g->eax; self = g->ecx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_101089e2;
    case 0x101089ecu: eax = g->eax; self = g->ecx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_101089ec;
    case 0x101089eeu: eax = g->eax; self = g->ecx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_101089ee;
    case 0x101089fau: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_101089fa;
    case 0x10108a07u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_10108a07;
    case 0x10108a23u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_10108a23;
    case 0x10108a27u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_10108a27;
    case 0x10108a3eu: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_10108a3e;
    case 0x10108a48u: eax = g->eax; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10108a48;
    case 0x10108a4au: eax = g->eax; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10108a4a;
    default: break;
    }
#endif

    COW_AT(10108990)
    if (arg1 + 8u > rd16(self + 8u))
    {
        eax = 0u;
        edx = arg1 + 8u;
        goto L_10108a4a;
    }
    COW_AT(101089ad)
    if (rd32(self + 0x10u) == 0u)
    {
        edx = arg1 + 8u;
        esi = rd32(self + 0x10u);
        goto L_10108a48;
    }
    esi = rd32(self + 0x10u);
L_101089b8: ;
    COW_AT(101089b8)
    if (rd16(esi + 6u) >= arg1 + 8u) goto L_101089e2;
    eax = rd16(esi + 6u);
    COW_AT(101089c2)
    if (rd16(esi + 0xau) == 0u) goto L_101089db;
    eax = (eax & 0xffff0000u) | rd16(esi + 0xau);
    COW_AT(101089cb)
    t1 = self + (uint16_t)eax;
    if (self + (uint16_t)eax != 0u)
    {
        esi = t1;
        goto L_101089b8;
    }
    eax = t1;
    COW_AT(101089d6)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = arg1 + 8u;
    return eax;
L_101089db: ;
    COW_AT(101089db)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = arg1 + 8u;
    return 0u;
L_101089e2: ;
    COW_AT(101089e2)
    if (arg1 + 8u == 0u)
    {
        ebx = 0u;
        edi = esi;
    }
    else
    {
        edi = esi;
    COW_AT(101089ec)
        eax = 0u;
L_101089ee: ;
    COW_AT(101089ee)
        if (eax + 0xcu < arg1 + 8u)
        {
            eax = eax + 0xcu;
            edi = edi + 0xcu;
            goto L_101089ee;
        }
        ebx = eax + 0xcu;
        edi = edi + 0xcu;
    }
    COW_AT(101089fa)
    if (ebx + 0xcu > rd16(esi + 6u))
    {
        eax = rd16(esi + 6u);
        edx = ebx + 0xcu;
    }
    else
    {
        eax = rd16(esi + 6u);
        edx = ebx + 0xcu;
    COW_AT(10108a07)
        wr32(edi, 0u);
        t2 = rd16(esi + 6u);
        wr16(edi + 6u, (uint16_t)(t2 - (uint16_t)ebx));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t3 = cow_thiscall(g, COW_IMG(0x10108870u), self, 1, edi);
        t4 = g->edx;
        if (t3 == 0u)
        {
            eax = t3;
            edx = t4;
        }
        else
        {
            eax = t3;
            edx = t4;
            ebp = (in_ebp & 0xffff0000u) | (uint16_t)(t2 - (uint16_t)ebx);
    COW_AT(10108a23)
            wr16(eax + 4u, (uint16_t)ebp);
        }
    COW_AT(10108a27)
        g->edi = edi;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t5 = cow_thiscall(g, COW_IMG(0x10108700u), self, 1, edi);
        t6 = g->edx;
        wr16(esi + 6u, (uint16_t)ebx);
        wr16(edi + 4u, (uint16_t)ebx);
        eax = t5;
        edx = t6;
    }
    COW_AT(10108a3e)
    wr32(esi, self);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10108d80u), eax, self, g->edx, 0, 1, esi);
    t7 = g->edx;
    edx = t7;
L_10108a48: ;
    COW_AT(10108a48)
    eax = esi;
L_10108a4a: ;
    COW_AT(10108a4a)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10108990(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101089adu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        g->edx = arg1 + 8u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x101089b8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        g->edx = arg1 + 8u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x101089c2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        g->edx = arg1 + 8u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x101089cbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        g->edx = arg1 + 8u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x101089d6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edx = arg1 + 8u;
        (void)sp0;
        return 1;
    }
    case 0x101089dbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edx = arg1 + 8u;
        (void)sp0;
        return 1;
    }
    case 0x101089e2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        g->edx = arg1 + 8u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x101089ecu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        g->edx = arg1 + 8u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x101089eeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        g->edx = arg1 + 8u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x101089fau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x10108a07u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x10108a23u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10108a27u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10108a3eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x10108a48u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10108a4au:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10108990(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10108990(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
