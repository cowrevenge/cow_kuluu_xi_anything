/* f_0x10124150 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=1 */
void cow_fn_10124150(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 - 1u > 5u) goto L_1012426d;
    t1 = rd32(COW_IMG(0x10124278u) + arg1 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x10124165u: goto L_10124165;
    case 0x10124194u: goto L_10124194;
    case 0x101241c7u: goto L_101241c7;
    case 0x101241f4u: goto L_101241f4;
    case 0x10124209u: goto L_10124209;
    case 0x10124234u: goto L_10124234;
    default: rt_fatal(g, COW_IMG(0x1012415eu), "switch");
    }
    return;
L_10124165: ;
    g->edx = in_edx;
    g->esp = sp0;
    t31 = cow_thiscall(g, COW_IMG(0x10008830u), rd32(COW_IMG(0x10455c20u)), 1, 0x4du);
    t32 = g->edx;
    if ((uint8_t)t31 != 0u) goto L_101241be;
    edx = t32;
    g->esp = sp0;
    t33 = cow_thiscall(g, COW_IMG(0x10008830u), rd32(COW_IMG(0x10455c20u)), 1, 0x4bu);
    if ((uint8_t)t33 == 0u) goto L_1012426d;
    fpush(g, (double)rdf32(COW_IMG(0x1032a3f0u)));
    return;
L_10124194: ;
    g->edx = in_edx;
    g->esp = sp0;
    t28 = cow_thiscall(g, COW_IMG(0x10008830u), rd32(COW_IMG(0x10455c20u)), 1, 0x48u);
    t29 = g->edx;
    if ((uint8_t)t28 != 0u) goto L_10124264;
    edx = t29;
    g->esp = sp0;
    t30 = cow_thiscall(g, COW_IMG(0x10008830u), rd32(COW_IMG(0x10455c20u)), 1, 0x50u);
    if ((uint8_t)t30 == 0u) goto L_1012426d;
L_101241be: ;
    fpush(g, (double)rdf32(COW_IMG(0x1032961cu)));
    return;
L_101241c7: ;
    g->edx = in_edx;
    g->esp = sp0;
    t24 = cow_thiscall(g, COW_IMG(0x10124130u), self, 1, 0xcbu);
    t25 = g->ecx;
    t26 = g->edx;
    if ((uint8_t)t24 != 0u) goto L_10124264;
    ecx = t25;
    edx = t26;
    loc_4 = 0xcdu;
L_101241de: ;
    g->esp = sp0;
    t27 = cow_thiscall(g, COW_IMG(0x10124130u), ecx, 1, loc_4);
    if ((uint8_t)t27 == 0u) goto L_1012426d;
    fpush(g, (double)rdf32(COW_IMG(0x1032961cu)));
    return;
L_101241f4: ;
    g->edx = in_edx;
    g->esp = sp0;
    t21 = cow_thiscall(g, COW_IMG(0x10124130u), self, 1, 0xc8u);
    t22 = g->ecx;
    t23 = g->edx;
    if ((uint8_t)t21 != 0u) goto L_10124264;
    ecx = t22;
    edx = t23;
    loc_4 = 0xd0u;
    goto L_101241de;
L_10124209: ;
    g->edx = in_edx;
    g->esp = sp0;
    t11 = cow_thiscall(g, COW_IMG(0x10124130u), self, 1, 0x49u);
    t12 = g->ecx;
    t13 = g->edx;
    if ((uint8_t)t11 != 0u) goto L_101241be;
    ecx = t12;
    edx = t13;
    g->edx = edx;
    g->esp = sp0;
    t14 = cow_thiscall(g, COW_IMG(0x10124130u), ecx, 1, 0xc9u);
    t15 = g->ecx;
    t16 = g->edx;
    if ((uint8_t)t14 != 0u) goto L_101241be;
    ecx = t15;
    edx = t16;
    g->edx = edx;
    g->esp = sp0;
    t17 = cow_thiscall(g, COW_IMG(0x10124130u), ecx, 1, 0x51u);
    t18 = g->ecx;
    t19 = g->edx;
    if ((uint8_t)t17 != 0u) goto L_10124264;
    ecx = t18;
    edx = t19;
    loc_4 = 0xd1u;
L_1012425b: ;
    g->esp = sp0;
    t20 = cow_thiscall(g, COW_IMG(0x10124130u), ecx, 1, loc_4);
    if ((uint8_t)t20 == 0u) goto L_1012426d;
L_10124264: ;
    fpush(g, (double)rdf32(COW_IMG(0x1032a3f0u)));
    return;
L_10124234: ;
    g->edx = in_edx;
    g->esp = sp0;
    t2 = cow_thiscall(g, COW_IMG(0x10124130u), self, 1, 0x36u);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 != 0u)
    {
        ecx = t3;
        edx = t4;
        goto L_1012424a;
    }
    ecx = t3;
    edx = t4;
    g->edx = edx;
    g->esp = sp0;
    t5 = cow_thiscall(g, COW_IMG(0x10124130u), ecx, 1, 0x2au);
    t6 = g->ecx;
    t7 = g->edx;
    if ((uint8_t)t5 == 0u) goto L_1012426d;
    ecx = t6;
    edx = t7;
L_1012424a: ;
    g->edx = edx;
    g->esp = sp0;
    t8 = cow_thiscall(g, COW_IMG(0x10124130u), ecx, 1, 0x4du);
    t9 = g->ecx;
    t10 = g->edx;
    if ((uint8_t)t8 != 0u) goto L_101241be;
    ecx = t9;
    edx = t10;
    loc_4 = 0x4bu;
    goto L_1012425b;
L_1012426d: ;
    fpush(g, (double)rdf32(COW_IMG(0x103295d8u)));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10124150(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10124150(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
