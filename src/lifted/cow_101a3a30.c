/* f_0x101a3a30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101a3a30(Guest* g)
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

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10123a70u), in_eax, self, g->edx, 1, 4, 0x3eu, 0x89u, 4u, 0xffffffffu);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        edx = t3;
        goto L_101a3a8e;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x8au, 4u, 0xffffffffu);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 != 0u)
    {
        edx = t6;
        goto L_101a3a8e;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x76u, 4u, 0xffffffffu);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 != 0u)
    {
        edx = t9;
        goto L_101a3a8e;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t10 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x77u, 4u, 0xffffffffu);
    t11 = g->edx;
    if ((uint8_t)t10 != 0u)
    {
        edx = t11;
        goto L_101a3a8e;
    }
    eax = t10;
    edx = t11;
    wr8(self + 0x28u, (uint8_t)eax);
L_101a3a92: ;
    if ((uint32_t)(int8_t)rd8(self + 0x29u) == 1u)
    {
        eax = (uint32_t)(int8_t)rd8(self + 0x29u) - 1u;
        goto L_101a3aea;
    }
    eax = (uint32_t)(int8_t)rd8(self + 0x29u) - 1u;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_101a3ac7;
    }
    eax = eax - 1u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_101a3b05;
    }
    eax = eax - 1u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t12 = cow_thiscall(g, COW_IMG(0x10118220u), rd32(self + 8u), 0);
    t13 = g->edx;
    if (t12 == 0u)
    {
        eax = t12;
        edx = t13;
    }
    else
    {
        eax = t12;
        edx = t13;
        wr8(eax + 0x44u, 3u);
        wr32(eax + 0x48u, 0x14u);
    }
    wr8(self + 0x29u, 0u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t14 = cow_call_regs(g, COW_IMG(0x101a3d00u), eax, self, g->edx, 0, 1, 0u);
    t15 = g->edx;
    g->edx = t15;
    return t14;
L_101a3a8e: ;
    wr8(self + 0x28u, 1u);
    goto L_101a3a92;
L_101a3ac7: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t16 = cow_thiscall(g, COW_IMG(0x10118220u), rd32(self + 8u), 0);
    t17 = g->edx;
    if (t16 == 0u)
    {
        eax = t16;
        edx = t17;
        goto L_101a3b05;
    }
    eax = t16;
    edx = t17;
    if (rd8(eax + 0x44u) != 1u) goto L_101a3b05;
    wr8(self + 0x29u, 3u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t18 = cow_call_regs(g, COW_IMG(0x101a3d00u), eax, self, g->edx, 0, 1, 0u);
    t19 = g->edx;
    g->edx = t19;
    return t18;
L_101a3aea: ;
    g->eax = eax;
    g->edx = edx;
    t20 = rd32(self + 8u);
    g->esp = sp0 - 4u;
    t21 = cow_thiscall(g, COW_IMG(0x10118220u), t20, 0);
    t22 = g->ecx;
    t23 = g->edx;
    if (t21 == 0u)
    {
        eax = t21;
        ecx = (t22 & 0xffffff00u) | 2u;
        edx = t23;
    }
    else
    {
        eax = t21;
        ecx = (t22 & 0xffffff00u) | 2u;
        edx = t23;
        wr8(eax + 0x44u, (uint8_t)ecx);
        wr32(eax + 0x48u, 0x14u);
    }
    wr8(self + 0x29u, (uint8_t)ecx);
L_101a3b05: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t24 = cow_call_regs(g, COW_IMG(0x101a3d00u), eax, self, g->edx, 0, 1, 0u);
    t25 = g->edx;
    g->edx = t25;
    return t24;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a3a30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a3a30(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
