/* f_0x10159ba0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10159ba0(Guest* g)
{
    double d12;
    double d14;
    double d15;
    double d16;
    double d17;
    double d4;
    double d8;
    uint32_t eax;
    double loc_1c_f;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t13;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 72u);

    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, 4u);
    wr32(sp0 - 0x2cu, 0x3fu);
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), self, 4, 0x3fu, 4u, in_esi, rd32(sp0 - 0x20u));
    t2 = g->ecx;
    t3 = g->edx;
    d4 = cow_take_float(g);
    wrf32(sp0 - 0x18u, (float)(double)(float)d4);
    wr32(sp0 - 0x30u, 5u);
    wr32(sp0 - 0x34u, 0x3fu);
    g->edx = t3;
    g->esp = sp0 - 0x24u;
    t5 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), t2, 4, 0x3fu, 5u, 0x3fu, 4u);
    t6 = g->ecx;
    t7 = g->edx;
    d8 = cow_take_float(g);
    wrf32(sp0 - 0x14u, (float)(double)(float)d8);
    wr32(sp0 - 0x38u, 6u);
    wr32(sp0 - 0x3cu, 0x3fu);
    g->edx = t7;
    g->esp = sp0 - 0x2cu;
    t9 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), t6, 4, 0x3fu, 6u, 0x3fu, 5u);
    t10 = g->ecx;
    t11 = g->edx;
    d12 = cow_take_float(g);
    wrf32(sp0 - 0x20u, (float)(double)(float)d12);
    wr32(sp0 - 0x40u, 7u);
    wr32(sp0 - 0x44u, 0x3fu);
    g->esp = sp0 - 0x34u;
    t13 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), t10, 4, 0x3fu, 7u, 0x3fu, 6u);
    d14 = cow_take_float(g);
    wrf32(sp0 - 0x1cu, (float)(double)(float)d14);
    d15 = (double)rdf32(sp0 - 0x18u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 0u);
    if (d15 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (t13 & 0xffff0000u) | (uint16_t)cow_fsw(g, d15, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_10159c4f;
    }
    eax = (t13 & 0xffff0000u) | (uint16_t)cow_fsw(g, d15, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    loc_1c_f = (double)(float)d14;
    d16 = (double)rdf32(sp0 - 0x14u);
    if (d16 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d16, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_10159c4f;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d16, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    d17 = (double)rdf32(sp0 - 0x20u);
    if (d17 != (double)rdf32(COW_IMG(0x103295d8u))) goto L_10159c41;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d17, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    if (loc_1c_f == (double)rdf32(COW_IMG(0x103295d8u))) goto L_10159c6d;
L_10159c41: ;
    t18 = rd32(sp0 - 0x20u);
    wr32(sp0 - 0x10u, t18);
    eax = t18;
    x0 = loc_1c_f;
L_10159c5b: ;
    wrf32(sp0 - 8u, (float)(double)(float)-x0);
    wr32(sp0 - 0x28u, sp0 - 0x10u);
    g->esp = sp0 - 0x24u;
    cow_call_regs(g, COW_IMG(0x10159a20u), eax, self, g->edx, 0, 1, sp0 - 0x10u);
L_10159c6d: ;
    return;
L_10159c4f: ;
    t19 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x10u, t19);
    x0 = (double)rdf32(sp0 - 0x14u);
    goto L_10159c5b;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10159ba0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10159ba0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
