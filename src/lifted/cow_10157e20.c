/* f_0x10157e20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10157e20(Guest* g)
{
    double d24;
    double d25;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd8(self + 0x54u) != 0u) goto L_10157f91;
    eax = (in_eax & 0xffffff00u) | rd8(self + 0x54u);
    if (rd8(COW_IMG(0x10482f18u)) != 0u) goto L_10157f91;
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10482f18u));
    if (rd16(self + 0x68u) != 0u)
    {
        ecx = self;
        edx = in_edx;
        goto L_10157e77;
    }
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x1015ecc0u), COW_IMG(0x10621838u), 1, 0x20000u);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u) goto L_10157f91;
    eax = t1;
    edx = t2;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x1015ecc0u), COW_IMG(0x10621838u), 1, 0x20000000u);
    t4 = g->ecx;
    t5 = g->edx;
    if ((uint8_t)t3 != 0u) goto L_10157f91;
    eax = t3;
    ecx = t4;
    edx = t5;
    if (rd16(self + 0x68u) == 0u) goto L_10157e96;
L_10157e77: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t6 = cow_stdcall(g, COW_IMG(0x10157d20u), 0);
    t7 = g->edx;
    if ((uint8_t)t6 != 0u) goto L_10157e8e;
    eax = t6;
    edx = t7;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t8 = cow_thiscall(g, COW_IMG(0x1015edb0u), COW_IMG(0x10621838u), 0);
    t9 = g->ecx;
    t10 = g->edx;
    if ((uint8_t)t8 != 0u)
    {
        eax = t8;
        ecx = t9;
        edx = t10;
        goto L_10157e96;
    }
L_10157e8e: ;
    wr16(self + 0x68u, 0u);
    return;
L_10157e96: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t11 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0xfu, 1u, 0xffffffffu);
    t12 = g->ecx;
    t13 = g->edx;
    if ((uint8_t)t11 == 1u)
    {
        eax = t11;
        edx = t13;
        goto L_10157f6e;
    }
    eax = t11;
    ecx = t12;
    edx = t13;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t14 = cow_call_regs(g, COW_IMG(0x10087070u), eax, g->ecx, g->edx, 1, 1, 0u);
    t15 = g->ecx;
    t16 = g->edx;
    if ((uint8_t)t14 != 0u)
    {
        eax = t14;
        edx = t16;
        goto L_10157f6e;
    }
    ecx = t15;
    edx = t16;
    if (rd8(rd32(COW_IMG(0x104e1d4cu)) + 0x4eu) == 0u)
    {
        eax = rd32(COW_IMG(0x104e1d4cu));
        ecx = (ecx & 0xffffff00u) | rd8(rd32(COW_IMG(0x104e1d4cu)) + 0x4eu);
        goto L_10157ee7;
    }
    eax = rd32(COW_IMG(0x104e1d4cu));
    ecx = (ecx & 0xffffff00u) | rd8(rd32(COW_IMG(0x104e1d4cu)) + 0x4eu);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t17 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x8cu, 1u, 0xffffffffu);
    t18 = g->ecx;
    t19 = g->edx;
    if ((uint8_t)t17 == 1u)
    {
        eax = t17;
        edx = t19;
        goto L_10157f6e;
    }
    eax = t17;
    ecx = t18;
    edx = t19;
L_10157ee7: ;
    if (rd8(self + 0x59u) != 0u) goto L_10157f91;
    if (rd32(self + 0xc4u) != 0u) goto L_10157f91;
    eax = rd32(self + 0xc4u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t20 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x78u, 0u, 0xffffffffu);
    t21 = g->ecx;
    t22 = g->edx;
    if ((uint8_t)t20 != 1u) goto L_10157f91;
    eax = t20;
    ecx = t21;
    edx = t22;
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10037e90u), ecx, 0);
    t23 = g->edx;
    wr16(self + 0x68u, (uint16_t)(rd16(self + 0x68u) + 1u));
    if (rd16(self + 0x68u) < 3u)
    {
        edx = t23;
    }
    else
    {
        edx = t23;
        wr16(self + 0x68u, 0u);
    }
    if (rd16(self + 0x68u) == 1u)
    {
        eax = rd16(self + 0x68u) - 1u;
        goto L_10157f59;
    }
    eax = rd16(self + 0x68u) - 1u;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_10157f44;
    }
    eax = eax - 1u;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1015e850u), COW_IMG(0x10621838u), 1, 0u);
    d24 = cow_take_float(g);
    d25 = cow_take_float(g);
    fpush(g, d24);
    fpush(g, d25);
    return;
L_10157f44: ;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1015dbb0u), COW_IMG(0x10621838u), 2, rd32(COW_IMG(0x106671b8u)), 1u);
    return;
L_10157f59: ;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1015dbb0u), COW_IMG(0x10621838u), 2, rd32(COW_IMG(0x1062193cu)), 1u);
    return;
L_10157f6e: ;
    if (rd16(self + 0x68u) != 0u)
    {
        wr16(self + 0x68u, 0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t26 = cow_thiscall(g, COW_IMG(0x1015e830u), COW_IMG(0x10621838u), 1, 0u);
        t27 = g->ecx;
        t28 = g->edx;
        g->esp = sp0 - 8u;
        cow_stdcall(g, COW_IMG(0x10123ea0u), 0);
    }
L_10157f91: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10157e20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10157e20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
