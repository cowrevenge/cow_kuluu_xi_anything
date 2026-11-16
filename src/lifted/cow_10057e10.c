/* f_0x10057e10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10057e10(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d16;
    double d21;
    double d22;
    double d23;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 20u);

    wr32(sp0 - 0xcu, in_esi);
    if (rd8(self + 0x145u) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x145u);
        goto L_10057e2e;
    }
    wr32(sp0 - 0x10u, 1u);
    g->eax = rd32(self);
    g->edx = in_edx;
    t1 = rd32(self);
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, rd32(t1 + 0x18u), self, 1, 1u);
    t3 = g->edx;
    eax = t2;
    edx = t3;
L_10057e27: ;
    g->esi = rd32(sp0 - 0xcu);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_10057e2e: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_thiscall(g, COW_IMG(0x10071060u), self + 0x80u, 0);
    t5 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        eax = t4;
        edx = t5;
        goto L_10057ef9;
    }
    eax = t4;
    edx = t5;
    wr32(sp0 - 8u, 0u);
    if (rd8(self + 0x140u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x140u);
        d7 = fr(g, (double)rdf32(self + 0x98u) - (double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xeb0u));
        d8 = (double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xeb0u);
        wrf32(self + 0x98u, (float)d7);
        x0 = d8;
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x140u);
        d6 = fr(g, (double)rdf32(self + 0x98u) - (double)(int32_t)rd32(COW_IMG(0x1065cb0cu)));
        wrf32(self + 0x98u, (float)d6);
        x0 = (double)(int32_t)rd32(COW_IMG(0x1065cb0cu));
    }
    d9 = fr(g, x0 + (double)rdf32(self + 0x94u));
    wrf32(self + 0x94u, (float)d9);
    wr32(COW_IMG(0x1047bef8u), 0u);
L_10057e9d: ;
    d10 = (double)rdf32(self + 0x98u);
    if (!(d10 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d10, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d10, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        d11 = (double)(float)-(double)rdf32(self + 0x98u);
        wrf32(sp0 - 8u, (float)d11);
        wr32(self + 0x98u, 0u);
    }
    d12 = (double)rdf32(self + 0x98u);
    if (rd32(self + 0x88u) != 0u)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d12, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        ecx = rd32(self + 0x88u);
        goto L_10057f00;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d12, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    if (PARITY(eax >> 8u & 0x44u)) goto L_10057f8c;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t13 = cow_thiscall(g, COW_IMG(0x10057c20u), self, 0);
    t14 = g->edx;
    if ((uint8_t)t13 == 0u)
    {
        eax = t13;
        edx = t14;
    }
    else
    {
        eax = t13;
        edx = t14;
        wr8(self + 0x145u, 1u);
    }
L_10057ef9: ;
    g->esi = rd32(sp0 - 0xcu);
    g->edx = edx;
    return eax & 0xffffff00u;
L_10057f00: ;
    if (PARITY(eax >> 8u & 0x44u)) goto L_10057f8c;
    if (ecx == 0u) goto L_10057f8c;
L_10057f0d: ;
    t15 = (uint32_t)(int16_t)rd16(ecx + 4u);
    wr32(sp0 - 4u, t15);
    d16 = fr(g, fr(g, (double)(int32_t)t15 * (double)rdf32(self + 0x9cu)) + (double)rdf32(self + 0x98u));
    wrf32(self + 0x98u, (float)d16);
    g->eax = eax;
    g->edx = t15;
    g->esp = sp0 - 0xcu;
    t17 = cow_thiscall(g, COW_IMG(0x10057fb0u), self, 0);
    t18 = g->edx;
    if (t17 == 1u)
    {
        eax = t17 - 1u;
        edx = t18;
        goto L_10057e27;
    }
    eax = t17 - 1u;
    edx = t18;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_10057ef9;
    }
    if ((uint8_t)rd32(rd32(self + 0x88u)) == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(rd32(self + 0x88u));
        ecx = rd32(self + 0x88u);
        eax = ecx + (eax >> 8u & 0x1fu) * 4u;
    }
    wr32(sp0 - 0x10u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t19 = cow_thiscall(g, COW_IMG(0x10062de0u), self, 1, eax);
    t20 = g->edx;
    d21 = (double)rdf32(self + 0x98u);
    if (d21 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (t19 & 0xffff0000u) | (uint16_t)cow_fsw(g, d21, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        edx = t20;
        goto L_10057f7c;
    }
    eax = (t19 & 0xffff0000u) | (uint16_t)cow_fsw(g, d21, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    edx = t20;
    if (rd32(self + 0x88u) != 0u)
    {
        ecx = rd32(self + 0x88u);
        goto L_10057f0d;
    }
L_10057f8c: ;
    d23 = (double)rdf32(self + 0x98u);
    if (d23 < (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d23, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_10057e9d;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d23, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    g->esi = rd32(sp0 - 0xcu);
    g->edx = edx;
    return eax & 0xffffff00u;
L_10057f7c: ;
    d22 = fr(g, (double)rdf32(self + 0x98u) - (double)rdf32(sp0 - 8u));
    wrf32(self + 0x98u, (float)d22);
    goto L_10057f8c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10057e10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10057e10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
