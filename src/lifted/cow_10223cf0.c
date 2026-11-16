/* f_0x10223cf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10223cf0(Guest* g)
{
    double d16;
    double d23;
    double d8;
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
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint32_t)(int16_t)arg1 == 5u) goto L_10223d6d;
    if ((uint32_t)(int16_t)arg1 == 6u) goto L_10223d06;
    if ((uint32_t)(int16_t)arg1 - 6u != 2u)
    {
        eax = (uint32_t)(int16_t)arg1 - 8u;
        edx = in_edx;
        goto L_10223def;
    }
L_10223d06: ;
    if (rd32(self + 0x14u) == 0u)
    {
        eax = rd32(self + 0x14u);
        goto L_10223d4f;
    }
    eax = rd32(self + 0x14u);
    if (eax == 1u) goto L_10223d31;
    eax = eax - 1u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        ecx = self;
        edx = in_edx;
        goto L_10223d65;
    }
    t1 = rd32(rd32(COW_IMG(0x10667170u)) + 8u);
    g->eax = rd32(COW_IMG(0x10667170u));
    t2 = rd32(COW_IMG(0x10667170u));
    g->esp = sp0;
    t3 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), in_edx, 2, t1, 0u);
    t4 = g->ecx;
    t5 = g->edx;
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x10037e90u), t4, 0);
    t7 = g->edx;
    d8 = cow_take_float(g);
    g->edx = t7;
    fpush(g, d8);
    return t6;
L_10223d31: ;
    t9 = rd32(rd32(COW_IMG(0x10667164u)) + 8u);
    g->eax = t9;
    t10 = rd32(COW_IMG(0x10667164u));
    g->esp = sp0;
    t11 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t10, 2, t9, 0u);
    t12 = g->ecx;
    t13 = g->edx;
    g->edx = t13;
    t14 = cow_thiscall(g, COW_IMG(0x10037e90u), t12, 0);
    t15 = g->edx;
    d16 = cow_take_float(g);
    g->edx = t15;
    fpush(g, d16);
    return t14;
L_10223d4f: ;
    t17 = rd32(rd32(COW_IMG(0x10667148u)) + 8u);
    g->eax = eax;
    g->esp = sp0;
    t18 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t17, 2, t17, 0u);
    t19 = g->ecx;
    t20 = g->edx;
    eax = t18;
    ecx = t19;
    edx = t20;
L_10223d65: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t21 = cow_thiscall(g, COW_IMG(0x10037e90u), ecx, 0);
    t22 = g->edx;
    d23 = cow_take_float(g);
    g->edx = t22;
    fpush(g, d23);
    return t21;
L_10223d6d: ;
    if ((uint32_t)(int16_t)arg2 != 1u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        edx = in_edx;
        goto L_10223def;
    }
    if (rd32(self + 0x14u) == 0u) goto L_10223dcd;
    eax = rd32(self + 0x14u);
    if (eax == 1u) goto L_10223da8;
    eax = eax - 1u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        edx = in_edx;
        goto L_10223def;
    }
    t24 = rd32(rd32(COW_IMG(0x10667170u)) + 8u);
    g->eax = rd32(COW_IMG(0x10667170u));
    t25 = rd32(COW_IMG(0x10667170u));
    g->esp = sp0;
    t26 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), in_edx, 2, t24, 0u);
    t27 = rd32(COW_IMG(0x10667170u));
    wr32(t27 + 0x64u, 1u);
    g->edx = t27;
    return t26;
L_10223da8: ;
    t28 = rd32(rd32(COW_IMG(0x10667164u)) + 8u);
    g->eax = rd32(COW_IMG(0x10667164u));
    t29 = rd32(COW_IMG(0x10667164u));
    g->esp = sp0;
    t30 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), in_edx, 2, t28, 0u);
    t31 = rd32(COW_IMG(0x10667164u));
    wr32(t31 + 0x6cu, 1u);
    g->edx = t31;
    return t30;
L_10223dcd: ;
    t32 = rd32(rd32(COW_IMG(0x10667148u)) + 8u);
    g->eax = rd32(COW_IMG(0x10667148u));
    t33 = rd32(COW_IMG(0x10667148u));
    g->esp = sp0;
    t34 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), in_edx, 2, t32, 0u);
    t35 = rd32(COW_IMG(0x10667148u));
    wr32(t35 + 0x68u, 1u);
    eax = t34;
    edx = t35;
L_10223def: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10223cf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10223cf0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
