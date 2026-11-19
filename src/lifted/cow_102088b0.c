/* f_0x102088b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_102088b0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_c;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
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
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 56u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102088beu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); goto E_102088be;
    case 0x102088c5u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); goto E_102088c5;
    case 0x102088d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); goto E_102088d5;
    case 0x102088dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); goto E_102088dc;
    case 0x102088ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_20 = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); goto E_102088ec;
    case 0x10208903u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_20 = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); goto E_10208903;
    case 0x10208912u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_20 = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); goto E_10208912;
    case 0x1020891bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1020891b;
    case 0x10208924u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_10208924;
    case 0x1020893au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1020893a;
    case 0x10208964u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10208964;
    case 0x1020896au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1020896a;
    case 0x10208973u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_10208973;
    case 0x1020897cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_1020897c;
    case 0x10208996u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10208996;
    case 0x102089afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); goto E_102089af;
    case 0x102089b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); goto E_102089b8;
    case 0x102089c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); goto E_102089c9;
    case 0x102089d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); goto E_102089d1;
    case 0x102089e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); goto E_102089e5;
    case 0x102089f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); goto E_102089f6;
    case 0x102089fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); goto E_102089fd;
    case 0x10208a0au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10208a0a;
    case 0x10208a1au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10208a1a;
    case 0x10208a21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10208a21;
    case 0x10208a35u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); goto E_10208a35;
    case 0x10208a3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); goto E_10208a3e;
    case 0x10208a48u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); goto E_10208a48;
    case 0x10208a4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); goto E_10208a4e;
    case 0x10208a53u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); goto E_10208a53;
    case 0x10208a5cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); goto E_10208a5c;
    case 0x10208a5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); goto E_10208a5e;
    case 0x10208a63u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); goto E_10208a63;
    case 0x10208a75u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); goto E_10208a75;
    case 0x10208a7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); goto E_10208a7c;
    case 0x10208a81u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); goto E_10208a81;
    case 0x10208aa0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10208aa0;
    case 0x10208aa5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10208aa5;
    case 0x10208aabu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10208aab;
    case 0x10208ab3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10208ab3;
    case 0x10208abbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10208abb;
    case 0x10208acdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10208acd;
    case 0x10208ad6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10208ad6;
    case 0x10208adbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10208adb;
    case 0x10208adfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); goto E_10208adf;
    case 0x10208b38u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); goto E_10208b38;
    case 0x10208b49u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10208b49;
    case 0x10208b4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10208b4b;
    default: break;
    }
#endif

    COW_AT(102088b0)
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_edi);
    if (rd8(self + 0x21u) != 0u)
    {
        ecx = self;
        edx = in_edx;
        goto L_10208912;
    }
    COW_AT(102088be)
    if (rd32(self + 0x24u) == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x24u);
    COW_AT(102088c5)
        wr32(sp0 - 0x20u, eax);
        g->esp = sp0 - 0x1cu;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, self, in_edx, 1, 1, eax);
        t1 = g->ecx;
        t2 = g->edx;
        wr32(self + 0x24u, 0u);
        ecx = t1;
        edx = t2;
    }
    COW_AT(102088d5)
    if (rd32(self + 0x24u) == 0u)
    {
        eax = rd32(self + 0x24u);
    COW_AT(102088dc)
        wr32(sp0 - 0x20u, 0x800u);
        g->eax = eax;
        g->esp = sp0 - 0x14u;
        t3 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x800u, in_edi, in_ebp);
        t4 = g->edx;
        wr32(self + 0x24u, t3);
        edx = t4;
    }
    COW_AT(102088ec)
    edi = rd32(self + 0x24u);
    eax = 0u;
    ecx = 0x200u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if (rd32(self + 0x24u) == 0u)
    {
        eax = rd32(self + 0x24u);
        ebx = in_ebx;
        esi = in_esi;
        loc_18 = in_ebp;
        loc_1c = in_edi;
        goto L_10208b4b;
    }
    eax = rd32(self + 0x24u);
    COW_AT(10208903)
    wr8(self + 0x21u, 1u);
    if (rd8(self + 0x21u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x21u);
        ebx = in_ebx;
        esi = in_esi;
        loc_18 = in_ebp;
        loc_1c = in_edi;
        goto L_10208b4b;
    }
L_10208912: ;
    COW_AT(10208912)
    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_esi);
    esi = 1u;
    edi = 0u;
    loc_18 = in_ebp;
    loc_1c = in_edi;
    loc_20 = in_ebx;
    loc_24 = in_esi;
L_1020891b: ;
    COW_AT(1020891b)
    if (rd8(esi * 8u + rd32(self + 0x24u)) & 1u)
    {
        eax = rd32(self + 0x24u);
        goto L_1020896a;
    }
    eax = rd32(self + 0x24u);
    COW_AT(10208924)
    wr32(sp0 - 0x28u, esi + 0x2100u);
    g->eax = eax;
    g->edx = edx;
    t5 = rd32(COW_IMG(0x10621808u));
    g->esp = sp0 - 0x24u;
    t6 = cow_thiscall(g, COW_IMG(0x1015b9e0u), t5, 1, esi + 0x2100u);
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 == 0u)
    {
        eax = t6;
        ecx = t7;
        edx = t8;
    }
    else
    {
        eax = t6;
    COW_AT(1020893a)
        wr16(esi * 8u + rd32(self + 0x24u) + 2u, rd16(rd32(eax + 0x14f4u)));
        t9 = rd32(rd32(eax + 0x14dcu));
        t10 = rd32(self + 0x24u);
        wr32(esi * 8u + t10 + 4u, t9);
        t11 = rd32(self + 0x24u);
        wr8(esi * 8u + t11, rd8(esi * 8u + t11) | 1u);
        eax = esi * 8u + t11;
        ecx = t10;
        edx = t9;
    }
    COW_AT(10208964)
    if ((int32_t)(edi + 1u) > 40)
    {
        edi = edi + 1u;
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
        goto L_10208973;
    }
    edi = edi + 1u;
    loc_18 = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
    loc_20 = rd32(sp0 - 0x20u);
    loc_24 = rd32(sp0 - 0x24u);
L_1020896a: ;
    COW_AT(1020896a)
    if ((int32_t)(esi + 1u) < 256)
    {
        esi = esi + 1u;
        goto L_1020891b;
    }
L_10208973: ;
    COW_AT(10208973)
    wr32(sp0 - 0x10u, 1u);
    ebx = 1u;
    loc_10 = 1u;
L_1020897c: ;
    COW_AT(1020897c)
    wr32(sp0 - 0x28u, ebx);
    wr32(sp0 - 0x2cu, 0x1202u);
    t12 = (ecx & 0xffffff00u) | rd8(self + 0x22u);
    wr32(sp0 - 0x30u, t12);
    g->edi = edi;
    g->eax = eax;
    g->ecx = t12;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t13 = cow_cdecl(g, COW_IMG(0x100fcc50u), 3, t12, 0x1202u, ebx);
    t14 = g->ecx;
    t15 = g->edx;
    if ((uint8_t)t13 == 0u)
    {
        eax = t13;
        ecx = t14;
        edx = t15;
    }
    else
    {
        ecx = t14;
    COW_AT(10208996)
        t16 = rd32(ebx * 8u + rd32(self + 0x24u) + 4u);
        wr32(sp0 - 0xcu, t16);
        if (!(rd8(ebx * 8u + rd32(self + 0x24u)) & 1u))
        {
            eax = ebx * 8u + rd32(self + 0x24u);
            ecx = (ecx & 0xffffff00u) | rd8(ebx * 8u + rd32(self + 0x24u));
            edx = t16;
        }
        else
        {
            eax = ebx * 8u + rd32(self + 0x24u);
            ecx = (ecx & 0xffffff00u) | rd8(ebx * 8u + rd32(self + 0x24u));
            edx = t16;
            loc_c = t16;
    COW_AT(102089af)
            if (rd16(self + 0x1cu) == 0u)
            {
                ecx = (ecx & 0xffff0000u) | rd16(self + 0x1cu);
                goto L_102089c9;
            }
            ecx = (ecx & 0xffff0000u) | rd16(self + 0x1cu);
    COW_AT(102089b8)
            if (rd16(eax + 2u) != (uint32_t)(int16_t)ecx)
            {
                eax = (uint32_t)(int16_t)ecx;
                goto L_10208b38;
            }
L_102089c9: ;
    COW_AT(102089c9)
            if (edx == 0u)
            {
    COW_AT(10208a5e)
                wr8(sp0 - 0x11u, 0u);
            }
            else
            {
    COW_AT(102089d1)
                eax = rd32(COW_IMG(0x1066442cu)) + 0x1du;
                edx = sp0 - 8u;
                esi = 0xffffffe3u - rd32(COW_IMG(0x1066442cu));
                edi = rd32(COW_IMG(0x1066442cu));
L_102089e5: ;
    COW_AT(102089e5)
                wr8(edx, (uint8_t)(rd8(eax + 8u) - rd8(eax)));
                if ((int32_t)(eax + esi + 1u) <= 7)
                {
                    ecx = eax + esi + 1u;
                    eax = eax + 1u;
                    edx = edx + 1u;
                    goto L_102089e5;
                }
                edx = edx + 1u;
    COW_AT(102089f6)
                if ((int32_t)rd32(edi + 0x14u) >= 0)
                {
                    eax = rd32(edi + 0x14u);
    COW_AT(102089fd)
                    wr32(sp0 - 0x28u, 1u);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x24u;
                    t17 = cow_thiscall(g, COW_IMG(0x102079d0u), edi, 1, 1u);
                    t18 = g->edx;
                    if (t17 == 0u)
                    {
                        loc_c = rd32(sp0 - 0xcu);
                    }
                    else
                    {
                        eax = t17;
                        edx = t18;
    COW_AT(10208a0a)
                        wr32(sp0 - 0x28u, eax);
                        g->eax = eax;
                        g->esp = sp0 - 0x24u;
                        t19 = cow_thiscall(g, COW_IMG(0x1015bc40u), rd32(COW_IMG(0x10621808u)), 1, eax);
                        if (t19 == 0u)
                        {
                            loc_c = rd32(sp0 - 0xcu);
                        }
                        else
                        {
                            eax = t19;
    COW_AT(10208a1a)
                            ecx = 0u;
                            esi = rd32(eax + 0x18u);
                            eax = 0u;
                            cf = 0u;
                            pf = PARITY(0u);
                            zf = 1u;
                            sf = 0u;
                            of = 0u;
L_10208a21: ;
    COW_AT(10208a21)
                            wr8(eax + sp0 - 8u, (uint8_t)(rd8(eax + sp0 - 8u) + (esi >> (ecx & 0x1fu) & 0xfu)));
                            if ((int32_t)(ecx + 4u) <= 28)
                            {
                                eax = eax + 1u;
                                cf = ecx + 4u < 0x1cu;
                                pf = PARITY((uint8_t)(ecx - 0x18u));
                                zf = ecx == 0x18u;
                                sf = (int32_t)(ecx - 0x18u) < 0;
                                of = ((ecx + 4u ^ 0x1cu) & (ecx + 4u ^ ecx - 0x18u)) >> 0x1fu;
                                ecx = ecx + 4u;
                                goto L_10208a21;
                            }
                            loc_c = rd32(sp0 - 0xcu);
                        }
                    }
                }
    COW_AT(10208a35)
                wr8(sp0 - 0x11u, 1u);
                ecx = 0u;
                edx = 0u;
                cf = 0u;
                pf = PARITY(0u);
                zf = 1u;
                sf = 0u;
                of = 0u;
L_10208a3e: ;
    COW_AT(10208a3e)
                if ((loc_c >> (ecx & 0x1fu) & 0xfu) != 0u)
                {
                    eax = (loc_c >> (ecx & 0x1fu) & 0xffffff00u) | (loc_c >> (ecx & 0x1fu) & 0xfu);
    COW_AT(10208a48)
                    if ((int8_t)rd8(edx + sp0 - 8u) < (int8_t)eax)
                    {
    COW_AT(10208a4e)
                        wr8(sp0 - 0x11u, 0u);
                    }
                }
    COW_AT(10208a53)
                if ((int32_t)(ecx + 4u) <= 28)
                {
                    edx = edx + 1u;
                    cf = ecx + 4u < 0x1cu;
                    pf = PARITY((uint8_t)(ecx - 0x18u));
                    zf = ecx == 0x18u;
                    sf = (int32_t)(ecx - 0x18u) < 0;
                    of = ((ecx + 4u ^ 0x1cu) & (ecx + 4u ^ ecx - 0x18u)) >> 0x1fu;
                    ecx = ecx + 4u;
                    goto L_10208a3e;
                }
                edx = edx + 1u;
    COW_AT(10208a5c)
            }
    COW_AT(10208a63)
            if (rd32(self + 0x10u) != ebx + 0x2100u)
            {
                eax = ebx + 0x2100u;
                ecx = rd32(self + 0x10u);
    COW_AT(10208a7c)
                esi = 2u;
                edi = 0x80808080u;
L_10208a81: ;
    COW_AT(10208a81)
                wr32(sp0 - 0x28u, esi);
                wr32(sp0 - 0x2cu, 0x1200u);
                t20 = (eax & 0xffffff00u) | rd8(self + 0x22u);
                wr32(sp0 - 0x30u, t20);
                g->edi = edi;
                g->eax = t20;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x24u;
                t21 = cow_cdecl(g, COW_IMG(0x100fcbc0u), 3, t20, 0x1200u, esi);
                t22 = g->ecx;
                t23 = g->edx;
                if (rd32(sp0 - 0x10u) != (uint8_t)t21)
                {
                    eax = (uint8_t)t21;
                    ecx = t22;
                    edx = t23;
                    ebx = rd32(sp0 - 0x10u);
                }
                else
                {
                    eax = (uint8_t)t21;
                    ecx = t22;
                    edx = t23;
                    ebx = rd32(sp0 - 0x10u);
    COW_AT(10208aa0)
                    edi = 0x80509050u;
                }
    COW_AT(10208aa5)
                if ((int32_t)(esi + 1u) < 14)
                {
                    esi = esi + 1u;
                    goto L_10208a81;
                }
    COW_AT(10208aab)
                if (edi == 0x80808080u)
                {
    COW_AT(10208ab3)
                    if (rd8(sp0 - 0x11u) == 0u)
                    {
    COW_AT(10208abb)
                        if ((int32_t)rd32(rd32(COW_IMG(0x1066442cu)) + 0x14u) < 0)
                        {
                            edi = 0x80404040u;
                        }
                        else
                        {
                            eax = rd32(rd32(COW_IMG(0x1066442cu)) + 0x14u);
                            ecx = rd32(COW_IMG(0x1066442cu));
    COW_AT(10208acd)
                            g->edi = 0x80404040u;
                            g->eax = eax;
                            g->esp = sp0 - 0x24u;
                            t24 = cow_thiscall(g, COW_IMG(0x10207990u), ecx, 0);
                            if (t24 != ebx)
                            {
                                edi = 0x80404040u;
                            }
                            else
                            {
    COW_AT(10208ad6)
                                edi = 0x80509050u;
                            }
                        }
                    }
                }
    COW_AT(10208adb)
                ebx = rd32(sp0 - 0x10u);
            }
            else
            {
    COW_AT(10208a75)
                edi = 0x80804020u;
            }
    COW_AT(10208adf)
            wr32(sp0 - 0x28u, 0x80808080u);
            wr32(sp0 - 0x2cu, ebx + 0x2100u);
            wr32(sp0 - 0x30u, 0x15u);
            wr32(sp0 - 0x34u, 0u);
            t25 = rd32(self + 0xcu) + rd32(self + 4u) * 0x54u;
            g->eax = rd32(self + 4u) * 8u - rd32(self + 4u);
            t26 = rd32(self + 4u);
            t27 = rd32(self + 0xcu);
            g->esp = sp0 - 0x24u;
            t28 = cow_fastcall(g, COW_IMG(0x101f4b20u), t25, t27, 4, 0u, 0x15u, ebx + 0x2100u, 0x80808080u);
            t29 = g->edx;
            wr32(sp0 - 0x28u, edi);
            wr32(sp0 - 0x2cu, ebx + 0x2100u);
            wr32(sp0 - 0x30u, 0x19u);
            wr32(sp0 - 0x34u, 1u);
            t30 = cow_fastcall(g, COW_IMG(0x101f4b20u), t25, t29, 4, 1u, 0x19u, ebx + 0x2100u, edi);
            t31 = g->ecx;
            t32 = g->edx;
            wr32(sp0 - 0x28u, 0x288u);
            wr32(sp0 - 0x2cu, 0xeu);
            g->ecx = t31;
            g->edx = t32;
            t33 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x288u);
            t34 = g->ecx;
            t35 = g->edx;
            wr32(t25 + 0x4cu, t33);
            wr32(t25 + 0x48u, ebx + 0x2100u);
            t36 = rd32(self + 4u) + 1u;
            t37 = rd32(sp0 - 0x10u);
            wr32(self + 4u, t36);
            eax = t36;
            ecx = t34;
            edx = t35;
            ebx = t37;
        }
    }
L_10208b38: ;
    COW_AT(10208b38)
    wr32(sp0 - 0x10u, ebx + 1u);
    if ((int32_t)(ebx + 1u) < 256)
    {
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_10 = ebx + 1u;
        ebx = ebx + 1u;
        goto L_1020897c;
    }
    COW_AT(10208b49)
    ebx = rd32(sp0 - 0x20u);
    esi = rd32(sp0 - 0x24u);
    loc_18 = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
L_10208b4b: ;
    COW_AT(10208b4b)
    g->ebx = ebx;
    g->esi = esi;
    g->edi = loc_1c;
    g->ebp = loc_18;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102088b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102088beu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->ebp = self;
        (void)sp0;
        return 1;
    }
    case 0x102088c5u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->ebp = self;
        (void)sp0;
        return 1;
    }
    case 0x102088d5u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x102088dcu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x102088ecu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_20;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_20 = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10208903u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_20;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_20 = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10208912u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_20;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_20 = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1020891bu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10208924u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1020893au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10208964u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1020896au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10208973u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1020897cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10208996u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x102089afu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x102089b8u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x102089c9u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x102089d1u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x102089e5u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x102089f6u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x102089fdu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10208a0au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10208a1au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10208a21u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10208a35u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10208a3eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10208a48u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10208a4eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10208a53u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10208a5cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10208a5eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10208a63u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10208a75u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10208a7cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x10208a81u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10208aa0u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10208aa5u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10208aabu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10208ab3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10208abbu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10208acdu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x24u;
        g->edi = 0x80404040u;
        (void)sp0;
        return 1;
    }
    case 0x10208ad6u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10208adbu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10208adfu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10208b38u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10208b49u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10208b4bu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102088b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102088b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
