/* f_0x100c5d60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100c5d60(Guest* g)
{
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d20;
    double d21;
    double d22;
    double d23;
    double d24;
    double d25;
    double d26;
    double d30;
    double d31;
    double d32;
    double d33;
    double d34;
    double d35;
    double d36;
    double d37;
    double d38;
    double d39;
    double d40;
    double d41;
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
    uint32_t t2;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t4;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100c5ebcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100c5ebc;
    case 0x100c5ec6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100c5ec6;
    case 0x100c5ed5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100c5ed5;
    case 0x100c5edfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100c5edf;
    case 0x100c5ef1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100c5ef1;
    case 0x100c5efdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100c5efd;
    case 0x100c5f0du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100c5f0d;
    case 0x100c5f19u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100c5f19;
    case 0x100c5f2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100c5f2b;
    case 0x100c5f37u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100c5f37;
    case 0x100c5f47u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100c5f47;
    case 0x100c5f53u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100c5f53;
    case 0x100c5fa0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100c5fa0;
    case 0x100c5faau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100c5faa;
    case 0x100c5fb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100c5fb9;
    case 0x100c5fc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100c5fc3;
    case 0x100c5fd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100c5fd5;
    case 0x100c5fe1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100c5fe1;
    case 0x100c5ff1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100c5ff1;
    case 0x100c5ffdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100c5ffd;
    case 0x100c600fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100c600f;
    case 0x100c601bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100c601b;
    case 0x100c602bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100c602b;
    case 0x100c6037u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100c6037;
    case 0x100c6340u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100c6340;
    case 0x100c6355u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100c6355;
    case 0x100c6359u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100c6359;
    case 0x100c635fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100c635f;
    case 0x100c638au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100c638a;
    case 0x100c639fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100c639f;
    case 0x100c63a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100c63a3;
    case 0x100c63a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100c63a9;
    default: break;
    }
#endif

    COW_AT(100c5d60)
    wr32(self + 0x5f8u, 0u);
    wr32(self + 0x764u, 0u);
    edi = self + 0x768u;
    eax = 0u;
    ecx = 0xcu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t1 = rd32(self);
    wr32(self + 0x798u, 0u);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(t1 + 0x1fcu), self, 1, 1u);
    t2 = rd32(self + 0x840u) & 0xff7fffffu;
    t3 = rd32(self);
    wr32(self + 0x840u, t2);
    wr32(self + 0x838u, 0u);
    g->edx = t3;
    cow_thiscall(g, rd32(t3 + 0x31cu), self, 2, 0u, 0u);
    t4 = g->edx;
    g->eax = rd32(self);
    t5 = rd32(self);
    t6 = cow_thiscall(g, rd32(t5 + 0x31cu), self, 2, 0u, 1u);
    g->edx = rd32(self);
    t7 = rd32(self);
    cow_thiscall(g, rd32(t7 + 0x324u), self, 2, 0u, 0u);
    t8 = g->edx;
    cow_thiscall(g, rd32(rd32(self) + 0x324u), self, 2, 0u, 1u);
    wr32(self + 0x7f8u, 0x20202020u);
    wr32(self + 0x7fcu, 0u);
    wr32(self + 0x800u, 0u);
    wr32(self + 0x804u, 0x20202020u);
    wr32(self + 0x80cu, 0x20202020u);
    wr32(self + 0x810u, 0u);
    wr32(self + 0x808u, 0u);
    wr32(self + 0x814u, 0u);
    wr32(self + 0x818u, 0u);
    t9 = (rd32(self + 0x840u) & 0xffffff00u) | (rd32(self + 0x840u) & 0xfcu);
    wr32(self + 0x840u, t9);
    wr32(self + 0x848u, rd32(COW_IMG(0x1035d694u)));
    t10 = rd32(COW_IMG(0x1035d698u));
    wr32(self + 0x84cu, t10);
    t11 = rd32(COW_IMG(0x1035d69cu));
    wr32(self + 0x850u, t11);
    wr32(self + 0x854u, 0xbf800000u);
    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x82cu, COW_IMG(0x1035d6a4u));
    wr32(self + 0x828u, 0u);
    wr32(self + 0x61cu, rd32(COW_IMG(0x1035d6b0u)));
    wr32(self + 0x620u, rd32(COW_IMG(0x1035d6b4u)));
    t12 = rd32(COW_IMG(0x1035d6b8u));
    wr32(self + 0x624u, t12);
    t13 = rd32(COW_IMG(0x1035d6bcu));
    wr32(self + 0x628u, t13);
    g->eax = self + 0x61cu;
    g->esp = sp0 - 0x18u;
    t14 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, self + 0x44u, self + 0x61cu);
    d15 = (double)rdf32(self + 0x44u);
    if ((cow_fsw(g, d15, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d15, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d15, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(100c5ebc)
        d16 = fr(g, (double)rdf32(self + 0x44u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x44u, (float)d16);
    }
    COW_AT(100c5ec6)
    d17 = (double)rdf32(self + 0x44u);
    if (!(d17 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d17, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d17, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(100c5ed5)
        d18 = fr(g, (double)rdf32(self + 0x44u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x44u, (float)d18);
    }
    COW_AT(100c5edf)
    d19 = (double)rdf32(self + 0x48u);
    if ((cow_fsw(g, d19, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d19, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d19, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(100c5ef1)
        d20 = fr(g, (double)rdf32(self + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x48u, (float)d20);
    }
    COW_AT(100c5efd)
    d21 = (double)rdf32(self + 0x48u);
    if (!(d21 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d21, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d21, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(100c5f0d)
        d22 = fr(g, (double)rdf32(self + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x48u, (float)d22);
    }
    COW_AT(100c5f19)
    d23 = (double)rdf32(self + 0x4cu);
    if ((cow_fsw(g, d23, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d23, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d23, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(100c5f2b)
        d24 = fr(g, (double)rdf32(self + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x4cu, (float)d24);
    }
    COW_AT(100c5f37)
    d25 = (double)rdf32(self + 0x4cu);
    if (d25 < (double)rdf32(COW_IMG(0x10329d28u)))
    {
    COW_AT(100c5f47)
        d26 = fr(g, (double)rdf32(self + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x4cu, (float)d26);
    }
    COW_AT(100c5f53)
    wr32(self + 0x5fcu, rd32(COW_IMG(0x1035d6c0u)));
    wr32(self + 0x600u, rd32(COW_IMG(0x1035d6c4u)));
    t27 = rd32(COW_IMG(0x1035d6c8u));
    wr32(self + 0x604u, t27);
    t28 = rd32(COW_IMG(0x1035d6ccu));
    wr32(self + 0x608u, t28);
    g->eax = self + 0x5fcu;
    g->esp = sp0 - 0x10u;
    t29 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, self + 0x44u, self + 0x5fcu);
    d30 = (double)rdf32(self + 0x44u);
    if ((cow_fsw(g, d30, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d30, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d30, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(100c5fa0)
        d31 = fr(g, (double)rdf32(self + 0x44u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x44u, (float)d31);
    }
    COW_AT(100c5faa)
    d32 = (double)rdf32(self + 0x44u);
    if (!(d32 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d32, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d32, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(100c5fb9)
        d33 = fr(g, (double)rdf32(self + 0x44u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x44u, (float)d33);
    }
    COW_AT(100c5fc3)
    d34 = (double)rdf32(self + 0x48u);
    if ((cow_fsw(g, d34, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d34, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d34, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(100c5fd5)
        d35 = fr(g, (double)rdf32(self + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x48u, (float)d35);
    }
    COW_AT(100c5fe1)
    d36 = (double)rdf32(self + 0x48u);
    if (!(d36 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d36, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d36, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(100c5ff1)
        d37 = fr(g, (double)rdf32(self + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x48u, (float)d37);
    }
    COW_AT(100c5ffd)
    d38 = (double)rdf32(self + 0x4cu);
    if ((cow_fsw(g, d38, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d38, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d38, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(100c600f)
        d39 = fr(g, (double)rdf32(self + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x4cu, (float)d39);
    }
    COW_AT(100c601b)
    d40 = (double)rdf32(self + 0x4cu);
    if (d40 < (double)rdf32(COW_IMG(0x10329d28u)))
    {
    COW_AT(100c602b)
        d41 = fr(g, (double)rdf32(self + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x4cu, (float)d41);
    }
    COW_AT(100c6037)
    wr32(self + 0x9d8u, rd32(COW_IMG(0x1035d6d0u)));
    wr32(self + 0x9dcu, rd32(COW_IMG(0x1035d6d4u)));
    wr32(self + 0x9e0u, rd32(COW_IMG(0x1035d6d8u)));
    wr32(self + 0x9e4u, rd32(COW_IMG(0x1035d6dcu)));
    wr32(self + 0x60cu, rd32(COW_IMG(0x1035d6e0u)));
    wr32(self + 0x610u, rd32(COW_IMG(0x1035d6e4u)));
    wr32(self + 0x614u, rd32(COW_IMG(0x1035d6e8u)));
    wr32(self + 0x618u, rd32(COW_IMG(0x1035d6ecu)));
    wr32(self + 0x62cu, rd32(COW_IMG(0x1035d6f0u)));
    t42 = rd32(COW_IMG(0x1035d6f4u));
    wr32(self + 0x630u, t42);
    t43 = rd32(COW_IMG(0x1035d6f8u));
    wr32(self + 0x634u, t43);
    wr32(self + 0x638u, rd32(COW_IMG(0x1035d6fcu)));
    t44 = rd32(self + 0x840u);
    wr32(self + 0x758u, 0xbf800000u);
    wr32(self + 0x75cu, 0xbf800000u);
    wr32(self + 0x760u, 0xbf800000u);
    wr32(self + 0x840u, t44 & 0xff8fffffu);
    wr32(self + 0x65cu, 0u);
    wr32(self + 0x754u, 0x3f800000u);
    wr32(self + 0x660u, 0x80808080u);
    wr32(self + 0x664u, 0x3f800000u);
    wr32(self + 0x59cu, 0u);
    wr32(self + 0x668u, 0x80u);
    wr32(self + 0x66cu, 0x80u);
    wr16(self + 0x670u, 0u);
    wr32(self + 0x8d4u, 0u);
    wr8(self + 0x8e8u, 1u);
    wr32(self + 0x8ecu, 0u);
    wr32(self + 0x7a0u, 0u);
    wr32(self + 0x7e8u, 0u);
    wr32(self + 0x7ecu, 0u);
    wr32(self + 0x7f0u, 0u);
    wr32(self + 0x7f4u, 0u);
    wr32(self + 0x8b8u, 0x42f00000u);
    wr8(self + 0x9e8u, 0u);
    wr32(self + 0x81cu, 0u);
    wr32(self + 0x820u, 0u);
    wr8(self + 0x8b5u, 0u);
    g->ebx = 0u;
    g->eax = t43;
    g->esp = sp0 - 0x10u;
    t45 = cow_thiscall(g, COW_IMG(0x100d5430u), self, 1, 0u);
    t46 = rd32(self);
    wr32(self + 0x824u, 0u);
    wr32(self + 0x7c8u, 0x3f6c6469u);
    wr32(self + 0x7ccu, 0x3f6b6c77u);
    wr32(self + 0x7d0u, 0x3f6e7572u);
    wr32(self + 0x7d4u, 0x3f6c7462u);
    wr32(self + 0x7d8u, 0u);
    wr32(self + 0x7dcu, 0x3f800000u);
    wr32(self + 0x7e0u, 0x3f800000u);
    wr32(self + 0x8c4u, 0u);
    wr32(self + 0x7c4u, 0u);
    wr32(self + 0x7e4u, 0u);
    wr32(self + 0x8a0u, 0u);
    wr8(self + 0x8a4u, 0u);
    g->edx = t46;
    cow_thiscall(g, rd32(t46 + 0xa8u), self, 1, 8u);
    t47 = g->edx;
    g->eax = rd32(self);
    t48 = rd32(self);
    t49 = cow_thiscall(g, rd32(t48 + 0xb0u), self, 1, 2u);
    g->edx = rd32(self);
    t50 = rd32(self);
    cow_thiscall(g, rd32(t50 + 0xb8u), self, 1, 2u);
    t51 = g->edx;
    t52 = rd32(self);
    wr32(self + 0x8c0u, 0u);
    g->eax = t52;
    t53 = cow_thiscall(g, rd32(t52 + 0xc0u), self, 1, 0x80u);
    g->edx = rd32(self);
    t54 = rd32(self);
    t55 = cow_thiscall(g, rd32(t54 + 0xc8u), self, 1, 0x80u);
    t56 = g->edx;
    wr32(self + 0x8b0u, 0u);
    wr8(self + 0x8b4u, 1u);
    wr8(self + 0x8aau, 0u);
    wr8(self + 0x8abu, 0u);
    g->edx = t56;
    cow_thiscall(g, COW_IMG(0x100d6240u), self, 1, 0u);
    t57 = g->edx;
    t58 = rd32(self + 0x840u);
    t59 = rd8(self + 0x8acu);
    t60 = rd32(self + 0x88u);
    wr8(self + 0x8acu, t59 & 0xf8u);
    t61 = rd8(self + 0xb2u);
    wr32(self + 0x8bcu, 0u);
    wr8(self + 0x8b6u, 0u);
    wr32(self + 0x86cu, 0u);
    wr32(self + 0x870u, 0u);
    wr32(self + 0x874u, 0u);
    wr32(self + 0x858u, 0u);
    wr32(self + 0x85cu, 0u);
    wr32(self + 0x860u, 0u);
    wr32(self + 0x868u, 0u);
    wr32(self + 0x864u, 0u);
    t62 = (t58 & 0xf9f7ff03u) | 0x7ff00u;
    wr32(self + 0x840u, t62);
    wr32(self + 0x844u, 0u);
    wr32(self + 0x88u, t60 & 0xfffff9ffu);
    wr8(self + 0xb2u, (uint8_t)(t61 | 1u));
    wr8(self + 0xb0u, 1u);
    wr32(self + 0x7a4u, 0xffffffffu);
    cow_thiscall(g, COW_IMG(0x100814f0u), self + 0x7a8u, 1, 0u);
    wr32(self + 0x7b4u, rd32(COW_IMG(0x1035d700u)));
    wr32(self + 0x7b8u, rd32(COW_IMG(0x1035d704u)));
    t63 = rd32(COW_IMG(0x1035d708u));
    wr32(self + 0x7bcu, t63);
    wr32(self + 0x7c0u, rd32(COW_IMG(0x1035d70cu)));
    cow_thiscall(g, rd32(rd32(self) + 0x54u), self, 0);
    wr32(self + 0x9ecu, rd32(COW_IMG(0x1048a34cu)));
    t64 = rd32(COW_IMG(0x1048a34cu)) + 1u;
    wr32(COW_IMG(0x1048a34cu), t64);
    wr32(self + 0x9f4u, 1u);
    eax = 0u;
    ecx = 1u;
    edx = 0u;
L_100c6340: ;
    COW_AT(100c6340)
    if ((int32_t)rd32(COW_IMG(0x1048a358u) + edx) > (int32_t)rd32(COW_IMG(0x1048a358u) + ecx * 4u))
    {
        edi = ecx * 4u;
    COW_AT(100c6355)
        eax = ecx;
        edx = edi;
    }
    COW_AT(100c6359)
    if ((int32_t)(ecx + 1u) < 4)
    {
        ecx = ecx + 1u;
        goto L_100c6340;
    }
    COW_AT(100c635f)
    wr32(self + 0x9f0u, eax);
    t65 = rd32(COW_IMG(0x1048a358u) + eax * 4u) + 1u;
    wr32(COW_IMG(0x1048a358u) + eax * 4u, t65);
    wr8(self + 0x9f8u, 1u);
    wr32(self + 0xa00u, 0u);
    eax = 1u;
    ecx = 0u;
    edi = 0u;
L_100c638a: ;
    COW_AT(100c638a)
    if ((int32_t)rd32(COW_IMG(0x1048a368u) + edi) <= (int32_t)rd32(COW_IMG(0x1048a368u) + eax * 4u))
    {
        edx = eax * 4u;
    }
    else
    {
        edx = eax * 4u;
    COW_AT(100c639f)
        ecx = eax;
        edi = edx;
    }
    COW_AT(100c63a3)
    if ((int32_t)(eax + 1u) < 4)
    {
        eax = eax + 1u;
        goto L_100c638a;
    }
    COW_AT(100c63a9)
    wr32(self + 0x9fcu, ecx);
    t66 = rd32(COW_IMG(0x1048a368u) + ecx * 4u) + 1u;
    wr32(COW_IMG(0x1048a368u) + ecx * 4u, t66);
    wr8(self + 0xa04u, 1u);
    wr32(self + 0xa08u, 0u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100c5d60(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100c5ebcu:
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
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 0xbf800000u;
        g->edi = self + 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x100c5ec6u:
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
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 0xbf800000u;
        g->edi = self + 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x100c5ed5u:
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
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 0xbf800000u;
        g->edi = self + 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x100c5edfu:
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
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 0xbf800000u;
        g->edi = self + 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x100c5ef1u:
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
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 0xbf800000u;
        g->edi = self + 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x100c5efdu:
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
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 0xbf800000u;
        g->edi = self + 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x100c5f0du:
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
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 0xbf800000u;
        g->edi = self + 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x100c5f19u:
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
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 0xbf800000u;
        g->edi = self + 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x100c5f2bu:
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
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 0xbf800000u;
        g->edi = self + 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x100c5f37u:
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
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 0xbf800000u;
        g->edi = self + 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x100c5f47u:
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
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 0xbf800000u;
        g->edi = self + 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x100c5f53u:
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
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 0xbf800000u;
        g->edi = self + 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x100c5fa0u:
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
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 0xbf800000u;
        g->edi = self + 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x100c5faau:
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
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 0xbf800000u;
        g->edi = self + 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x100c5fb9u:
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
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 0xbf800000u;
        g->edi = self + 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x100c5fc3u:
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
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 0xbf800000u;
        (void)sp0;
        return 1;
    }
    case 0x100c5fd5u:
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
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 0xbf800000u;
        (void)sp0;
        return 1;
    }
    case 0x100c5fe1u:
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
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 0xbf800000u;
        (void)sp0;
        return 1;
    }
    case 0x100c5ff1u:
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
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 0xbf800000u;
        (void)sp0;
        return 1;
    }
    case 0x100c5ffdu:
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
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 0xbf800000u;
        (void)sp0;
        return 1;
    }
    case 0x100c600fu:
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
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 0xbf800000u;
        (void)sp0;
        return 1;
    }
    case 0x100c601bu:
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
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 0xbf800000u;
        (void)sp0;
        return 1;
    }
    case 0x100c602bu:
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
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 0xbf800000u;
        (void)sp0;
        return 1;
    }
    case 0x100c6037u:
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
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 0xbf800000u;
        (void)sp0;
        return 1;
    }
    case 0x100c6340u:
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
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c6355u:
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
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c6359u:
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
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c635fu:
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
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c638au:
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
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c639fu:
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
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c63a3u:
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
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c63a9u:
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
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100c5d60(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100c5d60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
