/* f_0x101a3ec0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101a3ec0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
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
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 40u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101a3ed4u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101a3ed4;
    case 0x101a3f35u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_101a3f35;
    case 0x101a3f38u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_101a3f38;
    case 0x101a3f3au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_101a3f3a;
    case 0x101a3f42u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_101a3f42;
    case 0x101a3f46u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_101a3f46;
    case 0x101a3f4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_101a3f4c;
    case 0x101a3f6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_101a3f6c;
    case 0x101a3f75u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_101a3f75;
    case 0x101a3f7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_101a3f7c;
    case 0x101a3fa4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_101a3fa4;
    default: break;
    }
#endif

    COW_AT(101a3ec0)
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        edx = in_edx;
        ebx = in_ebx;
        ebp = in_ebp;
        loc_10 = in_esi;
        loc_14 = in_edi;
    }
    else
    {
        eax = rd32(self + 8u);
    COW_AT(101a3ed4)
        wr8(eax + 0x38u, rd8(eax + 0x38u) | 0x81u);
        wr32(sp0 - 0x18u, in_ebx);
        wr32(sp0 - 0x1cu, in_ebp);
        g->edx = in_edx;
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, COW_IMG(0x1011a400u), rd32(self + 8u), 0);
        t1 = g->edx;
        wr32(sp0 - 0x20u, sp0 - 8u);
        t2 = rd32(self + 8u);
        wr16(sp0 - 8u, 0u);
        wr16(sp0 - 6u, 0u);
        wr16(sp0 - 4u, 0u);
        wr16(sp0 - 2u, 0u);
        g->eax = sp0 - 8u;
        g->edx = t1;
        t3 = cow_thiscall(g, COW_IMG(0x1011a710u), t2, 1, sp0 - 8u);
        t4 = g->edx;
        g->edx = t4;
        t5 = rd32(self + 8u);
        t6 = cow_thiscall(g, COW_IMG(0x1011ba40u), rd32(COW_IMG(0x105781ecu)), 0);
        t7 = g->edx;
        t8 = rd32(COW_IMG(0x10578184u));
        wr8(sp0 - 9u, (uint8_t)t6);
        t9 = cow_thiscall(g, COW_IMG(0x1012c900u), t8, 0);
        if ((uint32_t)(int8_t)rd8(COW_IMG(0x106218eeu)) == 0u)
        {
            eax = t9;
            ecx = (uint32_t)(int8_t)rd8(COW_IMG(0x106218eeu));
            edx = (uint32_t)(int16_t)rd16(sp0 - 8u);
            ebx = (uint32_t)(int16_t)rd16(sp0 - 6u);
            ebp = t5;
            goto L_101a3f3a;
        }
        eax = t9;
        ecx = (uint32_t)(int8_t)rd8(COW_IMG(0x106218eeu));
        edx = (uint32_t)(int16_t)rd16(sp0 - 8u);
        ebx = (uint32_t)(int16_t)rd16(sp0 - 6u);
        ebp = t5;
    COW_AT(101a3f35)
        if (ecx == 1u) goto L_101a3f46;
    COW_AT(101a3f38)
L_101a3f4c: ;
    COW_AT(101a3f4c)
        wr32(sp0 - 0x20u, ebx);
        wr32(sp0 - 0x24u, edx);
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        cow_call_regs(g, COW_IMG(0x10119110u), eax, ebp, g->edx, 0, 2, edx, ebx);
        t10 = g->edx;
        t11 = rd32(self + 8u);
        wr32(sp0 - 0x20u, t11);
        g->eax = t11;
        g->edx = t10;
        t12 = rd8(t11 + 0x4cu);
        t13 = cow_thiscall(g, COW_IMG(0x1015ed80u), COW_IMG(0x10621838u), 1, t11);
        t14 = g->edx;
        if ((uint8_t)t13 == 0u)
        {
            ebx = (ebx & 0xffffff00u) | (uint8_t)(t12 - 1u);
    COW_AT(101a3f75)
            t15 = rd32(self + 8u);
            wr8(t15 + 0x63u, 0u);
            edx = t15;
        }
        else
        {
            edx = t14;
            ebx = (ebx & 0xffffff00u) | (uint8_t)(t12 - 1u);
    COW_AT(101a3f6c)
            wr8(rd32(self + 8u) + 0x63u, 1u);
        }
    COW_AT(101a3f7c)
        wr32(sp0 - 0x20u, 2u);
        t16 = (uint32_t)(int8_t)ebx + 0xau;
        wr32(sp0 - 0x24u, t16);
        g->eax = t16;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t17 = cow_thiscall(g, COW_IMG(0x101a1c30u), rd32(self + 0x20u), 1, t16);
        t18 = g->edx;
        wr32(sp0 - 0x24u, t17);
        g->edx = t18;
        g->esp = sp0 - 0x1cu;
        t19 = cow_thiscall(g, COW_IMG(0x10150cd0u), rd32(COW_IMG(0x1057847cu)), 2, t17, 2u);
        t20 = g->edx;
        wr32(sp0 - 0x20u, 1u);
        g->edx = t20;
        t21 = cow_call_regs(g, COW_IMG(0x101a43b0u), t19, self, g->edx, 0, 1, 1u);
        t22 = g->edx;
        eax = t21;
        edx = t22;
        ebx = rd32(sp0 - 0x18u);
        ebp = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
    }
    COW_AT(101a3fa4)
    g->ebx = ebx;
    g->esi = loc_10;
    g->edi = loc_14;
    g->ebp = ebp;
    g->edx = edx;
    return eax;
L_101a3f3a: ;
    COW_AT(101a3f3a)
    if (rd8(sp0 - 9u) != 0u) goto L_101a3f46;
    COW_AT(101a3f42)
    if ((uint8_t)eax == 0u) goto L_101a3f4c;
L_101a3f46: ;
    COW_AT(101a3f46)
    edx = edx + 0x82u;
    goto L_101a3f4c;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101a3ec0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101a3ed4u:
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
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101a3f35u:
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101a3f38u:
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101a3f3au:
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101a3f42u:
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101a3f46u:
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101a3f4cu:
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101a3f6cu:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101a3f75u:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101a3f7cu:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101a3fa4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101a3ec0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101a3ec0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
