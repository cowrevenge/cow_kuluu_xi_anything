/* f_0x101dbba0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101dbba0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101dbbafu: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_101dbbaf;
    case 0x101dbbbfu: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_101dbbbf;
    case 0x101dbbc5u: eax = g->eax; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_101dbbc5;
    case 0x101dbbd0u: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_101dbbd0;
    case 0x101dbbd5u: eax = g->eax; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_101dbbd5;
    case 0x101dbbe0u: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_101dbbe0;
    case 0x101dbbe4u: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_101dbbe4;
    case 0x101dbbe8u: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_101dbbe8;
    case 0x101dbbedu: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_101dbbed;
    case 0x101dbc00u: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_101dbc00;
    case 0x101dbc07u: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_101dbc07;
    case 0x101dbc12u: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_101dbc12;
    default: break;
    }
#endif

    COW_AT(101dbba0)
    edx = in_edx;
    esi = 0u;
L_101dbbaf: ;
    COW_AT(101dbbaf)
    g->eax = rd32(self);
    g->edx = edx;
    t1 = rd32(self);
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, rd32(t1 + 0x54u), self, 0);
    t3 = g->edx;
    if (rd32(COW_IMG(0x1037efd8u) + esi * 4u) == t2)
    {
        eax = t2;
        edx = t3;
        goto L_101dbbd0;
    }
    edx = t3;
    COW_AT(101dbbbf)
    if ((int32_t)(esi + 1u) < 16)
    {
        esi = esi + 1u;
        goto L_101dbbaf;
    }
    COW_AT(101dbbc5)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 0x12u;
L_101dbbd0: ;
    COW_AT(101dbbd0)
    if (esi != 0xffffffffu) goto L_101dbbe0;
    COW_AT(101dbbd5)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 0x12u;
L_101dbbe0: ;
    COW_AT(101dbbe0)
    esi = esi - 1u;
    edi = 0u;
L_101dbbe4: ;
    COW_AT(101dbbe4)
    if ((int32_t)esi < 0)
    {
    COW_AT(101dbbe8)
        esi = 0xfu;
    }
    COW_AT(101dbbed)
    t4 = rd32(COW_IMG(0x1037efd8u) + esi * 4u);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t5 = cow_fastcall(g, COW_IMG(0x101dbc20u), self, edx, 1, t4);
    t6 = g->edx;
    if ((uint8_t)t5 != 0u) goto L_101dbc12;
    eax = t5;
    edx = t6;
    COW_AT(101dbc00)
    if ((int32_t)(edi + 1u) < 16)
    {
        esi = esi - 1u;
        edi = edi + 1u;
        goto L_101dbbe4;
    }
    COW_AT(101dbc07)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 0x12u;
L_101dbc12: ;
    COW_AT(101dbc12)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return rd32(COW_IMG(0x1037efd8u) + esi * 4u);
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101dbba0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101dbbafu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 4u, 0x12u);
        (void)sp0;
        return 1;
    }
    case 0x101dbbbfu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 4u, 0x12u);
        (void)sp0;
        return 1;
    }
    case 0x101dbbc5u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 4u, 0x12u);
        (void)sp0;
        return 1;
    }
    case 0x101dbbd0u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 4u, 0x12u);
        (void)sp0;
        return 1;
    }
    case 0x101dbbd5u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 4u, 0x12u);
        (void)sp0;
        return 1;
    }
    case 0x101dbbe0u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 4u, 0x12u);
        (void)sp0;
        return 1;
    }
    case 0x101dbbe4u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 4u, 0x12u);
        (void)sp0;
        return 1;
    }
    case 0x101dbbe8u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 4u, 0x12u);
        (void)sp0;
        return 1;
    }
    case 0x101dbbedu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 4u, 0x12u);
        (void)sp0;
        return 1;
    }
    case 0x101dbc00u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 4u, 0x12u);
        (void)sp0;
        return 1;
    }
    case 0x101dbc07u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 4u, 0x12u);
        (void)sp0;
        return 1;
    }
    case 0x101dbc12u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 4u, 0x12u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101dbba0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101dbba0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
