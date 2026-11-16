/* f_0x101ee650 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
uint32_t cow_fn_101ee650(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x101ee5f0u), self, 1, arg3);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_101ee7a4;
    }
    eax = t1;
    edx = t2;
    ebp = t1;
    if ((rd16(arg5) & 0x4000u) == 0u)
    {
        eax = rd16(arg5) & 0x4000u;
        goto L_101ee68f;
    }
    if ((int32_t)arg4 < 0)
    {
        eax = arg4;
        goto L_101ee68f;
    }
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_thiscall(g, COW_IMG(0x101ee620u), self, 1, arg4);
    t4 = g->edx;
    eax = t3;
    edx = t4;
    esi = t3;
L_101ee691: ;
    if (arg6 != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg5);
        goto L_101ee71a;
    }
    eax = (eax & 0xffffff00u) | rd8(arg5);
    if ((eax & 2u) == 0u) goto L_101ee6e4;
    t5 = rd32(arg5 + 0x14u);
    g->eax = (uint32_t)(int16_t)arg1;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t6 = cow_thiscall(g, COW_IMG(0x1011ff00u), ebp, 5, (uint32_t)(int16_t)arg1, (uint32_t)(int16_t)arg2, t5, 0x80808080u, arg6);
    t7 = g->edx;
    if (esi == 0u)
    {
        eax = t6;
        edx = t7;
        goto L_101ee7a4;
    }
    t8 = rd32(arg5 + 0x14u);
    g->eax = (uint32_t)(int16_t)arg1;
    g->edx = t8;
    g->esp = sp0 - 0x10u;
    t9 = cow_thiscall(g, COW_IMG(0x1011ff00u), esi, 5, (uint32_t)(int16_t)arg1, (uint32_t)(int16_t)arg2, t8, 0x80808080u, 0u);
    t10 = g->edx;
    g->edx = t10;
    return t9;
L_101ee68f: ;
    esi = 0u;
    goto L_101ee691;
L_101ee6e4: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t11 = cow_thiscall(g, COW_IMG(0x1011fb60u), ebp, 5, (uint32_t)(int16_t)arg1, (uint32_t)(int16_t)arg2, 0x80808080u, 0u, arg6);
    t12 = g->edx;
    if (esi == 0u)
    {
        eax = t11;
        edx = t12;
        goto L_101ee7a4;
    }
    eax = t11;
    edx = t12;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t13 = cow_thiscall(g, COW_IMG(0x1011fb60u), esi, 5, (uint32_t)(int16_t)arg1, (uint32_t)(int16_t)arg2, 0x80808080u, 0u, 0u);
    t14 = g->edx;
    g->edx = t14;
    return t13;
L_101ee71a: ;
    if ((eax & 2u) == 0u) goto L_101ee75d;
    t15 = rd32(arg5 + 0x14u);
    g->eax = (uint32_t)(int16_t)arg2;
    g->edx = t15;
    g->esp = sp0 - 0x10u;
    t16 = cow_thiscall(g, COW_IMG(0x1011ff00u), ebp, 5, (uint32_t)(int16_t)arg1, (uint32_t)(int16_t)arg2, t15, arg6, 0x44u);
    t17 = g->edx;
    if (esi == 0u)
    {
        eax = t16;
        edx = t17;
        goto L_101ee7a4;
    }
    edx = t17;
    t18 = rd32(arg5 + 0x14u);
    g->eax = (uint32_t)(int16_t)arg1;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t19 = cow_thiscall(g, COW_IMG(0x1011ff00u), esi, 5, (uint32_t)(int16_t)arg1, (uint32_t)(int16_t)arg2, t18, arg6, 0x44u);
    t20 = g->edx;
    g->edx = t20;
    return t19;
L_101ee75d: ;
    g->eax = (uint32_t)(int16_t)arg1;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t21 = cow_thiscall(g, COW_IMG(0x1011fc80u), ebp, 8, (uint32_t)(int16_t)arg1, (uint32_t)(int16_t)arg2, 0x3f800000u, 0x3f800000u, arg6, 0u, 0x44u, 0u);
    t22 = g->edx;
    if (esi == 0u)
    {
        eax = t21;
        edx = t22;
    }
    else
    {
        edx = t22;
        g->eax = (uint32_t)(int16_t)arg1;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t23 = cow_thiscall(g, COW_IMG(0x1011fc80u), esi, 8, (uint32_t)(int16_t)arg1, (uint32_t)(int16_t)arg2, 0x3f800000u, 0x3f800000u, arg6, 0u, 0x44u, 0u);
        t24 = g->edx;
        eax = t23;
        edx = t24;
    }
L_101ee7a4: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ee650(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ee650(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
