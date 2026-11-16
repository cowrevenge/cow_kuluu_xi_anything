/* f_0x100605e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100605e0(Guest* g)
{
    double d13;
    double d18;
    double d29;
    double d3;
    double d4;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
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
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    t1 = (uint32_t)(int16_t)rd16(self + 0x3cu);
    t2 = rd8(self + 0x46u);
    g->ecx = t2;
    d3 = fr(g, fr(g, (double)(int32_t)t1 * fr(g, (double)rdf32(self + 0x34u) / (double)rdf32(self + 0x38u))) + (double)(int32_t)t2);
    d4 = fr(g, (double)rdf32(self + 0x34u) / (double)rdf32(self + 0x38u));
    fpush(g, d3);
    g->esp = sp0 - 0xcu;
    t5 = cow_call_regs(g, COW_IMG(0x10311c6cu), t1, g->ecx, g->edx, 1, 0);
    t6 = g->ecx;
    t7 = (uint32_t)(int16_t)rd16(self + 0x3eu);
    t8 = rd8(self + 0x45u);
    d9 = fr(g, fr(g, (double)(int32_t)t7 * d4) + (double)(int32_t)t8);
    fpush(g, d9);
    t10 = cow_call_regs(g, COW_IMG(0x10311c6cu), t8, g->ecx, g->edx, 1, 0);
    t11 = (uint32_t)(int16_t)rd16(self + 0x40u);
    t12 = rd8(self + 0x44u);
    g->edx = t12;
    d13 = fr(g, fr(g, (double)(int32_t)t11 * d4) + (double)(int32_t)t12);
    fpush(g, d13);
    t14 = cow_call_regs(g, COW_IMG(0x10311c6cu), t10, g->ecx, g->edx, 1, 0);
    t15 = g->edx;
    t16 = (uint32_t)(int16_t)rd16(self + 0x42u);
    t17 = rd8(self + 0x47u);
    g->ecx = t17;
    g->edx = t15;
    d18 = fr(g, fr(g, (double)(int32_t)t16 * d4) + (double)(int32_t)t17);
    fpush(g, d18);
    t19 = cow_call_regs(g, COW_IMG(0x10311c6cu), t16, g->ecx, g->edx, 1, 0);
    t20 = g->ecx;
    t21 = g->edx;
    if (rd32(self + 0x48u) == 0xfu)
    {
        eax = rd32(self + 0x48u);
        edx = t21;
        loc_8 = ((t5 << 0x10u | (uint8_t)t10 << 8u | (uint8_t)t14) & 0xffffffu) | (uint8_t)t19 << 0x18u;
        goto L_100606a8;
    }
    eax = rd32(self + 0x48u);
    ecx = t20;
    edx = t21;
    loc_8 = ((t5 << 0x10u | (uint8_t)t10 << 8u | (uint8_t)t14) & 0xffffffu) | (uint8_t)t19 << 0x18u;
    if (eax == 0x51u) goto L_1006069c;
    if (eax != 0x72u) goto L_100606b5;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0xcu;
    t22 = cow_cdecl(g, COW_IMG(0x10015050u), 1, loc_8);
    t23 = g->ecx;
    eax = t22;
    ecx = t23;
L_100606b2: ;
L_100606b5: ;
    t28 = rd32(COW_IMG(0x1047bfa8u));
    d29 = fr(g, (double)rdf32(self + 0x34u) - (double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xeb0u));
    wrf32(self + 0x34u, (float)d29);
    if (!(d29 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d29, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        edx = t28;
        goto L_1006073a;
    }
    edx = t28;
    if (rd32(self + 0x48u) == 0xfu)
    {
        eax = rd32(self + 0x48u);
        goto L_1006071e;
    }
    eax = rd32(self + 0x48u);
    if (eax == 0x51u) goto L_10060702;
    if (eax != 0x72u) goto L_1006072a;
    t30 = rd32(self + 0x44u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10015050u), 1, t30);
    t31 = g->edx;
    g->eax = rd32(self);
    g->edx = t31;
    t32 = rd32(self);
    t33 = cow_thiscall(g, rd32(t32 + 0x18u), self, 1, 1u);
    t34 = g->edx;
    g->edx = t34;
    return (t33 & 0xffffff00u) | 1u;
L_1006069c: ;
    g->eax = loc_8;
    g->ecx = ecx;
    g->esp = sp0 - 0xcu;
    t24 = cow_cdecl(g, COW_IMG(0x10014ef0u), 1, loc_8);
    t25 = g->ecx;
    eax = t24;
    ecx = t25;
    goto L_100606b2;
L_100606a8: ;
    g->eax = eax;
    g->ecx = loc_8;
    g->esp = sp0 - 0xcu;
    t26 = cow_cdecl(g, COW_IMG(0x10014f20u), 1, loc_8);
    t27 = g->ecx;
    eax = t26;
    ecx = t27;
    goto L_100606b2;
L_10060702: ;
    t35 = rd32(self + 0x44u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10014ef0u), 1, t35);
    t36 = g->edx;
    g->eax = rd32(self);
    g->edx = t36;
    t37 = rd32(self);
    t38 = cow_thiscall(g, rd32(t37 + 0x18u), self, 1, 1u);
    t39 = g->edx;
    g->edx = t39;
    return (t38 & 0xffffff00u) | 1u;
L_1006071e: ;
    t40 = rd32(self + 0x44u);
    g->edx = t40;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10014f20u), 1, t40);
    t41 = g->edx;
    edx = t41;
L_1006072a: ;
    g->eax = rd32(self);
    g->edx = edx;
    t42 = rd32(self);
    g->esp = sp0 - 0xcu;
    t43 = cow_thiscall(g, rd32(t42 + 0x18u), self, 1, 1u);
    t44 = g->edx;
    g->edx = t44;
    return (t43 & 0xffffff00u) | 1u;
L_1006073a: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100605e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100605e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
