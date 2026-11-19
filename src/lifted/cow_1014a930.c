/* f_0x1014a930 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1014a930(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1014a948u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1014a948;
    case 0x1014a95bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1014a95b;
    case 0x1014a975u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1014a975;
    case 0x1014a983u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1014a983;
    case 0x1014a991u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1014a991;
    case 0x1014a9a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1014a9a1;
    case 0x1014a9a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1014a9a7;
    case 0x1014a9acu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1014a9ac;
    case 0x1014a9b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1014a9b2;
    case 0x1014a9b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1014a9b8;
    case 0x1014a9bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1014a9bc;
    case 0x1014a9c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1014a9c0;
    default: break;
    }
#endif

    COW_AT(1014a930)
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(rd32(self) + 0x50u), self, 1, arg1);
    t1 = g->edx;
    t2 = rd32(self + 8u);
    wr8(self + 0x46u, (uint8_t)arg1);
    if (t2 == 0u)
    {
        eax = t2;
        edx = t1;
    }
    else
    {
        eax = t2;
        edx = t1;
    COW_AT(1014a948)
        g->eax = eax;
        g->edx = edx;
        t3 = rd16(self + 0x20u);
        g->esp = sp0 - 0xcu;
        t4 = cow_thiscall(g, COW_IMG(0x101f7100u), self, 0);
        t5 = g->edx;
        if ((int32_t)t4 < (int16_t)t3)
        {
            edx = t5;
        }
        else
        {
            eax = t4;
            edx = t5;
            edi = (in_edi & 0xffff0000u) | t3;
    COW_AT(1014a95b)
            t6 = (edi & 0xffff0000u) | (uint16_t)((uint16_t)edi - rd16(self + 0x1eu));
            g->ebx = arg1;
            g->esp = sp0 - 0xcu;
            t7 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, rd32(self + 8u), g->edx, 0, 2, t6, 0u);
            t8 = rd32(self + 8u);
            wr16(self + 0x24u, rd16(t8 + 0x4cu));
            edx = t8;
        }
    COW_AT(1014a975)
        if (rd32(rd32(self + 8u) + 0x88u) == 0u)
        {
            eax = rd32(rd32(self + 8u) + 0x88u);
        }
        else
        {
            eax = rd32(rd32(self + 8u) + 0x88u);
    COW_AT(1014a983)
            t9 = (uint32_t)(int16_t)rd16(self + 0x20u);
            wr32(eax + 0x10u, t9);
            t10 = (uint32_t)(int16_t)rd16(self + 0x1eu);
            wr32(eax + 0x14u, t10);
            edx = t9;
        }
    }
    COW_AT(1014a991)
    if (rd16(rd32(COW_IMG(0x104e1d4cu)) + 0x52u) == 0xbu)
    {
        eax = (eax & 0xffff0000u) | rd16(rd32(COW_IMG(0x104e1d4cu)) + 0x52u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(rd32(COW_IMG(0x104e1d4cu)) + 0x52u);
        ecx = rd32(COW_IMG(0x104e1d4cu));
    COW_AT(1014a9a1)
        if ((uint16_t)eax != 0xcu)
        {
    COW_AT(1014a9a7)
            if ((int16_t)eax < 0) goto L_1014a9b2;
    COW_AT(1014a9ac)
            if ((int16_t)eax <= (int16_t)rd16(self + 0x20u)) goto L_1014a9c0;
L_1014a9b2: ;
    COW_AT(1014a9b2)
            if (rd8(ecx + 0x4du) == 2u)
            {
    COW_AT(1014a9b8)
                if ((uint8_t)arg1 != 0u)
                {
    COW_AT(1014a9bc)
                    wr8(ecx + 0x4cu, 0u);
                }
            }
        }
    }
L_1014a9c0: ;
    COW_AT(1014a9c0)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1014a930(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1014a948u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1014a95bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1014a975u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1014a983u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1014a991u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1014a9a1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1014a9a7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1014a9acu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1014a9b2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1014a9b8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1014a9bcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1014a9c0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1014a930(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1014a930(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
