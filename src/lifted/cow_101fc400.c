/* f_0x101fc400 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101fc400(Guest* g)
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
    uint32_t t2;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint16_t)arg1 != 5u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_101fc4af;
    }
    if (rd32(COW_IMG(0x10663888u)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_101fc4af;
    }
    ecx = rd32(COW_IMG(0x10663888u));
    if (rd32(COW_IMG(0x1066388cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x1066388cu));
        edx = in_edx;
        goto L_101fc4af;
    }
    eax = rd32(COW_IMG(0x1066388cu));
    if ((uint32_t)(int16_t)arg2 == 1u) goto L_101fc48f;
    if ((uint32_t)(int16_t)arg2 == 2u) goto L_101fc452;
    if ((uint32_t)(int16_t)arg2 != 3u)
    {
        edx = (uint32_t)(int16_t)arg2 - 3u;
        goto L_101fc4a0;
    }
    g->eax = eax;
    g->edx = (uint32_t)(int16_t)arg2 - 3u;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x101fbd90u), eax, 0);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385068u));
    t4 = g->edx;
    g->edx = t4;
    return t3;
L_101fc452: ;
    if (rd32(self + 0x14u) != 0u)
    {
        edx = rd32(self + 0x14u);
        goto L_101fc471;
    }
    edx = rd32(self + 0x14u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_thiscall(g, COW_IMG(0x101f8b20u), ecx, 0);
    t6 = g->edx;
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385068u));
    t8 = g->edx;
    g->edx = t8;
    return t7;
L_101fc471: ;
    t9 = rd32(eax + 0x14u);
    g->eax = t9;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t10 = cow_thiscall(g, COW_IMG(0x101f8da0u), ecx, 2, 0u, t9);
    t11 = g->edx;
    g->edx = t11;
    t12 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385068u));
    t13 = g->edx;
    g->edx = t13;
    return t12;
L_101fc48f: ;
    if (rd32(self + 0x14u) != 1u)
    {
        edx = (uint32_t)(int16_t)arg2 - 1u;
    }
    else
    {
        t14 = rd32(eax + 0x14u);
        g->eax = eax;
        g->edx = t14;
        g->esp = sp0 - 4u;
        t15 = cow_thiscall(g, COW_IMG(0x101f8de0u), ecx, 2, 0u, t14);
        t16 = g->edx;
        eax = t15;
        edx = t16;
    }
L_101fc4a0: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t17 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385068u));
    t18 = g->edx;
    eax = t17;
    edx = t18;
L_101fc4af: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fc400(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101fc400(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
