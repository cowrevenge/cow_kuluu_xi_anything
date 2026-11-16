/* f_0x101b82a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101b82a0(Guest* g)
{
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint32_t)(int16_t)arg1 - 3u > 0x1cu)
    {
        eax = (uint32_t)(int16_t)arg1 - 3u;
        edx = in_edx;
        goto L_101b8388;
    }
    t1 = rd32(COW_IMG(0x101b838cu) + rd8(COW_IMG(0x101b83b4u) + (uint32_t)(int16_t)arg1 - 3u) * 4u);
    switch (t1 - RD)
    {
    case 0x101b82c0u: goto L_101b82c0;
    case 0x101b82d4u: goto L_101b82d4;
    case 0x101b82e8u: goto L_101b82e8;
    case 0x101b82fcu: goto L_101b82fc;
    case 0x101b8310u: goto L_101b8310;
    case 0x101b8324u: goto L_101b8324;
    case 0x101b8338u: goto L_101b8338;
    case 0x101b834cu: goto L_101b834c;
    case 0x101b8377u: goto L_101b8377;
    case 0x101b8388u: eax = (uint32_t)(int16_t)arg1 - 3u; edx = in_edx; goto L_101b8388;
    default: rt_fatal(g, COW_IMG(0x101b82b9u), "switch");
    }
    return 0;
L_101b82c0: ;
    g->eax = (uint32_t)(int16_t)arg1 - 3u;
    g->edx = rd32(rd32(COW_IMG(0x10662d40u)));
    t32 = rd32(rd32(COW_IMG(0x10662d40u)));
    g->esp = sp0;
    t33 = cow_thiscall(g, rd32(t32 + 8u), rd32(COW_IMG(0x10662d40u)), 3, 3u, 0u, 0u);
    t34 = g->edx;
    g->edx = t34;
    return t33;
L_101b82d4: ;
    g->eax = rd32(rd32(COW_IMG(0x10662d40u)));
    g->edx = in_edx;
    t29 = rd32(rd32(COW_IMG(0x10662d40u)));
    g->esp = sp0;
    t30 = cow_thiscall(g, rd32(t29 + 8u), rd32(COW_IMG(0x10662d40u)), 3, 2u, 0u, 0u);
    t31 = g->edx;
    g->edx = t31;
    return t30;
L_101b82e8: ;
    g->eax = (uint32_t)(int16_t)arg1 - 3u;
    g->edx = rd32(rd32(COW_IMG(0x10662d40u)));
    t26 = rd32(rd32(COW_IMG(0x10662d40u)));
    g->esp = sp0;
    t27 = cow_thiscall(g, rd32(t26 + 8u), rd32(COW_IMG(0x10662d40u)), 3, 6u, 0u, 0u);
    t28 = g->edx;
    g->edx = t28;
    return t27;
L_101b82fc: ;
    g->eax = rd32(rd32(COW_IMG(0x10662d40u)));
    g->edx = in_edx;
    t23 = rd32(rd32(COW_IMG(0x10662d40u)));
    g->esp = sp0;
    t24 = cow_thiscall(g, rd32(t23 + 8u), rd32(COW_IMG(0x10662d40u)), 3, 7u, 0u, 0u);
    t25 = g->edx;
    g->edx = t25;
    return t24;
L_101b8310: ;
    g->eax = (uint32_t)(int16_t)arg1 - 3u;
    g->edx = rd32(rd32(COW_IMG(0x10662d40u)));
    t20 = rd32(rd32(COW_IMG(0x10662d40u)));
    g->esp = sp0;
    t21 = cow_thiscall(g, rd32(t20 + 8u), rd32(COW_IMG(0x10662d40u)), 3, 4u, 0u, 0u);
    t22 = g->edx;
    g->edx = t22;
    return t21;
L_101b8324: ;
    g->eax = rd32(rd32(COW_IMG(0x10662d40u)));
    g->edx = in_edx;
    t17 = rd32(rd32(COW_IMG(0x10662d40u)));
    g->esp = sp0;
    t18 = cow_thiscall(g, rd32(t17 + 8u), rd32(COW_IMG(0x10662d40u)), 3, 5u, 0u, 0u);
    t19 = g->edx;
    g->edx = t19;
    return t18;
L_101b8338: ;
    g->eax = (uint32_t)(int16_t)arg1 - 3u;
    g->edx = rd32(rd32(COW_IMG(0x10662d40u)));
    t14 = rd32(rd32(COW_IMG(0x10662d40u)));
    g->esp = sp0;
    t15 = cow_thiscall(g, rd32(t14 + 8u), rd32(COW_IMG(0x10662d40u)), 3, 1u, 0u, 0u);
    t16 = g->edx;
    g->edx = t16;
    return t15;
L_101b834c: ;
    g->eax = rd32(rd32(COW_IMG(0x10662d40u)));
    g->edx = in_edx;
    t5 = rd32(rd32(COW_IMG(0x10662d40u)));
    g->esp = sp0;
    t6 = cow_thiscall(g, rd32(t5 + 0x20u), rd32(COW_IMG(0x10662d40u)), 0);
    t7 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        ecx = rd32(COW_IMG(0x10662d40u));
        edx = t7;
        goto L_101b8369;
    }
    eax = t6;
    ecx = rd32(COW_IMG(0x10662d40u));
    g->eax = eax;
    g->edx = rd32(ecx);
    t8 = rd32(ecx);
    g->esp = sp0;
    t9 = cow_thiscall(g, rd32(t8 + 0x5cu), ecx, 0);
    t10 = g->edx;
    g->edx = t10;
    return t9;
L_101b8369: ;
    g->eax = rd32(ecx);
    g->edx = edx;
    t11 = rd32(ecx);
    g->esp = sp0;
    t12 = cow_thiscall(g, rd32(t11 + 8u), ecx, 3, 8u, 0u, 0u);
    t13 = g->edx;
    g->edx = t13;
    return t12;
L_101b8377: ;
    g->eax = (uint32_t)(int16_t)arg1 - 3u;
    g->edx = rd32(rd32(COW_IMG(0x10662d40u)));
    t2 = rd32(rd32(COW_IMG(0x10662d40u)));
    g->esp = sp0;
    t3 = cow_thiscall(g, rd32(t2 + 8u), rd32(COW_IMG(0x10662d40u)), 3, 8u, 0u, 0u);
    t4 = g->edx;
    eax = t3;
    edx = t4;
L_101b8388: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b82a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101b82a0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
