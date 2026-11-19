/* f_0x1007d5b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1007d5b0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_8;
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
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1007d5b9u: self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1007d5b9;
    case 0x1007d5beu: self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1007d5be;
    case 0x1007d5cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_1007d5ca;
    case 0x1007d5d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_1007d5d4;
    case 0x1007d5d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_1007d5d8;
    case 0x1007d5e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_1007d5e4;
    case 0x1007d5eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_1007d5ee;
    case 0x1007d5f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_1007d5f2;
    case 0x1007d5f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_1007d5f7;
    case 0x1007d5fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; edi = g->edi; cf = g->cf; loc_8 = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1007d5fd;
    case 0x1007d603u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; edi = g->edi; cf = g->cf; loc_8 = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1007d603;
    case 0x1007d60du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; edi = g->edi; cf = g->cf; loc_8 = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1007d60d;
    case 0x1007d615u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; edi = g->edi; cf = g->cf; loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1007d615;
    case 0x1007d621u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; edi = g->edi; cf = g->cf; loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1007d621;
    case 0x1007d633u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; edi = g->edi; cf = g->cf; loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1007d633;
    default: break;
    }
#endif

    COW_AT(1007d5b0)
    if (arg2 == 0u)
    {
        eax = arg2;
        edx = in_edx;
    }
    else
    {
    COW_AT(1007d5b9)
        if (rd32(arg2) != 3u)
        {
            eax = arg2;
            edx = in_edx;
        }
        else
        {
    COW_AT(1007d5be)
            eax = arg1;
            ecx = self;
            edx = in_edx;
            ebx = in_ebx;
            esi = rd32(arg2 + 8u) + 4u;
            edi = rd32(arg2 + 8u);
L_1007d5ca: ;
    COW_AT(1007d5ca)
            if (rd8(eax) != rd8(esi))
            {
                ecx = (ecx & 0xffffff00u) | rd8(eax);
                edx = (edx & 0xffffff00u) | rd8(eax);
                cf = rd8(eax) < rd8(esi);
                goto L_1007d5f2;
            }
            ecx = (ecx & 0xffffff00u) | rd8(eax);
            edx = (edx & 0xffffff00u) | rd8(eax);
            ebx = (ebx & 0xffffff00u) | rd8(esi);
    COW_AT(1007d5d4)
            if ((uint8_t)ecx == 0u) goto L_1007d5ee;
    COW_AT(1007d5d8)
            if (rd8(eax + 1u) != rd8(esi + 1u))
            {
                ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
                edx = (edx & 0xffffff00u) | rd8(eax + 1u);
                cf = rd8(eax + 1u) < rd8(esi + 1u);
                goto L_1007d5f2;
            }
            ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
            edx = (edx & 0xffffff00u) | rd8(eax + 1u);
            ebx = (ebx & 0xffffff00u) | rd8(esi + 1u);
    COW_AT(1007d5e4)
            if ((uint8_t)ecx != 0u)
            {
                eax = eax + 2u;
                esi = esi + 2u;
                goto L_1007d5ca;
            }
L_1007d5ee: ;
    COW_AT(1007d5ee)
            eax = 0u;
L_1007d5f7: ;
    COW_AT(1007d5f7)
            if (eax == 0u)
            {
    COW_AT(1007d5fd)
                if ((rd8(edi + 0x30u) & 8u) == 0u)
                {
    COW_AT(1007d60d)
                    t2 = rd32(edi + 0x18u);
                    ecx = t2;
                    loc_8 = 0u;
                    loc_10 = t2;
                }
                else
                {
    COW_AT(1007d603)
                    t1 = rd32(edi + 0x18u);
                    eax = t1;
                    loc_8 = 5u;
                    loc_10 = t1;
                }
    COW_AT(1007d615)
                g->edi = edi;
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 4u;
                t3 = cow_cdecl(g, COW_IMG(0x100e8fd0u), 3, loc_10, 0u, loc_8);
                t4 = g->ecx;
                t5 = g->edx;
                if ((uint8_t)t3 != 0u)
                {
                    eax = t3;
                    edx = t5;
                }
                else
                {
                    eax = t3;
                    ecx = t4;
                    edx = t5;
    COW_AT(1007d621)
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 4u;
                    t6 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x78u);
                    t7 = g->ecx;
                    t8 = g->edx;
                    g->edx = t8;
                    g->esp = sp0 - 8u;
                    t9 = cow_cdecl(g, COW_IMG(0x10077e30u), 2, t6, 9u);
                    t10 = g->edx;
                    eax = t9;
                    edx = t10;
                }
            }
        }
    }
    COW_AT(1007d633)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_1007d5f2: ;
    COW_AT(1007d5f2)
    eax = -cf + 1u - cf;
    goto L_1007d5f7;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1007d5b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1007d5b9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1007d5beu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1007d5cau:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1007d5d4u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1007d5d8u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1007d5e4u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1007d5eeu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1007d5f2u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1007d5f7u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1007d5fdu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_8 = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1007d603u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_8 = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1007d60du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_8 = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1007d615u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0xcu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1007d621u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1007d633u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1007d5b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1007d5b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
