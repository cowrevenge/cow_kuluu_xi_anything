/* f_0x101aff70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101aff70(Guest* g)
{
    uint32_t eax;
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
    cow_frame(g, sp0, 92u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101affd1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x48u); in_esi = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x44u); goto E_101affd1;
    case 0x101affe5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101affe5;
    case 0x101afff2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101afff2;
    case 0x101afffdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101afffd;
    case 0x101b0008u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101b0008;
    case 0x101b0012u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101b0012;
    case 0x101b001cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101b001c;
    case 0x101b002cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101b002c;
    default: break;
    }
#endif

    COW_AT(101aff70)
    wr32(sp0 - 0x40u, in_ebx);
    wr32(sp0 - 0x44u, in_esi);
    wr32(sp0 - 4u, 0x7d0u);
    wr32(sp0 - 8u, 0x7d0u);
    wr32(sp0 - 0x48u, in_edi);
    wr8(self + 0xf123u, 0u);
    wr8(self + 0xf121u, 0u);
    wr8(self + 0xf2f4u, 0u);
    wr32(sp0 - 0x3cu, 0x20u);
    wr32(sp0 - 0x38u, 0xfffffda8u);
    wr32(sp0 - 0x34u, 0xfffffda8u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x1cu, 0x40u);
    wr32(sp0 - 0xcu, 0xffffff9cu);
    wr32(sp0 - 0x18u, 0xfffffda8u);
    wr32(sp0 - 0x14u, 0xfffffda8u);
    g->esp = sp0 - 0x48u;
    cow_fastcall(g, COW_IMG(0x101b5210u), self, in_edx, 0);
    t1 = g->edx;
    edx = t1;
    COW_AT(101affd1)
    wr8(self + 0xf120u, 0u);
    t2 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x4cu, t2);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->ecx = t2;
    t3 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x48u;
    t4 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t2);
    t5 = g->ecx;
    eax = t4;
    ecx = t5;
    COW_AT(101affe5)
    wr32(sp0 - 0x4cu, sp0 - 0x3cu);
    wr32(sp0 - 0x50u, eax);
    g->ecx = ecx;
    g->edx = sp0 - 0x3cu;
    g->esp = sp0 - 0x48u;
    cow_stdcall(g, COW_IMG(0x102bc864u), 2, eax, sp0 - 0x3cu);
    t6 = g->ecx;
    t7 = g->edx;
    ecx = t6;
    edx = t7;
    edi = eax;
    COW_AT(101afff2)
    wr32(sp0 - 0x4cu, sp0 - 0x20u);
    wr32(sp0 - 0x50u, edi);
    g->eax = sp0 - 0x20u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x48u;
    t8 = cow_stdcall(g, COW_IMG(0x102bc85eu), 2, edi, sp0 - 0x20u);
    t9 = g->ecx;
    t10 = g->edx;
    eax = t8;
    ecx = t9;
    edx = t10;
    COW_AT(101afffd)
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x50u, 4u);
    wr32(sp0 - 0x54u, 0x15u);
    wr32(sp0 - 0x58u, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x48u;
    t11 = cow_stdcall(g, COW_IMG(0x102bc858u), 4, edi, 0x15u, 4u, 0u);
    t12 = g->ecx;
    t13 = g->edx;
    eax = t11;
    ecx = t12;
    edx = t13;
    COW_AT(101b0008)
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x50u, 0u);
    wr32(sp0 - 0x54u, 0x17u);
    wr32(sp0 - 0x58u, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x48u;
    t14 = cow_stdcall(g, COW_IMG(0x102bc858u), 4, edi, 0x17u, 0u, 0u);
    t15 = g->ecx;
    t16 = g->edx;
    eax = t14;
    ecx = t15;
    edx = t16;
    COW_AT(101b0012)
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x50u, 0u);
    wr32(sp0 - 0x54u, 0x16u);
    wr32(sp0 - 0x58u, edi);
    g->eax = eax;
    g->esp = sp0 - 0x48u;
    t17 = cow_stdcall(g, COW_IMG(0x102bc858u), 4, edi, 0x16u, 0u, 0u);
    eax = t17;
    COW_AT(101b001c)
    wr32(sp0 - 0x4cu, edi);
    t18 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x50u, t18);
    g->esp = sp0 - 0x48u;
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t18, edi);
    COW_AT(101b002c)
    wr32(self + 0xf128u, 0u);
    g->ebx = rd32(sp0 - 0x40u);
    g->esi = rd32(sp0 - 0x44u);
    g->edi = rd32(sp0 - 0x48u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101aff70(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101affd1u:
    {
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
        in_edi = rd32(sp0 - 0x48u);
        in_esi = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x48u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101affe5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101afff2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        g->ebx = 0u;
        wr32(sp0 - 0x4cu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x101afffdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        g->ebx = 0u;
        wr32(sp0 - 0x4cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101b0008u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b0012u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b001cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b002cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101aff70(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101aff70(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
