/* f_0x10062fc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10062fc0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t t8;
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
    case 0x10062210u: in_eax = g->eax; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; self = g->ecx - 0xffffffccu; goto E_10062210;
    case 0x1006221du: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; in_edi = g->edi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); self = g->esi - 0xffffffccu; g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1006221d;
    case 0x10062230u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); self = g->ebp - 0xffffffc8u; g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10062230;
    case 0x10062234u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); self = g->ebp - 0xffffffc8u; g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_10062234;
    case 0x10062241u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); self = g->ebp - 0xffffffc8u; g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_10062241;
    case 0x10062242u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); self = g->ebp - 0xffffffc8u; g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10062242;
    case 0x10062247u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); self = g->ebp - 0xffffffc8u; g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10062247;
    case 0x10062250u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); self = g->ebp - 0xffffffc8u; g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10062250;
    case 0x10062258u: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; in_edi = g->edi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); self = g->esi - 0xffffffccu; g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10062258;
    case 0x10062264u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; in_edi = g->edi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); self = g->esi - 0xffffffccu; g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10062264;
    case 0x1006226du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; in_edi = g->edi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); self = g->esi - 0xffffffccu; g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1006226d;
    default: break;
    }
#endif

    COW_AT(10062fc0)
    COW_AT(10062210)
    if ((arg1 & 2u) == 0u) goto L_10062258;
    COW_AT(1006221d)
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
    COW_AT(10062230)
        edx = in_edx;
        edi = eax + 1u;
L_10062234: ;
    COW_AT(10062234)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t1 = cow_thiscall(g, COW_IMG(0x10062140u), esi - 0x78u, 0);
        t2 = g->ecx;
        t3 = g->edx;
        if (edi != 1u)
        {
            eax = t1;
            edx = t3;
            esi = esi - 0x78u;
            edi = edi - 1u;
            goto L_10062234;
        }
        eax = t1;
        ecx = t2;
        edx = t3;
    COW_AT(10062241)
    }
    COW_AT(10062242)
    if (arg1 & 1u)
    {
    COW_AT(10062247)
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x1002c8e0u), 1, self - 0x38u);
        t4 = g->edx;
        edx = t4;
    }
    COW_AT(10062250)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return self - 0x38u;
L_10062258: ;
    COW_AT(10062258)
    g->eax = in_eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t5 = cow_thiscall(g, COW_IMG(0x10062140u), self - 0x34u, 0);
    t6 = g->ecx;
    t7 = g->edx;
    if (!(arg1 & 1u))
    {
        edx = t7;
    }
    else
    {
        eax = t5;
        ecx = t6;
        edx = t7;
    COW_AT(10062264)
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x10028710u), 1, self - 0x34u);
        t8 = g->edx;
        edx = t8;
    }
    COW_AT(1006226d)
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
int cow_entry_fix_10062fc0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10062210u:
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
    case 0x1006221du:
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
    case 0x10062230u:
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
    case 0x10062234u:
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
    case 0x10062241u:
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
    case 0x10062242u:
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
    case 0x10062247u:
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
    case 0x10062250u:
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
    case 0x10062258u:
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
    case 0x10062264u:
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
    case 0x1006226du:
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
void cow_adapter_10062fc0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10062fc0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
