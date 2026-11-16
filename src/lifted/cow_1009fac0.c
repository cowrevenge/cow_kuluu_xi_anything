/* f_0x1009fac0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1009fac0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd16(arg3 + 8u);
    g->ecx = t1;
    g->edx = arg3;
    t2 = cow_call_regs(g, COW_IMG(0x10086fc0u), in_eax, g->ecx, g->edx, 1, 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 != 0u)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        goto L_1009fad8;
    }
    eax = t2;
    edx = t4;
    g->edx = edx;
    return eax;
L_1009fad8: ;
    if (rd32(COW_IMG(0x10480af0u) + ecx * 4u) == 0u) goto L_1009fb46;
    ecx = rd32(COW_IMG(0x10480af0u) + ecx * 4u);
    if (rd32(ecx + 0x78u) != rd32(edx + 4u))
    {
        eax = rd32(ecx + 0x78u);
        goto L_1009fb46;
    }
    eax = rd32(ecx + 0x78u);
    if ((rd8(edx + 0xau) & 0xfu) != 1u) goto L_1009fb34;
    edx = (edx & 0xffffff00u) | (rd8(edx + 0xau) & 0xfu);
    g->edx = edx;
    g->esp = sp0;
    t5 = cow_thiscall(g, COW_IMG(0x10095680u), ecx, 1, 0xffu);
    t6 = g->ecx;
    t7 = g->edx;
    if ((uint8_t)t5 != 0u)
    {
        ecx = t6;
        edx = t7;
        goto L_1009fb16;
    }
    ecx = t6;
    edx = t7;
    g->edx = edx;
    g->esp = sp0;
    t8 = cow_thiscall(g, COW_IMG(0x100956a0u), ecx, 1, 0xffu);
    t9 = g->ecx;
    t10 = g->edx;
    if ((uint8_t)t8 == 0u)
    {
        eax = t8;
        ecx = t9;
        goto L_1009fb34;
    }
    ecx = t9;
    edx = t10;
L_1009fb16: ;
    if (!(rd32(ecx + 0x120u) >> 9u & 1u))
    {
        eax = rd32(ecx + 0x120u) >> 9u;
        goto L_1009fb34;
    }
    t11 = (rd32(ecx + 0x12cu) & 0xffffff00u) | (uint8_t)(rd32(ecx + 0x12cu) | 0x30u);
    wr32(ecx + 0x12cu, t11);
    g->edx = edx;
    return (t11 & 0xffffff00u) | 1u;
L_1009fb34: ;
    t12 = (rd32(ecx + 0x12cu) & 0xffffffefu) | 0x20u;
    wr32(ecx + 0x12cu, t12);
    edx = t12;
L_1009fb46: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1009fac0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1009fac0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
