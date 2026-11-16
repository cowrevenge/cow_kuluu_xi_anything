/* f_0x10205ed0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10205ed0(Guest* g)
{
    uint32_t eax;
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

    if ((uint32_t)(int16_t)arg1 - 1u > 0xbu)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = in_edx;
        goto L_10205fb4;
    }
    t1 = rd32(COW_IMG(0x10205fb8u) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x10205ee9u: goto L_10205ee9;
    case 0x10205f05u: goto L_10205f05;
    case 0x10205f11u: goto L_10205f11;
    case 0x10205f3cu: goto L_10205f3c;
    case 0x10205f48u: goto L_10205f48;
    case 0x10205f54u: goto L_10205f54;
    case 0x10205f5fu: goto L_10205f5f;
    case 0x10205f76u: goto L_10205f76;
    case 0x10205f81u: goto L_10205f81;
    case 0x10205f8du: goto L_10205f8d;
    case 0x10205f99u: goto L_10205f99;
    case 0x10205fadu: goto L_10205fad;
    default: rt_fatal(g, COW_IMG(0x10205ee2u), "switch");
    }
    return 0;
L_10205ee9: ;
    if (rd32(self + 0x18u) != 1u)
    {
        eax = rd32(self + 0x18u);
        goto L_10205efc;
    }
    eax = rd32(self + 0x18u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t30 = cow_stdcall(g, COW_IMG(0x10204f70u), 0);
    t31 = g->edx;
    g->edx = t31;
    return t30;
L_10205efc: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t32 = cow_stdcall(g, COW_IMG(0x10204c60u), 0);
    t33 = g->edx;
    g->edx = t33;
    return t32;
L_10205f05: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t28 = cow_thiscall(g, COW_IMG(0x10204d50u), self, 1, self);
    t29 = g->edx;
    g->edx = t29;
    return t28;
L_10205f11: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t22 = cow_stdcall(g, COW_IMG(0x101cc330u), 0);
    t23 = g->edx;
    if ((uint8_t)t22 != 0u)
    {
        eax = t22;
        edx = t23;
        goto L_10205f31;
    }
    eax = t22;
    edx = t23;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t24 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385498u), 1u, 0u);
    t25 = g->edx;
    g->edx = t25;
    return t24;
L_10205f31: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t26 = cow_stdcall(g, COW_IMG(0x10205280u), 0);
    t27 = g->edx;
    g->edx = t27;
    return t26;
L_10205f3c: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t20 = cow_stdcall(g, COW_IMG(0x10205040u), 1, self);
    t21 = g->edx;
    g->edx = t21;
    return t20;
L_10205f48: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t18 = cow_stdcall(g, COW_IMG(0x10204fe0u), 1, self);
    t19 = g->edx;
    g->edx = t19;
    return t18;
L_10205f54: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t16 = cow_stdcall(g, COW_IMG(0x10205010u), 0);
    t17 = g->edx;
    g->edx = t17;
    return t16;
L_10205f5f: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t14 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1038544cu), 1u, 0u);
    t15 = g->edx;
    g->edx = t15;
    return t14;
L_10205f76: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t12 = cow_stdcall(g, COW_IMG(0x10204e50u), 0);
    t13 = g->edx;
    g->edx = t13;
    return t12;
L_10205f81: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t10 = cow_stdcall(g, COW_IMG(0x10205100u), 1, self);
    t11 = g->edx;
    g->edx = t11;
    return t10;
L_10205f8d: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t8 = cow_stdcall(g, COW_IMG(0x102051d0u), 1, self);
    t9 = g->edx;
    g->edx = t9;
    return t8;
L_10205f99: ;
    t4 = ((uint32_t)(int16_t)arg1 - 1u & 0xffffff00u) | rd8(self + 0x2cu) == 0u;
    g->eax = t4;
    g->edx = (in_edx & 0xffffff00u) | rd8(self + 0x2cu);
    t5 = rd8(self + 0x2cu);
    g->esp = sp0 - 4u;
    t6 = cow_stdcall(g, COW_IMG(0x10204ee0u), 1, t4);
    t7 = g->edx;
    g->edx = t7;
    return t6;
L_10205fad: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_stdcall(g, COW_IMG(0x10204ed0u), 0);
    t3 = g->edx;
    eax = t2;
    edx = t3;
L_10205fb4: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10205ed0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10205ed0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
