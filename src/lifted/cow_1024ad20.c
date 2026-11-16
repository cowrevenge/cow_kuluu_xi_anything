/* f_0x1024ad20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1024ad20(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    int64_t q2;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(COW_IMG(0x1032918cu)), self, 1, COW_IMG(0x106690ccu));
    t1 = g->edx;
    q2 = (int64_t)cow_muls(0x88888889u, arg3 * 0x32u);
    t3 = (uint32_t)((int32_t)(arg3 * 0x32u + cow_qhi(q2)) >> 5u);
    t4 = t3 + (t3 >> 0x1fu);
    if (arg1 == 0u)
    {
        eax = t3 >> 0x1fu;
        ecx = rd32(COW_IMG(0x106690c8u));
        edx = t4;
        esi = t4;
        goto L_1024ade6;
    }
    eax = t3 >> 0x1fu;
    ecx = rd32(COW_IMG(0x106690c8u));
    esi = t4;
L_1024ad69: ;
    if ((int32_t)arg1 < 0) goto L_1024ad75;
    if (rd32(ecx + 0xc0u) != arg1) goto L_1024adc0;
L_1024ad75: ;
    if (esi == 0u)
    {
        t9 = rd32(COW_IMG(0x103889f0u)) << 0xcu;
        t10 = rd8(ecx + 0xd0u);
        wr32(ecx + 0x70u, t9);
        wr32(ecx + 0x74u, 0u);
        wr32(ecx + 0x6cu, 1u);
        if ((t10 & 0xc8u) != 0u)
        {
            eax = (eax & 0xffffff00u) | t10;
        }
        else
        {
            edx = t9;
            wr32(ecx + 0xccu, (uint32_t)((int32_t)edx >> 0xcu));
            eax = (uint32_t)((int32_t)edx >> 0xcu);
        }
    }
    else
    {
        t5 = rd32(COW_IMG(0x103889f4u));
        t6 = rd32(ecx + 0x70u);
        wr32(ecx + 0x6cu, esi);
        t7 = cow_divs(g, (t5 << 0xcu) - t6 + 0x800u, esi);
        t8 = cow_mods(g, (t5 << 0xcu) - t6 + 0x800u, esi);
        wr32(ecx + 0x74u, t7);
        eax = t7;
    }
    wr32(ecx + 0x78u, 1u);
L_1024adc0: ;
    if (ecx + 0xf4u < rd32(COW_IMG(0x106690c8u)) + 0x1310u)
    {
        ecx = ecx + 0xf4u;
        goto L_1024ad69;
    }
    ecx = ecx + 0xf4u;
    edx = rd32(COW_IMG(0x106690c8u)) + 0x1310u;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, COW_IMG(0x106690ccu));
    return;
L_1024ade6: ;
    if (arg2 != 0u)
    {
L_1024adf3: ;
        if ((int32_t)arg2 < 0) goto L_1024adff;
        if (rd32(ecx + 0xc4u) != arg2) goto L_1024ae4b;
L_1024adff: ;
        if (esi == 0u)
        {
            t15 = rd32(COW_IMG(0x103889f0u));
            wr32(ecx + 0x74u, 0u);
            wr32(ecx + 0x70u, t15 << 0xcu);
            t16 = rd8(ecx + 0xd0u);
            wr32(ecx + 0x6cu, 1u);
            if ((t16 & 0xc8u) == 0u)
            {
                t17 = (uint32_t)((int32_t)rd32(ecx + 0x70u) >> 0xcu);
                wr32(ecx + 0xccu, t17);
                edx = t17;
            }
        }
        else
        {
            t11 = rd32(COW_IMG(0x103889f4u));
            t12 = rd32(ecx + 0x70u);
            wr32(ecx + 0x6cu, esi);
            t13 = cow_divs(g, ((t11 - (uint32_t)((int32_t)t12 >> 0xcu)) << 0xcu & 0xffff00ffu) | (uint8_t)((t11 - (uint32_t)((int32_t)t12 >> 0xcu)) << 0xcu >> 8u | 8u) << 8u, esi);
            t14 = cow_mods(g, ((t11 - (uint32_t)((int32_t)t12 >> 0xcu)) << 0xcu & 0xffff00ffu) | (uint8_t)((t11 - (uint32_t)((int32_t)t12 >> 0xcu)) << 0xcu >> 8u | 8u) << 8u, esi);
            wr32(ecx + 0x74u, t13);
            edx = t14;
        }
        wr32(ecx + 0x78u, 1u);
L_1024ae4b: ;
        if (ecx + 0xf4u < rd32(COW_IMG(0x106690c8u)) + 0x1310u)
        {
            ecx = ecx + 0xf4u;
            goto L_1024adf3;
        }
        eax = rd32(COW_IMG(0x106690c8u)) + 0x1310u;
        ecx = ecx + 0xf4u;
    }
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, COW_IMG(0x106690ccu));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024ad20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1024ad20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
