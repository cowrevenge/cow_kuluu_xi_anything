/* f_0x102e5306 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102e5306(Guest* g)
{
    unsigned cf;
    double d12;
    double d18;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    double x1;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd32(self + 0x18u) + rd32(self + 0x1058u) * 8u + rd32(self + 0x1054u) * arg2 + rd32(self + 0x1050u) * rd32(sp0 + 4u);
    t2 = rd32(self + 0x18u);
    t3 = rd32(self + 0x1054u);
    t4 = rd32(self + 0x1050u);
    t5 = rd32(sp0 + 4u);
    t6 = rd32(sp0 + 0xcu);
    t7 = rd32(self + 0x1058u);
    wr32(sp0 + 4u, t1);
    if (t2 + t3 * arg2 + t4 * t5 >= t2 + t7 * 8u + t3 * arg2 + t4 * t5)
    {
        eax = t1;
        edx = in_edx;
        edi = t6;
    }
    else
    {
        esi = t2 + t3 * arg2 + t4 * t5;
        edi = t6;
        ecx = self;
L_102e5345: ;
        t8 = rd32(esi);
        t9 = rd32(esi + 4u);
        g->esp = sp0 - 0x14u;
        t10 = cow_call_regs(g, COW_IMG(0x103152d0u), t8, (ecx & 0xffffff00u) | 0x20u, t9, 1, 0);
        t11 = g->edx;
        d12 = (double)rdf32(COW_IMG(0x10329e9cu));
        wr32(sp0 + 0xcu, (uint16_t)t10);
        if ((int32_t)(uint16_t)t10 >= 0)
        {
            edx = t11;
            pf = PARITY((uint8_t)t10);
            zf = (uint16_t)t10 == 0u;
            sf = (int32_t)(uint16_t)t10 < 0;
            x1 = (double)(int32_t)rd32(sp0 + 0xcu);
            x0 = d12;
        }
        else
        {
            edx = t11;
            pf = PARITY((uint8_t)t10);
            zf = (uint16_t)t10 == 0u;
            sf = (int32_t)(uint16_t)t10 < 0;
            x1 = (double)(int32_t)rd32(sp0 + 0xcu);
            x0 = d12;
            x1 = fr(g, x1 + (double)rdf32(COW_IMG(0x10345da4u)));
        }
        wrf32(edi, (float)fr(g, x1 * x0));
        t13 = rd32(esi);
        t14 = rd32(esi + 4u);
        eax = t13;
        ecx = t14;
        cf = 0u;
        of = 0u;
        { /* shrd eax, ecx, 0x10 */ { unsigned c = (unsigned)(0x10u) & 31u; if (c) { uint32_t a = eax, b = ecx, r; r = (a >> c) | (b << (32 - c)); cf = (a >> (c - 1)) & 1u; of = ((r ^ a) >> 31) & 1u; zf = (uint32_t)r == 0; sf = ((r) >> 31) & 1u; pf = PARITY(r); eax = (uint32_t)(r); } } }
        wr32(sp0 + 0xcu, (uint16_t)eax);
        if ((int32_t)(uint16_t)eax >= 0)
        {
            ecx = ecx >> 0x10u;
            x1 = (double)(int32_t)rd32(sp0 + 0xcu);
        }
        else
        {
            ecx = ecx >> 0x10u;
            x1 = (double)(int32_t)rd32(sp0 + 0xcu);
            x1 = fr(g, x1 + (double)rdf32(COW_IMG(0x10345da4u)));
        }
        wrf32(edi + 4u, (float)fr(g, x1 * x0));
        t15 = rd32(esi);
        wr32(sp0 + 0xcu, (uint16_t)t15);
        if ((int32_t)(uint16_t)t15 >= 0)
        {
            x1 = (double)(int32_t)rd32(sp0 + 0xcu);
        }
        else
        {
            x1 = (double)(int32_t)rd32(sp0 + 0xcu);
            x1 = fr(g, x1 + (double)rdf32(COW_IMG(0x10345da4u)));
        }
        t16 = rd32(sp0 + 4u);
        wrf32(edi + 8u, (float)fr(g, x1 * x0));
        t17 = rd16(esi + 6u);
        wr32(sp0 + 0xcu, t17);
        d18 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * x0);
        wrf32(edi + 0xcu, (float)d18);
        if (esi + 8u < t16)
        {
            esi = esi + 8u;
            edi = edi + 0x10u;
            goto L_102e5345;
        }
        eax = t17;
        edi = edi + 0x10u;
    }
    if (rd32(self + 0x10u) != 0u)
    {
        t19 = edi - (rd32(self + 0x1058u) << 4u);
        g->eax = rd32(self + 0x1058u) << 4u;
        g->edx = edx;
        t20 = rd32(self + 0x1058u);
        g->esp = sp0 - 0x10u;
        t21 = cow_thiscall(g, COW_IMG(0x102e23f6u), self, 1, t19);
        t22 = g->edx;
        eax = t21;
        edx = t22;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e5306(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e5306(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
