/* f_0x101602f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_101602f0(Guest* g)
{
    double d10;
    double d11;
    double d15;
    double d16;
    double d20;
    double d21;
    double d25;
    double d27;
    double d29;
    double d30;
    double d34;
    double d6;
    double d7;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t26;
    uint32_t t28;
    uint32_t t3;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t35;
    uint32_t t4;
    uint32_t t5;
    uint32_t t8;
    uint32_t t9;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    t1 = rd32(sp0 + 0xcu);
    t2 = rd32(self + 0x7cu);
    t3 = rd32(self + 0x80u);
    g->edx = t3;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10160290u), self, 1, t1);
    t4 = g->ecx;
    t5 = g->edx;
    d6 = cow_take_float(g);
    d7 = fr(g, d6 * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 + 0xcu, (float)d7);
    g->edx = t5;
    cow_thiscall(g, COW_IMG(0x101602c0u), t4, 1, t1);
    t8 = g->ecx;
    t9 = g->edx;
    d10 = cow_take_float(g);
    if ((uint8_t)rd32(sp0 + 8u) == 1u)
    {
        eax = (uint8_t)rd32(sp0 + 8u) - 1u;
        edx = t9;
        esi = rd32(sp0 + 4u);
        loc_4 = t3;
        x0 = fr(g, d10 * (double)rdf32(COW_IMG(0x10329a08u)));
        goto L_101603ed;
    }
    eax = (uint8_t)rd32(sp0 + 8u) - 1u;
    ecx = t8;
    edx = t9;
    esi = rd32(sp0 + 4u);
    loc_4 = t3;
    x0 = fr(g, d10 * (double)rdf32(COW_IMG(0x10329a08u)));
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_101603a6;
    }
    eax = eax - 1u;
    if (eax == 1u) goto L_10160367;
    eax = eax - 1u;
    wr32(sp0 + 8u, (uint32_t)(int16_t)edx);
    g->ecx = (uint32_t)(int16_t)edx;
    d11 = fr(g, fr(g, (double)(int32_t)rd32(sp0 + 8u) * (double)rdf32(sp0 + 0xcu)) + (double)(int32_t)rd32(esi));
    fpush(g, d11);
    g->esp = sp0 - 0xcu;
    t12 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t13 = g->ecx;
    t14 = (uint32_t)(int16_t)(loc_4 >> 0x10u);
    wr32(sp0 + 4u, t14);
    eax = t12;
    ecx = t13;
    edx = t14;
    x1 = (double)(int32_t)rd32(sp0 + 4u);
L_1016041c: ;
    x1 = fr(g, x1 * x0);
L_1016041e: ;
    d34 = fr(g, x1 + (double)(int32_t)rd32(esi + 4u));
    wr32(esi, eax);
    fpush(g, d34);
    g->esp = sp0 - 0xcu;
    t35 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    wr32(esi + 4u, t35);
    return;
L_10160367: ;
    d15 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(sp0 + 0xcu));
    wr32(sp0 + 0xcu, (uint32_t)(int16_t)edx);
    g->edx = edx;
    d16 = fr(g, fr(g, fr(g, d15 * (double)(int32_t)rd32(sp0 + 0xcu)) - (double)rdf32(COW_IMG(0x1032a698u))) + (double)(int32_t)rd32(esi));
    fpush(g, d16);
    g->esp = sp0 - 0xcu;
    t17 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint32_t)(int16_t)edx, g->ecx, g->edx, 1, 0);
    t18 = g->edx;
    t19 = (uint32_t)(int16_t)(loc_4 >> 0x10u);
    d20 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - x0);
    wr32(sp0 + 4u, t19);
    eax = t17;
    ecx = t19;
    edx = t18;
    x1 = fr(g, fr(g, d20 * (double)(int32_t)rd32(sp0 + 4u)) - (double)rdf32(COW_IMG(0x10335314u)));
    goto L_1016041e;
L_101603a6: ;
    wr32(sp0 + 8u, (uint32_t)(int16_t)edx);
    g->ecx = ecx;
    g->edx = (uint32_t)(int16_t)edx;
    d21 = fr(g, fr(g, (double)(int32_t)rd32(sp0 + 8u) * (double)rdf32(sp0 + 0xcu)) + (double)(int32_t)rd32(esi));
    fpush(g, d21);
    g->esp = sp0 - 0xcu;
    t22 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t23 = g->ecx;
    t24 = g->edx;
    d25 = (double)rdf32(COW_IMG(0x1032961cu));
    wr32(esi, t22);
    t26 = (uint32_t)(int16_t)(loc_4 >> 0x10u);
    wr32(sp0 + 4u, t26);
    d27 = fr(g, fr(g, fr(g, fr(g, d25 - x0) * (double)(int32_t)rd32(sp0 + 4u)) - (double)rdf32(COW_IMG(0x10335314u))) + (double)(int32_t)rd32(esi + 4u));
    fpush(g, d27);
    t28 = cow_call_regs(g, COW_IMG(0x10311c6cu), t26, g->ecx, g->edx, 1, 0);
    wr32(esi + 4u, t28);
    return;
L_101603ed: ;
    d29 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(sp0 + 0xcu));
    wr32(sp0 + 0xcu, (uint32_t)(int16_t)edx);
    g->ecx = (uint32_t)(int16_t)edx;
    d30 = fr(g, fr(g, fr(g, d29 * (double)(int32_t)rd32(sp0 + 0xcu)) - (double)rdf32(COW_IMG(0x1032a698u))) + (double)(int32_t)rd32(esi));
    fpush(g, d30);
    g->esp = sp0 - 0xcu;
    t31 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t32 = g->ecx;
    t33 = (uint32_t)(int16_t)(loc_4 >> 0x10u);
    wr32(sp0 + 4u, t33);
    eax = t31;
    ecx = t32;
    edx = t33;
    x1 = (double)(int32_t)rd32(sp0 + 4u);
    goto L_1016041c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101602f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101602f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
