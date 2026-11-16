/* f_0x1019ead0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1019ead0(Guest* g)
{
    double d1;
    double d12;
    double d13;
    double d16;
    double d19;
    double d20;
    double d5;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t10;
    uint32_t t11;
    uint32_t t14;
    uint32_t t15;
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
    uint32_t t21;
    uint32_t t3;
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 16u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    d1 = (double)rdf32(self + 0x48u);
    if (d1 < (double)rdf32(COW_IMG(0x103295d8u))) goto L_1019eba4;
    eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    if (rd8(self + 0x54u) == 1u) goto L_1019eba4;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t2 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    d5 = cow_take_float(g);
    g->edx = t4;
    fpush(g, d5);
    t6 = cow_call_regs(g, COW_IMG(0x10311c6cu), t2, g->ecx, g->edx, 1, 0);
    t7 = g->edx;
    wr32(sp0 - 4u, (uint32_t)(int16_t)t6);
    d8 = (double)(float)fr(g, (double)(int32_t)(uint32_t)(int16_t)t6 + (double)rdf32(self + 0x44u));
    wrf32(sp0 - 4u, (float)d8);
    d9 = fr(g, d8 / (double)rdf32(self + 0x48u));
    wr32(self + 0x44u, cow_f2bits(d8));
    g->edx = t7;
    fpush(g, d9);
    t10 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint32_t)(int16_t)t6, g->ecx, g->edx, 1, 0);
    t11 = g->edx;
    d12 = (double)rdf32(self + 0x48u);
    d13 = (double)rdf32(COW_IMG(0x1032961cu));
    wr32(self + 0x40u, t10);
    if (!(d12 < d13))
    {
        ecx = t10;
        edx = t11;
        goto L_1019eb73;
    }
    eax = (t10 & 0xffff0000u) | (uint16_t)cow_fsw(g, d12, d13, 0u);
    ecx = t10;
    if ((int32_t)ecx < 14) goto L_1019eba4;
L_1019eb3b: ;
    t14 = rd32(self + 0x3cu);
    wr32(sp0 - 0xcu, t14);
    t15 = rd32(self + 0x40u) - 0xeu;
    d16 = fr(g, (double)rdf32(self + 0x44u) - fr(g, (double)rdf32(self + 0x48u) * (double)rdf32(COW_IMG(0x10337190u))));
    wr32(self + 0x40u, t15);
    wrf32(self + 0x44u, (float)d16);
    g->esp = sp0 - 8u;
    t17 = cow_call_regs(g, COW_IMG(0x1019ed70u), eax, g->ecx, g->edx, 0, 1, t14);
    wr32(self + 0x3cu, t17);
    if (t17 == 0u) goto L_1019eba0;
    eax = t17;
    if ((int32_t)rd32(self + 0x40u) >= 14) goto L_1019eb3b;
    g->esi = rd32(sp0 - 8u);
    return 1u;
L_1019eb73: ;
    if ((int32_t)ecx < 14) goto L_1019eba4;
    t18 = rd32(self + 0x3cu);
    d19 = fr(g, (double)rdf32(self + 0x48u) * (double)rdf32(COW_IMG(0x10337190u)));
    wr32(self + 0x40u, ecx - 0xeu);
    wr32(sp0 - 0xcu, t18);
    d20 = fr(g, (double)rdf32(sp0 - 4u) - d19);
    wrf32(self + 0x44u, (float)d20);
    g->esp = sp0 - 8u;
    t21 = cow_call_regs(g, COW_IMG(0x1019ed70u), t18, g->ecx, g->edx, 0, 1, t18);
    wr32(self + 0x3cu, t21);
    if (t21 != 0u) goto L_1019eba4;
L_1019eba0: ;
    wr8(self + 0x54u, 1u);
L_1019eba4: ;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019ead0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1019ead0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
