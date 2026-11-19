/* f_0x100e9100 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100e9100(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100e910au: eax = g->eax; in_edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_100e910a;
    case 0x100e911eu: eax = g->eax; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_100e911e;
    case 0x100e9122u: eax = g->eax; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_100e9122;
    case 0x100e912eu: eax = g->eax; in_ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_100e912e;
    case 0x100e9132u: eax = g->eax; in_ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_100e9132;
    case 0x100e9139u: eax = g->eax; in_ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_100e9139;
    case 0x100e9184u: eax = g->eax; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_100e9184;
    case 0x100e9188u: eax = g->eax; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_100e9188;
    case 0x100e9190u: eax = g->eax; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_100e9190;
    case 0x100e91cdu: edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_100e91cd;
    case 0x100e91d1u: in_ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_100e91d1;
    case 0x100e91d7u: edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_100e91d7;
    default: break;
    }
#endif

    COW_AT(100e9100)
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        edx = in_edx;
        goto L_100e911e;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    COW_AT(100e910a)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0x71u, 0u, 0u);
    t2 = g->edx;
    if (t1 != 0u)
    {
        edi = t1;
        goto L_100e9122;
    }
    eax = t1;
    edx = t2;
L_100e911e: ;
    COW_AT(100e911e)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax & 0xffffff00u;
L_100e9122: ;
    COW_AT(100e9122)
    wr8(edi + 0xau, (uint8_t)arg1);
    if ((uint8_t)arg1 != 5u)
    {
    COW_AT(100e9132)
        eax = (uint8_t)arg1;
    }
    else
    {
    COW_AT(100e912e)
        eax = 0u;
    }
    COW_AT(100e9139)
    wr16(edi + 8u, rd16((uint8_t)arg2 * 0x70u + (uint8_t)eax * 0x8c4u + rd32(COW_IMG(0x104dfd98u)) + 0x57f0u));
    if ((uint8_t)arg1 != 5u)
    {
    COW_AT(100e9188)
        esi = (uint8_t)arg1;
    }
    else
    {
    COW_AT(100e9184)
        esi = 0u;
    }
    COW_AT(100e9190)
    t3 = rd32((uint8_t)arg2 * 0x70u + (uint8_t)esi * 0x8c4u + rd32(COW_IMG(0x104dfd98u)) + 0x57ecu);
    wr32(edi + 4u, t3);
    if ((uint8_t)arg1 != 5u)
    {
    COW_AT(100e91d1)
        edx = (uint8_t)arg1;
    }
    else
    {
    COW_AT(100e91cd)
        edx = 0u;
    }
    COW_AT(100e91d7)
    t4 = (uint8_t)arg2 * 0x70u + (uint8_t)edx * 0x8c4u + rd32(COW_IMG(0x104dfd98u)) + 0x57dau;
    g->ecx = t4;
    g->edx = edi + 0xcu;
    t5 = rd32(COW_IMG(0x104dfd98u));
    g->esp = sp0 - 4u;
    t6 = cow_call_regs(g, COW_IMG(0x10312090u), t5, g->ecx, g->edx, 1, 3, edi + 0xcu, t4, 0xfu);
    t7 = g->ecx;
    t8 = g->edx;
    g->edx = t8;
    g->esp = sp0 - 0x10u;
    t9 = cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, edi, 0x1cu, 0u);
    t10 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t10;
    return (t9 & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100e9100(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100e910au:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100e911eu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100e9122u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100e912eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        in_ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e9132u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        in_ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e9139u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        in_ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e9184u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ecx = (uint8_t)arg2;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e9188u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ecx = (uint8_t)arg2;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e9190u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ecx = (uint8_t)arg2;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e91cdu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint8_t)arg2 * 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x100e91d1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        in_ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint8_t)arg2 * 0x70u;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e91d7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint8_t)arg2 * 0x70u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100e9100(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100e9100(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
