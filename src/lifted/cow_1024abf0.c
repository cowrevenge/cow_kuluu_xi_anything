/* f_0x1024abf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_1024abf0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    int64_t q1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    q1 = (int64_t)cow_muls(0x88888889u, arg4 * 0x32u);
    t2 = (uint32_t)((int32_t)(arg4 * 0x32u + cow_qhi(q1)) >> 5u);
    t3 = t2 + (t2 >> 0x1fu);
    if (arg1 == 0u)
    {
        ecx = rd32(COW_IMG(0x106690c8u));
        esi = t3;
        goto L_1024aca2;
    }
    eax = t2 >> 0x1fu;
    ecx = rd32(COW_IMG(0x106690c8u));
    esi = t3;
L_1024ac2c: ;
    if ((int32_t)arg1 < 0) goto L_1024ac38;
    if (rd32(ecx + 0xc0u) != arg1) goto L_1024ac87;
L_1024ac38: ;
    if (esi == 0u)
    {
        t8 = rd32(COW_IMG(0x103889f0u) + (arg3 & 0x7fu) * 4u) << 0xcu;
        t9 = rd8(ecx + 0xd0u);
        wr32(ecx + 0x70u, t8);
        wr32(ecx + 0x74u, 0u);
        wr32(ecx + 0x6cu, 1u);
        if ((t9 & 0xc8u) != 0u)
        {
            eax = (eax & 0xffffff00u) | t9;
        }
        else
        {
            edx = t8;
            wr32(ecx + 0xccu, (uint32_t)((int32_t)edx >> 0xcu));
            eax = (uint32_t)((int32_t)edx >> 0xcu);
        }
    }
    else
    {
        t4 = rd32(COW_IMG(0x103889f0u) + (arg3 & 0x7fu) * 4u);
        t5 = rd32(ecx + 0x70u);
        wr32(ecx + 0x6cu, esi);
        t6 = cow_divs(g, (t4 << 0xcu) - t5 + 0x800u, esi);
        t7 = cow_mods(g, (t4 << 0xcu) - t5 + 0x800u, esi);
        wr32(ecx + 0x74u, t6);
        eax = t6;
    }
L_1024ac87: ;
    if (ecx + 0xf4u < rd32(COW_IMG(0x106690c8u)) + 0x1310u)
    {
        ecx = ecx + 0xf4u;
        goto L_1024ac2c;
    }
    return;
L_1024aca2: ;
    if (arg2 == 0u) goto L_1024ad14;
L_1024acaa: ;
    if ((int32_t)arg2 < 0) goto L_1024acb6;
    if (rd32(ecx + 0xc4u) != arg2) goto L_1024ad00;
L_1024acb6: ;
    if (esi == 0u)
    {
        eax = rd32(COW_IMG(0x103889f0u) + (arg3 & 0x7fu) * 4u);
        wr32(ecx + 0x70u, eax << 0xcu);
        t13 = rd8(ecx + 0xd0u);
        wr32(ecx + 0x74u, 0u);
        wr32(ecx + 0x6cu, 1u);
        if ((t13 & 0xc8u) == 0u)
        {
            t14 = (uint32_t)((int32_t)rd32(ecx + 0x70u) >> 0xcu);
            wr32(ecx + 0xccu, t14);
        }
    }
    else
    {
        eax = rd32(COW_IMG(0x103889f0u) + (arg3 & 0x7fu) * 4u);
        t10 = rd32(ecx + 0x70u);
        wr32(ecx + 0x6cu, esi);
        t11 = cow_divs(g, ((eax - (uint32_t)((int32_t)t10 >> 0xcu)) << 0xcu & 0xffff00ffu) | (uint8_t)((eax - (uint32_t)((int32_t)t10 >> 0xcu)) << 0xcu >> 8u | 8u) << 8u, esi);
        t12 = cow_mods(g, ((eax - (uint32_t)((int32_t)t10 >> 0xcu)) << 0xcu & 0xffff00ffu) | (uint8_t)((eax - (uint32_t)((int32_t)t10 >> 0xcu)) << 0xcu >> 8u | 8u) << 8u, esi);
        wr32(ecx + 0x74u, t11);
    }
L_1024ad00: ;
    if (ecx + 0xf4u < rd32(COW_IMG(0x106690c8u)) + 0x1310u)
    {
        ecx = ecx + 0xf4u;
        goto L_1024acaa;
    }
L_1024ad14: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024abf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1024abf0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
