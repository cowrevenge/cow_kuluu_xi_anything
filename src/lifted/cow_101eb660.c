/* f_0x101eb660 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101eb660(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
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
    case 0x101eb67cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_101eb67c;
    case 0x101eb695u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_101eb695;
    case 0x101eb6b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_101eb6b7;
    case 0x101eb6d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_101eb6d0;
    case 0x101eb73cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_101eb73c;
    case 0x101eb745u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_101eb745;
    case 0x101eb758u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_101eb758;
    default: break;
    }
#endif

    COW_AT(101eb660)
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x101eb760u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    t4 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
    eax = t4;
    ecx = COW_IMG(0x10381fa8u);
    edx = self + 0x68u;
L_101eb67c: ;
    COW_AT(101eb67c)
    t5 = rd32(rd32(eax) + (uint32_t)(int16_t)rd16(ecx) * 4u);
    wr32(edx, t5);
    if ((int32_t)(ecx + 2u) < (int32_t)COW_IMG(0x10381fbau))
    {
        ecx = ecx + 2u;
        edx = edx + 4u;
        goto L_101eb67c;
    }
    ecx = ecx + 2u;
    edx = edx + 4u;
    COW_AT(101eb695)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t6 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 5u);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(self + 0x8cu, t6);
    g->esp = sp0 - 0x10u;
    t9 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 1u);
    eax = t9;
    ecx = COW_IMG(0x10381fccu);
    edx = self + 0x90u;
L_101eb6b7: ;
    COW_AT(101eb6b7)
    t10 = rd32(rd32(eax) + (uint32_t)(int16_t)rd16(ecx) * 4u);
    t11 = rd32(eax);
    wr32(edx, t10);
    if ((int32_t)(ecx + 2u) < (int32_t)COW_IMG(0x10381fd6u))
    {
        ecx = ecx + 2u;
        edx = edx + 4u;
        goto L_101eb6b7;
    }
    ecx = ecx + 2u;
    edx = edx + 4u;
    ebx = t11;
    COW_AT(101eb6d0)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t12 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 1u);
    t13 = g->edx;
    t14 = rd32(rd32(t12) + 0x12cu);
    wr32(self + 0x64u, t14);
    wr32(self + 0x34u, t14);
    wr8(self + 0x49u, 1u);
    cow_call_regs(g, COW_IMG(0x101f6700u), t14, self, t13, 0, 1, 0xfu);
    t15 = g->edx;
    wr16(self + 0x16u, 6u);
    wr32(self + 0x30u, COW_IMG(0x10381f98u));
    wr16(self + 0x26u, 0x10u);
    wr8(self + 0x2cu, 4u);
    wr8(self + 0x2du, 3u);
    wr8(self + 0x58u, (uint8_t)arg1);
    g->eax = arg1;
    g->edx = t15;
    t16 = cow_thiscall(g, COW_IMG(0x101eb0d0u), self, 1, arg1);
    t17 = g->edx;
    g->ebx = ebx;
    g->edx = t17;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10382000u), 1u, 0u);
    t18 = g->edx;
    if (rd32(self + 8u) != 0u)
    {
        edx = t18;
    COW_AT(101eb73c)
        if (rd32(COW_IMG(0x10578480u)) != 0u)
        {
            eax = rd32(COW_IMG(0x10578480u));
    COW_AT(101eb745)
            g->ebx = in_ebx;
            g->esp = sp0;
            cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10381fecu), 1u, 0u);
        }
    }
    COW_AT(101eb758)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101eb660(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101eb67cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101eb695u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101eb6b7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101eb6d0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101eb73cu:
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
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101eb745u:
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
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101eb758u:
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
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101eb660(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101eb660(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
