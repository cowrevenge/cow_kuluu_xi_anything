/* f_0x10198080 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10198080(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
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
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd8(COW_IMG(0x10379a28u) + rd32(sp0 + 4u) * 4u) != 0x33u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10379a28u) + rd32(sp0 + 4u) * 4u);
        edi = rd32(sp0 + 4u);
        goto L_10198137;
    }
    eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10379a28u) + rd32(sp0 + 4u) * 4u);
    edi = rd32(sp0 + 4u);
    if ((int8_t)rd8(COW_IMG(0x10379a29u) + edi * 4u) >= 0)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10379a29u) + edi * 4u);
        ebx = COW_IMG(0x10379a29u) + edi * 4u;
        goto L_101980c7;
    }
    if ((int32_t)(edi - 0x33u) <= (int32_t)rd32(self + 0x3cu))
    {
        eax = edi - 0x33u;
        goto L_101980bd;
    }
    eax = edi - 0x33u;
    wr32(self + 0x3cu, eax);
    return eax;
L_101980bd: ;
    wr32(self + 0x3cu, eax - 1u);
    return eax - 1u;
L_101980c7: ;
    if ((uint8_t)eax == 0xbu)
    {
        edx = in_edx;
        goto L_1019822c;
    }
    t1 = rd32(self + 0x38u);
    g->ecx = t1;
    g->edx = (uint32_t)(int8_t)eax;
    g->esp = sp0 - 0xcu;
    t2 = cow_cdecl(g, COW_IMG(0x10193960u), 2, (uint32_t)(int8_t)eax, t1);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        ecx = t3;
        t6 = rd32(self + 0x38u);
        edx = t6;
        loc_10 = 1u;
        loc_14 = t6;
        loc_18 = (uint32_t)(int8_t)rd8(ebx);
    }
    else
    {
        edx = t4;
        t5 = rd32(self + 0x38u);
        ecx = (uint32_t)(int8_t)rd8(ebx);
        loc_10 = 0u;
        loc_14 = t5;
        loc_18 = (uint32_t)(int8_t)rd8(ebx);
    }
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t7 = cow_cdecl(g, COW_IMG(0x10193980u), 3, loc_18, loc_14, loc_10);
    t8 = g->edx;
    wr32(self + 0x38u, t7);
    if (rd8(ebx) != 2u)
    {
        eax = (t7 & 0xffffff00u) | rd8(ebx);
        edx = t8;
        goto L_1019822c;
    }
    edx = t8;
    t9 = rd32(self + 0x38u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t10 = cow_cdecl(g, COW_IMG(0x10193960u), 2, 2u, t9);
    t11 = g->edx;
    if ((uint8_t)t10 != 0u)
    {
        eax = t10;
        edx = t11;
        goto L_1019822c;
    }
    t12 = rd32(self + 0x40u) == 0u;
    t13 = rd32(self + 0x40u);
    wr32(self + 0x40u, t12);
    g->edx = t12;
    return t13;
L_10198137: ;
    t14 = COW_IMG(0x10379a29u) + edi * 4u;
    t15 = rd8(COW_IMG(0x10379a29u) + edi * 4u);
    wr32(sp0 + 4u, t14);
    if ((uint8_t)t15 == 0xbu)
    {
        eax = (uint8_t)eax;
        ecx = t14;
        edx = (in_edx & 0xffffff00u) | t15;
        goto L_101981eb;
    }
    eax = (uint8_t)eax;
    ecx = t14;
    edx = (in_edx & 0xffffff00u) | t15;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t16 = cow_cdecl(g, COW_IMG(0x101939a0u), 2, eax, self + 0x30u);
    t17 = g->ecx;
    t18 = g->edx;
    if ((uint8_t)t16 == 0u) goto L_10198199;
    ecx = t17;
    edx = t18;
    t19 = rd8(COW_IMG(0x10379a28u) + edi * 4u);
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x101939d0u), 3, t19, self + 0x30u, 0u);
    t20 = rd32(self + 0x38u);
    t21 = (uint32_t)(int8_t)rd8(rd32(sp0 + 4u));
    g->edx = rd32(sp0 + 4u);
    t22 = rd32(sp0 + 4u);
    g->esp = sp0 - 0x18u;
    t23 = cow_cdecl(g, COW_IMG(0x10193980u), 3, t21, t20, 1u);
    t24 = g->edx;
    wr32(self + 0x38u, t23);
    g->edx = t24;
    return t23;
L_10198199: ;
    t25 = rd32(self + 0x38u);
    t26 = (uint32_t)(int8_t)rd8(rd32(sp0 + 4u));
    g->edx = rd32(sp0 + 4u);
    t27 = rd32(sp0 + 4u);
    g->esp = sp0 - 0xcu;
    t28 = cow_cdecl(g, COW_IMG(0x10193960u), 2, t26, t25);
    t29 = g->edx;
    if ((uint8_t)t28 == 0u)
    {
        eax = t28;
        edx = t29;
        goto L_101981d0;
    }
    t30 = rd32(self + 0x38u);
    t31 = (uint32_t)(int8_t)rd8(rd32(sp0 + 4u));
    g->edx = rd32(sp0 + 4u);
    t32 = rd32(sp0 + 4u);
    g->esp = sp0 - 0xcu;
    t33 = cow_cdecl(g, COW_IMG(0x10193980u), 3, t31, t30, 0u);
    t34 = g->edx;
    wr32(self + 0x38u, t33);
    g->edx = t34;
    return t33;
L_101981d0: ;
    t35 = rd8(COW_IMG(0x10379a28u) + edi * 4u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t36 = cow_cdecl(g, COW_IMG(0x101939d0u), 3, t35, self + 0x30u, 1u);
    t37 = g->edx;
    g->edx = t37;
    return t36;
L_101981eb: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t38 = cow_cdecl(g, COW_IMG(0x101939a0u), 2, eax, self + 0x30u);
    t39 = g->ecx;
    t40 = g->edx;
    if ((uint8_t)t38 == 0u)
    {
        ecx = t39;
        edx = t40;
        goto L_10198217;
    }
    eax = t38;
    ecx = t39;
    t41 = rd8(COW_IMG(0x10379a28u) + edi * 4u);
    g->eax = eax;
    g->edx = t41;
    g->esp = sp0 - 0xcu;
    t42 = cow_cdecl(g, COW_IMG(0x101939d0u), 3, t41, self + 0x30u, 0u);
    t43 = g->edx;
    g->edx = t43;
    return t42;
L_10198217: ;
    t44 = rd8(COW_IMG(0x10379a28u) + edi * 4u);
    g->eax = t44;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t45 = cow_cdecl(g, COW_IMG(0x101939d0u), 3, t44, self + 0x30u, 1u);
    t46 = g->edx;
    eax = t45;
    edx = t46;
L_1019822c: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10198080(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10198080(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
