/* f_0x100574a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100574a0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
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
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100574c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100574c1;
    case 0x100574d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100574d2;
    case 0x100574ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100574dd;
    case 0x100574eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100574ee;
    case 0x100574ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100574ff;
    case 0x10057504u: eax = g->eax; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10057504;
    case 0x10057509u: eax = g->eax; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10057509;
    case 0x10057511u: eax = g->eax; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10057511;
    case 0x10057517u: eax = g->eax; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10057517;
    case 0x1005751eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1005751e;
    case 0x10057528u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10057528;
    case 0x1005752du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1005752d;
    case 0x10057537u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10057537;
    case 0x1005753cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1005753c;
    case 0x10057553u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10057553;
    case 0x10057560u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10057560;
    case 0x10057572u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10057572;
    case 0x1005757fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1005757f;
    default: break;
    }
#endif

    COW_AT(100574a0)
    wr32(self, COW_IMG(0x1032b860u));
    wr32(self + 0x34u, COW_IMG(0x1032b844u));
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        eax = t1;
        edx = t2;
    COW_AT(100574c1)
        g->eax = eax;
        g->esp = sp0 - 0x10u;
        t3 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
        g->edx = rd32(t3);
        t4 = rd32(t3);
        t5 = cow_thiscall(g, rd32(t4 + 0x16cu), t3, 0);
        t6 = g->edx;
        eax = t5;
        edx = t6;
    }
    COW_AT(100574d2)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t7 = cow_thiscall(g, COW_IMG(0x1003b700u), self + 0x34u, 0);
    t8 = g->edx;
    if (t7 == 0u)
    {
        edx = t8;
    }
    else
    {
        eax = t7;
        edx = t8;
    COW_AT(100574dd)
        g->eax = eax;
        g->esp = sp0 - 0x10u;
        t9 = cow_thiscall(g, COW_IMG(0x1003b700u), self + 0x34u, 0);
        g->edx = rd32(t9);
        t10 = rd32(t9);
        cow_thiscall(g, rd32(t10 + 0x16cu), t9, 0);
        t11 = g->edx;
        edx = t11;
    }
    COW_AT(100574ee)
    if (rd32(rd32(COW_IMG(0x1047d140u)) + 0xd50u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x1047d140u)) + 0xd50u);
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x1047d140u)) + 0xd50u);
    COW_AT(100574ff)
L_10057504: ;
    COW_AT(10057504)
        if (rd32(eax + 0x1cu) == 0x4d730000u)
        {
    COW_AT(10057509)
            if (rd32(eax + 0x84u) == self)
            {
    COW_AT(10057511)
                wr32(eax + 0x84u, 0u);
            }
        }
    COW_AT(10057517)
        if (rd32(eax + 0xcu) != 0u)
        {
            eax = rd32(eax + 0xcu);
            goto L_10057504;
        }
        eax = rd32(eax + 0xcu);
    }
    COW_AT(1005751e)
    if (rd32(self + 0x84u) != 0u)
    {
        ecx = rd32(self + 0x84u);
    COW_AT(10057528)
        g->ebp = self + 0x34u;
        g->esp = sp0 - 0x10u;
        t12 = cow_call_regs(g, COW_IMG(0x10074a50u), eax, ecx, edx, 1, 0);
        t13 = g->edx;
        eax = t12;
        edx = t13;
    }
    COW_AT(1005752d)
    if (rd32(self + 0x90u) != 0u)
    {
        ecx = rd32(self + 0x90u);
    COW_AT(10057537)
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t14 = cow_call_regs(g, COW_IMG(0x1018cea0u), eax, ecx, g->edx, 1, 0);
        t15 = g->edx;
        eax = t14;
        edx = t15;
    }
    COW_AT(1005753c)
    g->edx = edx;
    t16 = rd32(rd32(self + 0x80u));
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10071ec0u), t16, 0);
    t17 = g->ecx;
    t18 = g->edx;
    if (rd32(self + 0xacu) == 0u)
    {
        eax = rd32(self + 0xacu);
        edx = t18;
    }
    else
    {
        eax = rd32(self + 0xacu);
        ecx = t17;
    COW_AT(10057553)
        t19 = rd32(self + 0xb0u);
        g->eax = eax;
        g->edx = t19;
        g->esp = sp0 - 0x10u;
        t20 = cow_thiscall_cdecl(g, eax, ecx, 2, self, t19);
        t21 = g->edx;
        eax = t20;
        edx = t21;
    }
    COW_AT(10057560)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t22 = cow_thiscall(g, COW_IMG(0x1003b690u), self + 0x34u, 0);
    t23 = g->edx;
    eax = t22;
    edx = t23;
    ebx = 0x10u;
    edi = self + 0x140u;
L_10057572: ;
    COW_AT(10057572)
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t24 = cow_fastcall(g, COW_IMG(0x100683d0u), edi - 8u, edx, 0);
    t25 = g->edx;
    if (ebx != 1u)
    {
        eax = t24;
        edx = t25;
        ebx = ebx - 1u;
        edi = edi - 8u;
        goto L_10057572;
    }
    eax = t24;
    edx = t25;
    COW_AT(1005757f)
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t26 = cow_fastcall(g, COW_IMG(0x10055650u), self + 0xb4u, edx, 0);
    t27 = g->edx;
    g->edx = t27;
    t28 = cow_thiscall(g, COW_IMG(0x1003b5c0u), self + 0x34u, 0);
    t29 = g->edx;
    g->esp = sp0;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t29;
    cow_tailcall(g, COW_IMG(0x100747c0u), t28, self, t29);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100574a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100574c1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        g->ebp = self + 0x34u;
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x100574d2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        g->ebp = self + 0x34u;
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x100574ddu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        g->ebp = self + 0x34u;
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x100574eeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        g->ebp = self + 0x34u;
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x100574ffu:
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
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        g->ebp = self + 0x34u;
        g->edi = 0u;
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10057504u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        g->ecx = 0x4d730000u;
        g->ebp = self + 0x34u;
        g->edi = 0u;
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10057509u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        g->ecx = 0x4d730000u;
        g->ebp = self + 0x34u;
        g->edi = 0u;
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10057511u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        g->ecx = 0x4d730000u;
        g->ebp = self + 0x34u;
        g->edi = 0u;
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10057517u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        g->ecx = 0x4d730000u;
        g->ebp = self + 0x34u;
        g->edi = 0u;
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1005751eu:
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
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        g->ebp = self + 0x34u;
        g->edi = 0u;
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10057528u:
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
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        g->ebp = self + 0x34u;
        g->edi = 0u;
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1005752du:
    {
        uint32_t eax;
        uint32_t ebx;
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
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = self + 0x34u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10057537u:
    {
        uint32_t eax;
        uint32_t ebx;
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
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = self + 0x34u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1005753cu:
    {
        uint32_t eax;
        uint32_t ebx;
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
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = self + 0x34u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10057553u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = self + 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10057560u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = self + 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10057572u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = self + 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1005757fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = self + 0x34u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100574a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100574a0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
