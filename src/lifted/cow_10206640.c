/* f_0x10206640 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10206640(Guest* g)
{
    uint32_t eax;
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
    cow_frame(g, sp0, 192u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10206676u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x94u); in_esi = rd32(sp0 - 0x90u); in_ebx = rd32(sp0 - 0x8cu); g->ebx = rd32(sp0 - 0x8cu); g->edi = rd32(sp0 - 0x94u); g->esi = rd32(sp0 - 0x90u); goto E_10206676;
    case 0x1020667bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x94u); in_esi = rd32(sp0 - 0x90u); in_ebx = rd32(sp0 - 0x8cu); g->ebx = rd32(sp0 - 0x8cu); g->edi = rd32(sp0 - 0x94u); g->esi = rd32(sp0 - 0x90u); goto E_1020667b;
    case 0x10206682u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x94u); in_esi = rd32(sp0 - 0x90u); in_ebx = rd32(sp0 - 0x8cu); g->ebx = rd32(sp0 - 0x8cu); g->edi = rd32(sp0 - 0x94u); g->esi = rd32(sp0 - 0x90u); goto E_10206682;
    case 0x102066d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x94u); in_esi = rd32(sp0 - 0x90u); in_ebx = rd32(sp0 - 0x8cu); g->ebx = rd32(sp0 - 0x8cu); g->edi = rd32(sp0 - 0x94u); g->esi = rd32(sp0 - 0x90u); goto E_102066d6;
    case 0x102066dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x94u); in_esi = rd32(sp0 - 0x90u); in_ebx = rd32(sp0 - 0x8cu); g->ebx = rd32(sp0 - 0x8cu); g->edi = rd32(sp0 - 0x94u); g->esi = rd32(sp0 - 0x90u); goto E_102066db;
    case 0x102066e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x94u); in_esi = rd32(sp0 - 0x90u); in_ebx = rd32(sp0 - 0x8cu); g->ebx = rd32(sp0 - 0x8cu); g->edi = rd32(sp0 - 0x94u); g->esi = rd32(sp0 - 0x90u); goto E_102066e0;
    case 0x102066e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x94u); in_esi = rd32(sp0 - 0x90u); in_ebx = rd32(sp0 - 0x8cu); g->ebx = rd32(sp0 - 0x8cu); g->edi = rd32(sp0 - 0x94u); g->esi = rd32(sp0 - 0x90u); goto E_102066e9;
    case 0x102066f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x94u); in_esi = rd32(sp0 - 0x90u); in_ebx = rd32(sp0 - 0x8cu); g->ebx = rd32(sp0 - 0x8cu); g->edi = rd32(sp0 - 0x94u); g->esi = rd32(sp0 - 0x90u); goto E_102066f9;
    case 0x102066feu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x94u); in_esi = rd32(sp0 - 0x90u); in_ebx = rd32(sp0 - 0x8cu); g->ebx = rd32(sp0 - 0x8cu); g->edi = rd32(sp0 - 0x94u); g->esi = rd32(sp0 - 0x90u); goto E_102066fe;
    case 0x10206703u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x94u); in_esi = rd32(sp0 - 0x90u); in_ebx = rd32(sp0 - 0x8cu); g->ebx = rd32(sp0 - 0x8cu); g->edi = rd32(sp0 - 0x94u); g->esi = rd32(sp0 - 0x90u); goto E_10206703;
    case 0x10206708u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x94u); in_esi = rd32(sp0 - 0x90u); in_ebx = rd32(sp0 - 0x8cu); g->ebx = rd32(sp0 - 0x8cu); g->edi = rd32(sp0 - 0x94u); g->esi = rd32(sp0 - 0x90u); goto E_10206708;
    case 0x10206712u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x94u); in_esi = rd32(sp0 - 0x90u); in_ebx = rd32(sp0 - 0x8cu); g->ebx = rd32(sp0 - 0x8cu); g->edi = rd32(sp0 - 0x94u); g->esi = rd32(sp0 - 0x90u); goto E_10206712;
    default: break;
    }
#endif

    COW_AT(10206640)
    wr32(sp0 - 0x8cu, in_ebx);
    wr32(sp0 - 0x90u, in_esi);
    wr32(sp0 - 0x94u, in_edi);
    wr32(sp0 - 0x98u, sp0 - 0x88u);
    t1 = rd32(self + 8u);
    wr16(sp0 - 0x88u, 0u);
    wr16(sp0 - 0x86u, 0u);
    wr16(sp0 - 0x84u, 0u);
    wr16(sp0 - 0x82u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x94u;
    cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0x88u, t1, g->edx, 0, 1, sp0 - 0x88u);
    t2 = g->edx;
    if ((int32_t)rd32(self + 0x14u) < 1)
    {
        eax = rd32(self + 0x14u);
        edx = t2;
        goto L_102066d6;
    }
    eax = rd32(self + 0x14u);
    edx = t2;
    COW_AT(10206676)
    if ((int32_t)eax >= 3) goto L_102066db;
    COW_AT(1020667b)
    ecx = rd32(COW_IMG(0x103854c4u) + eax * 4u);
L_10206682: ;
    COW_AT(10206682)
    wr32(sp0 - 0x98u, 0u);
    wr32(sp0 - 0x9cu, ecx);
    wr32(sp0 - 0xa0u, 0xbu);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x98u;
    t3 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xbu, ecx);
    t4 = g->ecx;
    wr32(sp0 - 0x9cu, t3);
    wr32(sp0 - 0xa0u, sp0 - 0x80u);
    g->ebx = self;
    g->ecx = t4;
    g->edx = sp0 - 0x80u;
    g->esp = sp0 - 0x8cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x80u, t3, 0u, in_edi, in_esi);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0xa4u, 0u);
    wr32(sp0 - 0xa8u, sp0 - 0x80u);
    g->esp = sp0 - 0xa0u;
    t7 = cow_call_regs(g, COW_IMG(0x1011d980u), sp0 - 0x80u, g->ecx, g->edx, 1, 2, sp0 - 0x80u, 0u);
    wr32(sp0 - 0xacu, 0x80808080u);
    t8 = rd16(sp0 - 0x88u);
    t9 = rd16(sp0 - 0x86u);
    wr16(sp0 - 0x88u, (uint16_t)(t8 + 4u));
    wr32(sp0 - 0xb0u, 0u);
    wr32(sp0 - 0xb4u, sp0 - 0x80u);
    t10 = (uint32_t)(int16_t)t9 + 4u;
    wr32(sp0 - 0xb8u, t10);
    t11 = (uint32_t)(int16_t)(t8 + 4u);
    wr32(sp0 - 0xbcu, t11);
    g->esp = sp0 - 0x90u;
    cow_cdecl(g, COW_IMG(0x10129f00u), 11, t11, t10, sp0 - 0x80u, 0u, 0x80808080u, sp0 - 0x80u, 0u, sp0 - 0x80u, rd32(sp0 - 0x9cu), 0u, in_edi);
    esi = t7;
L_10206712: ;
    COW_AT(10206712)
    t13 = rd32(sp0 - 0x86u) + 4u;
    wr32(sp0 - 0x98u, t13);
    t14 = esi + rd32(sp0 - 0x88u);
    wr32(sp0 - 0x9cu, t14);
    g->edx = t13;
    t15 = rd32(sp0 - 0x88u);
    g->esp = sp0 - 0x94u;
    t16 = cow_call_regs(g, COW_IMG(0x10206740u), t15, self, g->edx, 0, 2, t14, t13);
    t17 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t17;
    return t16;
L_102066d6: ;
    COW_AT(102066d6)
    if ((int32_t)eax < 3) goto L_102066e9;
L_102066db: ;
    COW_AT(102066db)
    if ((int32_t)eax >= 6) goto L_102066e9;
    COW_AT(102066e0)
    ecx = rd32(COW_IMG(0x103854c4u) + eax * 4u);
    goto L_10206682;
L_102066e9: ;
    COW_AT(102066e9)
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    COW_AT(102066f9)
        if (eax == 2u) goto L_10206703;
    COW_AT(102066fe)
        if (eax != 3u) goto L_10206708;
L_10206703: ;
    COW_AT(10206703)
        eax = 1u;
    }
L_10206708: ;
    COW_AT(10206708)
    t12 = rd8(COW_IMG(0x103854c4u) + eax);
    esi = t12;
    goto L_10206712;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10206640(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10206676u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x94u);
        in_esi = rd32(sp0 - 0x90u);
        in_ebx = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x94u;
        g->edi = 0u;
        wr32(sp0 - 0x98u, sp0 - 0x88u);
        (void)sp0;
        return 1;
    }
    case 0x1020667bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x94u);
        in_esi = rd32(sp0 - 0x90u);
        in_ebx = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x94u;
        g->edi = 0u;
        wr32(sp0 - 0x98u, sp0 - 0x88u);
        (void)sp0;
        return 1;
    }
    case 0x10206682u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x94u);
        in_esi = rd32(sp0 - 0x90u);
        in_ebx = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x94u;
        g->edi = 0u;
        wr32(sp0 - 0x98u, sp0 - 0x88u);
        (void)sp0;
        return 1;
    }
    case 0x102066d6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x94u);
        in_esi = rd32(sp0 - 0x90u);
        in_ebx = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x94u;
        g->edi = 0u;
        wr32(sp0 - 0x98u, sp0 - 0x88u);
        (void)sp0;
        return 1;
    }
    case 0x102066dbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x94u);
        in_esi = rd32(sp0 - 0x90u);
        in_ebx = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x94u;
        g->edi = 0u;
        wr32(sp0 - 0x98u, sp0 - 0x88u);
        (void)sp0;
        return 1;
    }
    case 0x102066e0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x94u);
        in_esi = rd32(sp0 - 0x90u);
        in_ebx = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x94u;
        g->edi = 0u;
        wr32(sp0 - 0x98u, sp0 - 0x88u);
        (void)sp0;
        return 1;
    }
    case 0x102066e9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x94u);
        in_esi = rd32(sp0 - 0x90u);
        in_ebx = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x94u;
        wr32(sp0 - 0x98u, sp0 - 0x88u);
        (void)sp0;
        return 1;
    }
    case 0x102066f9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x94u);
        in_esi = rd32(sp0 - 0x90u);
        in_ebx = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x94u;
        wr32(sp0 - 0x98u, sp0 - 0x88u);
        (void)sp0;
        return 1;
    }
    case 0x102066feu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x94u);
        in_esi = rd32(sp0 - 0x90u);
        in_ebx = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x94u;
        wr32(sp0 - 0x98u, sp0 - 0x88u);
        (void)sp0;
        return 1;
    }
    case 0x10206703u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x94u);
        in_esi = rd32(sp0 - 0x90u);
        in_ebx = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x94u;
        wr32(sp0 - 0x98u, sp0 - 0x88u);
        (void)sp0;
        return 1;
    }
    case 0x10206708u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x94u);
        in_esi = rd32(sp0 - 0x90u);
        in_ebx = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x94u;
        wr32(sp0 - 0x98u, sp0 - 0x88u);
        (void)sp0;
        return 1;
    }
    case 0x10206712u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x94u);
        in_esi = rd32(sp0 - 0x90u);
        in_ebx = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x94u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10206640(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10206640(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
