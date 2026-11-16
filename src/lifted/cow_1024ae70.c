/* f_0x1024ae70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_1024ae70(Guest* g)
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(COW_IMG(0x1032918cu)), self, 1, COW_IMG(0x106690ccu));
    t1 = g->edx;
    q2 = (int64_t)cow_muls(0x88888889u, arg4 * 0x32u);
    t3 = (uint32_t)((int32_t)(arg4 * 0x32u + cow_qhi(q2)) >> 5u);
    t4 = t3 + (t3 >> 0x1fu);
    if (arg1 == 0u)
    {
        eax = t3 >> 0x1fu;
        ecx = rd32(COW_IMG(0x106690c8u));
        edx = t4;
        esi = t4;
        goto L_1024af24;
    }
    eax = t3 >> 0x1fu;
    ecx = rd32(COW_IMG(0x106690c8u));
    esi = t4;
L_1024aeb7: ;
    if ((int32_t)arg1 < 0) goto L_1024aec3;
    if (rd32(ecx + 0xc0u) != arg1) goto L_1024aefe;
L_1024aec3: ;
    if (esi == 0u)
    {
        t8 = (arg3 & 0x7fu) << 0xcu;
        wr32(ecx + 0x80u, t8);
        wr32(ecx + 0x84u, 0u);
        wr32(ecx + 0x7cu, 1u);
        eax = t8;
    }
    else
    {
        t5 = rd32(ecx + 0x80u);
        wr32(ecx + 0x7cu, esi);
        t6 = cow_divs(g, (((arg3 & 0x7fu) - (uint32_t)((int32_t)t5 >> 0xcu)) << 0xcu & 0xffff00ffu) | (uint8_t)(((arg3 & 0x7fu) - (uint32_t)((int32_t)t5 >> 0xcu)) << 0xcu >> 8u | 8u) << 8u, esi);
        t7 = cow_mods(g, (((arg3 & 0x7fu) - (uint32_t)((int32_t)t5 >> 0xcu)) << 0xcu & 0xffff00ffu) | (uint8_t)(((arg3 & 0x7fu) - (uint32_t)((int32_t)t5 >> 0xcu)) << 0xcu >> 8u | 8u) << 8u, esi);
        wr32(ecx + 0x84u, t6);
        eax = t6;
    }
L_1024aefe: ;
    if (ecx + 0xf4u < rd32(COW_IMG(0x106690c8u)) + 0x1310u)
    {
        ecx = ecx + 0xf4u;
        goto L_1024aeb7;
    }
    ecx = ecx + 0xf4u;
    edx = rd32(COW_IMG(0x106690c8u)) + 0x1310u;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, COW_IMG(0x106690ccu));
    return;
L_1024af24: ;
    if (arg2 == 0u) goto L_1024af89;
L_1024af2c: ;
    if ((int32_t)arg2 < 0) goto L_1024af38;
    if (rd32(ecx + 0xc4u) != arg2) goto L_1024af73;
L_1024af38: ;
    if (esi == 0u)
    {
        t12 = (arg3 & 0x7fu) << 0xcu;
        wr32(ecx + 0x80u, t12);
        wr32(ecx + 0x84u, 0u);
        wr32(ecx + 0x7cu, 1u);
        eax = t12;
    }
    else
    {
        t9 = rd32(ecx + 0x80u);
        wr32(ecx + 0x7cu, esi);
        t10 = cow_divs(g, (((arg3 & 0x7fu) - (uint32_t)((int32_t)t9 >> 0xcu)) << 0xcu & 0xffff00ffu) | (uint8_t)(((arg3 & 0x7fu) - (uint32_t)((int32_t)t9 >> 0xcu)) << 0xcu >> 8u | 8u) << 8u, esi);
        t11 = cow_mods(g, (((arg3 & 0x7fu) - (uint32_t)((int32_t)t9 >> 0xcu)) << 0xcu & 0xffff00ffu) | (uint8_t)(((arg3 & 0x7fu) - (uint32_t)((int32_t)t9 >> 0xcu)) << 0xcu >> 8u | 8u) << 8u, esi);
        wr32(ecx + 0x84u, t10);
        eax = t10;
    }
L_1024af73: ;
    if (ecx + 0xf4u < rd32(COW_IMG(0x106690c8u)) + 0x1310u)
    {
        ecx = ecx + 0xf4u;
        goto L_1024af2c;
    }
    ecx = ecx + 0xf4u;
    edx = rd32(COW_IMG(0x106690c8u)) + 0x1310u;
L_1024af89: ;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, COW_IMG(0x106690ccu));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024ae70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1024ae70(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
