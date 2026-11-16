/* f_0x101cfa00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101cfa00(Guest* g)
{
    double d14;
    double d19;
    double d29;
    double d30;
    double d31;
    double d32;
    double d36;
    double d37;
    double d38;
    double d4;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_1c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
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
    uint32_t t3;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t39;
    uint32_t t40;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    ebp = rd32(sp0 + 4u);
    esi = self + 0x1cu;
    loc_1c = 8u;
L_101cfa1a: ;
    ebx = 8u;
    edi = ebp;
L_101cfa21: ;
    t1 = (uint8_t)(uint32_t)((int32_t)rd32(edi) >> 0x10u);
    t2 = (uint8_t)(uint32_t)((int32_t)rd32(edi) >> 8u);
    t3 = rd32(edi);
    d4 = fr(g, fr(g, fr(g, fr(g, (double)(int32_t)t1 * (double)rdf32(COW_IMG(0x10337e7cu))) + fr(g, (double)(int32_t)t2 * (double)rdf32(COW_IMG(0x10337e78u)))) + fr(g, (double)(int32_t)(uint8_t)rd32(edi) * (double)rdf32(COW_IMG(0x10337e74u)))) - (double)rdf32(COW_IMG(0x1032ae60u)));
    fpush(g, d4);
    g->esp = sp0 - 0x30u;
    t5 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint8_t)t3, g->ecx, g->edx, 1, 0);
    wr32(esi, t5);
    if (ebx != 1u)
    {
        ebx = ebx - 1u;
        esi = esi + 4u;
        edi = edi + 4u;
        goto L_101cfa21;
    }
    esi = esi + 4u;
    if (loc_1c != 1u)
    {
        ebp = ebp + 0x40u;
        loc_1c = loc_1c - 1u;
        goto L_101cfa1a;
    }
    ebp = rd32(sp0 + 4u) + 0x20u;
    esi = self + 0x11cu;
    loc_1c = 8u;
L_101cfaa9: ;
    ebx = 8u;
    edi = ebp;
L_101cfab0: ;
    t6 = (uint8_t)(uint32_t)((int32_t)rd32(edi) >> 0x10u);
    t7 = (uint8_t)(uint32_t)((int32_t)rd32(edi) >> 8u);
    t8 = rd32(edi);
    d9 = fr(g, fr(g, fr(g, fr(g, (double)(int32_t)t6 * (double)rdf32(COW_IMG(0x10337e7cu))) + fr(g, (double)(int32_t)t7 * (double)rdf32(COW_IMG(0x10337e78u)))) + fr(g, (double)(int32_t)(uint8_t)rd32(edi) * (double)rdf32(COW_IMG(0x10337e74u)))) - (double)rdf32(COW_IMG(0x1032ae60u)));
    fpush(g, d9);
    g->esp = sp0 - 0x30u;
    t10 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint8_t)t8, g->ecx, g->edx, 1, 0);
    wr32(esi, t10);
    if (ebx != 1u)
    {
        ebx = ebx - 1u;
        esi = esi + 4u;
        edi = edi + 4u;
        goto L_101cfab0;
    }
    esi = esi + 4u;
    if (loc_1c != 1u)
    {
        ebp = ebp + 0x40u;
        loc_1c = loc_1c - 1u;
        goto L_101cfaa9;
    }
    ebp = rd32(sp0 + 4u) + 0x200u;
    esi = self + 0x21cu;
    loc_1c = 8u;
L_101cfb3b: ;
    ebx = 8u;
    edi = ebp;
L_101cfb42: ;
    t11 = (uint8_t)(uint32_t)((int32_t)rd32(edi) >> 0x10u);
    t12 = (uint8_t)(uint32_t)((int32_t)rd32(edi) >> 8u);
    t13 = rd32(edi);
    d14 = fr(g, fr(g, fr(g, fr(g, (double)(int32_t)t11 * (double)rdf32(COW_IMG(0x10337e7cu))) + fr(g, (double)(int32_t)t12 * (double)rdf32(COW_IMG(0x10337e78u)))) + fr(g, (double)(int32_t)(uint8_t)rd32(edi) * (double)rdf32(COW_IMG(0x10337e74u)))) - (double)rdf32(COW_IMG(0x1032ae60u)));
    fpush(g, d14);
    g->esp = sp0 - 0x30u;
    t15 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint8_t)t13, g->ecx, g->edx, 1, 0);
    wr32(esi, t15);
    if (ebx != 1u)
    {
        ebx = ebx - 1u;
        esi = esi + 4u;
        edi = edi + 4u;
        goto L_101cfb42;
    }
    esi = esi + 4u;
    if (loc_1c != 1u)
    {
        ebp = ebp + 0x40u;
        loc_1c = loc_1c - 1u;
        goto L_101cfb3b;
    }
    ebp = rd32(sp0 + 4u) + 0x220u;
    esi = self + 0x31cu;
    loc_1c = 8u;
L_101cfbcd: ;
    ebx = 8u;
    edi = ebp;
L_101cfbd4: ;
    t16 = (uint8_t)(uint32_t)((int32_t)rd32(edi) >> 0x10u);
    t17 = (uint8_t)(uint32_t)((int32_t)rd32(edi) >> 8u);
    t18 = rd32(edi);
    d19 = fr(g, fr(g, fr(g, fr(g, (double)(int32_t)t16 * (double)rdf32(COW_IMG(0x10337e7cu))) + fr(g, (double)(int32_t)t17 * (double)rdf32(COW_IMG(0x10337e78u)))) + fr(g, (double)(int32_t)(uint8_t)rd32(edi) * (double)rdf32(COW_IMG(0x10337e74u)))) - (double)rdf32(COW_IMG(0x1032ae60u)));
    fpush(g, d19);
    g->esp = sp0 - 0x30u;
    t20 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint8_t)t18, g->ecx, g->edx, 1, 0);
    wr32(esi, t20);
    if (ebx != 1u)
    {
        ebx = ebx - 1u;
        esi = esi + 4u;
        edi = edi + 4u;
        goto L_101cfbd4;
    }
    esi = esi + 4u;
    if (loc_1c != 1u)
    {
        ebp = ebp + 0x40u;
        loc_1c = loc_1c - 1u;
        goto L_101cfbcd;
    }
    t21 = rd32(sp0 + 4u) + 4u;
    wr32(sp0 + 4u, t21);
    eax = 0u;
    esi = t21;
    loc_1c = 0u;
L_101cfc54: ;
    t22 = (uint32_t)((int32_t)(eax - (uint32_t)((int32_t)eax >> 0x1fu)) >> 1u) << 3u;
    edi = 0u;
    loc_14 = t22;
L_101cfc62: ;
    t23 = rd32(esi + 0x40u);
    t24 = rd32(esi + 0x3cu);
    t25 = rd32(esi - 4u);
    t26 = (uint8_t)t23 + (uint8_t)t24 + (uint8_t)t25 + (uint8_t)rd32(esi);
    t27 = (uint8_t)(t23 >> 8u) + (uint8_t)(t24 >> 8u) + (uint8_t)(t25 >> 8u) + (uint8_t)(rd32(esi) >> 8u);
    t28 = (uint8_t)(t23 >> 0x10u) + (uint8_t)(t24 >> 0x10u) + (uint8_t)(t25 >> 0x10u) + (uint8_t)(rd32(esi) >> 0x10u);
    d29 = fr(g, (double)(int32_t)t27 * (double)rdf32(COW_IMG(0x10329ce4u)));
    d30 = fr(g, (double)(int32_t)t26 * (double)rdf32(COW_IMG(0x10329ce4u)));
    g->ecx = (uint8_t)(t25 >> 0x10u);
    g->edx = loc_14;
    d31 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10329a08u)) * fr(g, (double)(int32_t)t28 * (double)rdf32(COW_IMG(0x10329ce4u)))) - fr(g, fr(g, d29 * (double)rdf32(COW_IMG(0x10337e70u))) + fr(g, d30 * (double)rdf32(COW_IMG(0x10337e6cu)))));
    d32 = fr(g, (double)(int32_t)t28 * (double)rdf32(COW_IMG(0x10329ce4u)));
    fpush(g, d31);
    g->esp = sp0 - 0x30u;
    t33 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint32_t)((int32_t)(edi - (uint32_t)((int32_t)edi >> 0x1fu)) >> 1u), g->ecx, g->edx, 1, 0);
    t34 = g->ecx;
    t35 = g->edx;
    d36 = fr(g, d32 * (double)rdf32(COW_IMG(0x10337e64u)));
    d37 = fr(g, fr(g, d30 * (double)rdf32(COW_IMG(0x10329a08u))) - fr(g, d29 * (double)rdf32(COW_IMG(0x10337e68u))));
    wr32(self + loc_14 * 4u + (uint32_t)((int32_t)(edi - (uint32_t)((int32_t)edi >> 0x1fu)) >> 1u) * 4u + 0x41cu, t33);
    d38 = fr(g, d37 - d36);
    fpush(g, d38);
    t39 = cow_call_regs(g, COW_IMG(0x10311c6cu), t33, g->ecx, g->edx, 1, 0);
    wr32(self + loc_14 * 4u + (uint32_t)((int32_t)(edi - (uint32_t)((int32_t)edi >> 0x1fu)) >> 1u) * 4u + 0x51cu, t39);
    if ((int32_t)(edi + 2u) < 16)
    {
        esi = esi + 8u;
        edi = edi + 2u;
        goto L_101cfc62;
    }
    t40 = rd32(sp0 + 4u) + 0x80u;
    wr32(sp0 + 4u, t40);
    if ((int32_t)(loc_1c + 2u) < 16)
    {
        eax = loc_1c + 2u;
        esi = t40;
        loc_1c = loc_1c + 2u;
        goto L_101cfc54;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cfa00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101cfa00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
