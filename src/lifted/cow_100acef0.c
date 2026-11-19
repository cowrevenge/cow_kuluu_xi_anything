/* f_0x100acef0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100acef0(Guest* g)
{
    double d10;
    double d11;
    double d9;
    uint32_t t1;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);

    COW_AT(100acef0)
    t1 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
    t2 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
    wr32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u, t1);
    t3 = rd32(arg1 * 0x10u + self + 0x5ecu);
    t4 = rd32(arg1 * 0x10u + self + 0x5e8u);
    t5 = rd32(arg1 * 0x10u + self + 0x5e4u);
    g->eax = t5;
    g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
    t6 = rd32(rd32(COW_IMG(0x1047cf7cu)));
    g->esp = sp0 - 0x10u;
    t7 = cow_thiscall(g, rd32(t6 + 0x58u), rd32(COW_IMG(0x1047cf7cu)), 4, t2, t5, t4, t3);
    t8 = g->edx;
    d9 = (double)rdf32(arg1 * 0x10u + self + 0x624u);
    d10 = (double)rdf32(arg1 * 0x10u + self + 0x628u);
    d11 = (double)rdf32(arg1 * 0x10u + self + 0x62cu);
    wr32(t2 + 0x3cu, 0x3f800000u);
    wrf32(t2 + 0x30u, (float)d9);
    wrf32(t2 + 0x34u, (float)d10);
    wrf32(t2 + 0x38u, (float)d11);
    cow_thiscall(g, COW_IMG(0x100acf90u), self, 3, arg1, t2, arg2);
    t12 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
    t13 = rd32(COW_IMG(0x1047cf7cu));
    wr32(t13 + 0xa90u, t12);
    wr32(t12 * 4u + t13 + 0xa10u, t2);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100acef0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100acef0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
