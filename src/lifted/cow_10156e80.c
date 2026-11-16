/* f_0x10156e80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10156e80(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        edx = rd32(COW_IMG(0x10456a28u));
        goto L_10156ea4;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    edx = rd32(COW_IMG(0x10456a28u));
    if (eax == 2u) goto L_10156e9d;
    if (eax != 3u)
    {
        cf = eax < 3u;
        zf = eax == 3u;
        goto L_10156ea7;
    }
L_10156e9d: ;
    eax = 1u;
L_10156ead: ;
    t1 = rd32(COW_IMG(0x10156fb8u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x10156eb4u: goto L_10156eb4;
    case 0x10156ed6u: goto L_10156ed6;
    case 0x10156efcu: goto L_10156efc;
    case 0x10156f5au: goto L_10156f5a;
    default: rt_fatal(g, COW_IMG(0x10156eadu), "switch");
    }
    return;
L_10156ea4: ;
    cf = eax < 3u;
    zf = eax == 3u;
L_10156ea7: ;
    if (!cf && !zf) goto L_10156fb2;
    goto L_10156ead;
L_10156eb4: ;
    g->eax = arg2;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t26 = cow_stdcall(g, COW_IMG(0x10257d60u), 2, arg2, 0u);
    t27 = g->edx;
    g->edx = t27;
    cow_thiscall(g, COW_IMG(0x10258c40u), arg1, 1, t26);
    t28 = g->edx;
    g->edx = t28;
    return;
L_10156ed6: ;
    g->eax = eax;
    g->edx = arg2;
    g->esp = sp0 - 0x10u;
    t23 = cow_stdcall(g, COW_IMG(0x10257d60u), 2, arg2, 0u);
    t24 = g->edx;
    g->edx = t24;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x102588c0u), arg1, 3, 3u, t23, 0xffffffffu);
    t25 = g->edx;
    g->edx = t25;
    return;
L_10156efc: ;
    if (arg3 != 0u) goto L_10156f35;
    g->eax = arg3;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t13 = cow_stdcall(g, COW_IMG(0x10257d60u), 2, arg2, 1u);
    t14 = g->edx;
    g->edx = t14;
    g->esp = sp0 - 0x10u;
    t15 = cow_stdcall(g, COW_IMG(0x10257d40u), 2, arg2, 0u);
    t16 = g->edx;
    g->edx = t16;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x102586d0u), arg1, 3, 0u, t15, t13);
    t17 = g->edx;
    g->edx = t17;
    return;
L_10156f35: ;
    g->eax = arg3;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t18 = cow_stdcall(g, COW_IMG(0x10257d60u), 2, arg2, 3u);
    t19 = g->edx;
    g->edx = t19;
    g->esp = sp0 - 0x10u;
    t20 = cow_stdcall(g, COW_IMG(0x10257d40u), 2, arg2, 2u);
    t21 = g->edx;
    g->edx = t21;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x102586d0u), arg1, 3, 0u, t20, t18);
    t22 = g->edx;
    g->edx = t22;
    return;
L_10156f5a: ;
    if (arg3 != 0u)
    {
        g->eax = arg3;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t6 = cow_stdcall(g, COW_IMG(0x10257d60u), 2, arg2, 5u);
        t7 = g->edx;
        g->edx = t7;
        g->esp = sp0 - 0x10u;
        t8 = cow_stdcall(g, COW_IMG(0x10257d40u), 2, arg2, 4u);
        t9 = g->edx;
        eax = t8;
        edx = t9;
        loc_10 = t6;
        loc_14 = t8;
        loc_18 = 3u;
    }
    else
    {
        g->eax = arg3;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t2 = cow_stdcall(g, COW_IMG(0x10257d60u), 2, arg2, 2u);
        t3 = g->edx;
        g->edx = t3;
        g->esp = sp0 - 0x10u;
        t4 = cow_stdcall(g, COW_IMG(0x10257d40u), 2, arg2, 1u);
        t5 = g->edx;
        eax = t4;
        edx = t5;
        loc_10 = t2;
        loc_14 = t4;
        loc_18 = 0u;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t10 = cow_stdcall(g, COW_IMG(0x10257d40u), 2, arg2, loc_18);
    t11 = g->edx;
    g->edx = t11;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10258a80u), arg1, 5, 3u, 0u, t10, loc_14, loc_10);
    t12 = g->edx;
    edx = t12;
L_10156fb2: ;
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10156e80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10156e80(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
