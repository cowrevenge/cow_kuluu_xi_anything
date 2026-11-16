/* f_0x101d6b20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101d6b20(Guest* g)
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x101d6a70u), self, 0);
    t2 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        edx = t2;
        goto L_101d6b32;
    }
    eax = t1;
    edx = t2;
    g->edx = edx;
    return eax & 0xffffff00u;
L_101d6b32: ;
    if ((uint32_t)(int16_t)arg1 == 5u)
    {
        ecx = rd16(eax + 2u);
        goto L_101d6b52;
    }
    if ((uint32_t)(int16_t)arg1 != 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 6u;
        goto L_101d6bac;
    }
    g->eax = (uint32_t)(int16_t)arg1 - 6u;
    g->esp = sp0 - 4u;
    t3 = cow_fastcall(g, COW_IMG(0x101d6b10u), self, edx, 0);
    t4 = g->edx;
    g->edx = t4;
    return (t3 & 0xffffff00u) | 1u;
L_101d6b52: ;
    if (ecx != 0u) goto L_101d6b63;
    g->eax = (uint32_t)(int16_t)arg1 - 5u;
    g->esp = sp0 - 4u;
    t5 = cow_fastcall(g, COW_IMG(0x101d6b10u), self, edx, 0);
    t6 = g->edx;
    g->edx = t6;
    return (t5 & 0xffffff00u) | 1u;
L_101d6b63: ;
    if ((uint16_t)arg2 != 5u)
    {
        eax = (uint32_t)(int16_t)arg1 - 5u;
        goto L_101d6b7d;
    }
    if (rd8(self + 0x51u) != 0u)
    {
        eax = ((uint32_t)(int16_t)arg1 - 5u & 0xffffff00u) | rd8(self + 0x51u);
        goto L_101d6b7d;
    }
    eax = ((uint32_t)(int16_t)arg1 - 5u & 0xffffff00u) | rd8(self + 0x51u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t8 = g->edx;
    g->edx = t8;
    return (t7 & 0xffffff00u) | 1u;
L_101d6b7d: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t9 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x1c3u);
    t10 = g->edx;
    g->edx = t10;
    t11 = rd32(COW_IMG(0x10664520u));
    g->esp = sp0 - 4u;
    t12 = cow_thiscall(g, COW_IMG(0x10210e30u), t11, 7, COW_IMG(0x101d6ab0u), 0u, t9, 0u, 0u, 1u, 0u);
    t13 = g->ecx;
    t14 = g->edx;
    g->edx = t14;
    t15 = cow_thiscall(g, COW_IMG(0x10037b90u), t13, 0);
    t16 = g->edx;
    eax = t15;
    edx = t16;
L_101d6bac: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d6b20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d6b20(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
