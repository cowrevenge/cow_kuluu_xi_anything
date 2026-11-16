/* f_0x101e6250 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101e6250(Guest* g)
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
    const uint32_t in_esi = g->esi;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 16u);

    wr32(sp0 - 4u, in_esi);
    if (rd16(sp0 + 4u) != 5u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_101e634c;
    }
    if ((uint32_t)(int16_t)arg2 - 1u > 3u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        edx = in_edx;
        goto L_101e633d;
    }
    t1 = rd32(COW_IMG(0x101e6350u) + (uint32_t)(int16_t)arg2 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x101e6275u: goto L_101e6275;
    case 0x101e62b9u: goto L_101e62b9;
    case 0x101e62f5u: goto L_101e62f5;
    case 0x101e6336u: goto L_101e6336;
    default: rt_fatal(g, COW_IMG(0x101e626eu), "switch");
    }
    return 0;
L_101e6275: ;
    t21 = rd32(COW_IMG(0x10663520u));
    wr8(sp0 + 4u, 0u);
    if (t21 == 0u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        edx = in_edx;
        goto L_101e633d;
    }
    ecx = t21;
    wr32(sp0 - 8u, sp0 + 4u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t22 = cow_thiscall(g, COW_IMG(0x101e3510u), ecx, 1, sp0 + 4u);
    t23 = g->edx;
    if ((uint8_t)t22 == 0u)
    {
        eax = t22;
        edx = t23;
        goto L_101e633d;
    }
    eax = t22;
    edx = t23;
    t24 = rd32(sp0 + 4u);
    wr32(sp0 - 8u, t24);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t25 = cow_thiscall(g, COW_IMG(0x101e5c10u), self, 1, t24);
    t26 = g->edx;
    wr32(sp0 - 8u, COW_IMG(0x1037f394u));
    g->edx = t26;
    t27 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037f394u));
    t28 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edx = t28;
    return t27;
L_101e62b9: ;
    t13 = rd32(COW_IMG(0x10663520u));
    wr8(sp0 + 4u, 0u);
    if (t13 == 0u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        edx = in_edx;
        goto L_101e633d;
    }
    ecx = t13;
    wr32(sp0 - 8u, sp0 + 4u);
    g->edx = sp0 + 4u;
    g->esp = sp0 - 4u;
    t14 = cow_thiscall(g, COW_IMG(0x101e3510u), ecx, 1, sp0 + 4u);
    t15 = g->edx;
    if ((uint8_t)t14 == 0u)
    {
        eax = t14;
        edx = t15;
        goto L_101e633d;
    }
    edx = t15;
    t16 = rd32(sp0 + 4u);
    wr32(sp0 - 8u, t16);
    g->eax = t16;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t17 = cow_thiscall(g, COW_IMG(0x101e5c50u), self, 1, t16);
    t18 = g->edx;
    wr32(sp0 - 8u, COW_IMG(0x1037f394u));
    g->edx = t18;
    t19 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037f394u));
    t20 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edx = t20;
    return t19;
L_101e62f5: ;
    t4 = rd32(COW_IMG(0x10663520u));
    wr8(sp0 + 4u, 0u);
    if (t4 == 0u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        edx = in_edx;
        goto L_101e633d;
    }
    ecx = t4;
    wr32(sp0 - 8u, sp0 + 4u);
    g->edx = sp0 + 4u;
    g->esp = sp0 - 4u;
    t5 = cow_thiscall(g, COW_IMG(0x101e3510u), ecx, 1, sp0 + 4u);
    t6 = g->edx;
    if ((uint8_t)t5 == 0u)
    {
        eax = t5;
        edx = t6;
        goto L_101e633d;
    }
    edx = t6;
    t7 = rd32(sp0 + 4u);
    wr32(sp0 - 8u, t7);
    t8 = (uint32_t)(int16_t)rd16(self + 0x16u);
    wr32(sp0 - 0xcu, t8);
    g->eax = t7;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t9 = cow_stdcall(g, COW_IMG(0x101e5d60u), 2, t8, t7);
    t10 = g->edx;
    wr32(sp0 - 8u, COW_IMG(0x1037f394u));
    g->edx = t10;
    t11 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037f394u));
    t12 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edx = t12;
    return t11;
L_101e6336: ;
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_stdcall(g, COW_IMG(0x101e5f60u), 0);
    t3 = g->edx;
    eax = t2;
    edx = t3;
L_101e633d: ;
    wr32(sp0 - 8u, COW_IMG(0x1037f394u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t29 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037f394u));
    t30 = g->edx;
    eax = t29;
    edx = t30;
L_101e634c: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e6250(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e6250(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
