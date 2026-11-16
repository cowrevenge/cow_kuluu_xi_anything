/* f_0x1012ec10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1012ec10(Guest* g)
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
    uint32_t t2;
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

    if ((uint8_t)arg1 == 0u) goto L_1012ec93;
    if ((uint8_t)arg1 != 1u)
    {
        eax = (uint8_t)arg1 - 1u;
        edx = in_edx;
        goto L_1012ecd1;
    }
    wr8(rd32(self + 8u) + 0x85u, 1u);
    t1 = rd8(rd32(COW_IMG(0x1057876cu)) + 0x74u);
    wr8(rd32(COW_IMG(0x1057876cu)) + 0x74u, (uint8_t)(t1 | 1u));
    g->edx = (in_edx & 0xffffff00u) | t1 | 1u;
    t2 = rd32(COW_IMG(0x1057876cu));
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x1012eb40u), self, 0);
    t4 = g->edx;
    if (t3 == 0u)
    {
        eax = t3;
        edx = t4;
    }
    else
    {
        eax = t3;
        edx = t4;
        if (rd32(COW_IMG(0x1057847cu)) != 0u)
        {
            ecx = rd32(COW_IMG(0x1057847cu));
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t5 = cow_thiscall(g, COW_IMG(0x10150cc0u), ecx, 2, eax, 2u);
            t6 = g->edx;
            eax = t5;
            edx = t6;
        }
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_thiscall(g, COW_IMG(0x1012eba0u), self, 0);
    t8 = g->edx;
    if ((int16_t)rd16(rd32(self + 8u) + 0x4cu) < 9)
    {
        eax = t7;
        edx = t8;
    }
    else
    {
        eax = t7;
        ecx = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu);
        edx = t8;
        if ((int32_t)ecx <= 11)
        {
            eax = 0u;
        }
    }
    wr32(self + 0x1ecu, eax);
    if (rd32(COW_IMG(0x105781f8u)) == 0u) goto L_1012ecd1;
    ecx = rd32(COW_IMG(0x105781f8u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t9 = cow_thiscall(g, COW_IMG(0x1013a320u), ecx, 2, eax, 2u);
    t10 = g->edx;
    g->edx = t10;
    return t9;
L_1012ec93: ;
    t11 = rd32(self + 8u);
    wr8(t11 + 0x85u, 0u);
    t12 = rd32(COW_IMG(0x1057876cu));
    wr8(t12 + 0x74u, rd8(t12 + 0x74u) & 0xfeu);
    if (rd32(COW_IMG(0x1057847cu)) == 0u)
    {
        eax = t12;
        edx = t11;
    }
    else
    {
        eax = t12;
        ecx = rd32(COW_IMG(0x1057847cu));
        edx = t11;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t13 = cow_thiscall(g, COW_IMG(0x10150cc0u), ecx, 2, 0u, 2u);
        t14 = g->edx;
        eax = t13;
        edx = t14;
    }
    if (rd32(COW_IMG(0x105781f8u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x105781f8u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t15 = cow_thiscall(g, COW_IMG(0x1013a320u), ecx, 2, 0u, 2u);
        t16 = g->edx;
        eax = t15;
        edx = t16;
    }
L_1012ecd1: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012ec10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1012ec10(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
