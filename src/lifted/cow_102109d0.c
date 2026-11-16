/* f_0x102109d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102109d0(Guest* g)
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

    if ((uint32_t)(int16_t)arg1 == 5u) goto L_102109fd;
    if ((uint32_t)(int16_t)arg1 != 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 6u;
        edx = in_edx;
        goto L_10210a2a;
    }
    g->eax = rd32(rd32(self + 0x54u));
    g->edx = in_edx;
    t1 = rd32(rd32(self + 0x54u));
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, rd32(t1 + 0x28u), rd32(self + 0x54u), 0);
    t3 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        edx = t3;
        goto L_10210a2a;
    }
    eax = t2;
    edx = t3;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_thiscall(g, COW_IMG(0x10210840u), rd32(COW_IMG(0x10664508u)), 0);
    t5 = g->edx;
    g->edx = t5;
    return (t4 & 0xffffff00u) | 1u;
L_102109fd: ;
    t6 = rd32(self + 0x50u);
    g->eax = (uint32_t)(int16_t)arg1 - 5u;
    g->edx = t6;
    t7 = rd32(rd32(self + 0x54u));
    g->esp = sp0 - 8u;
    t8 = cow_thiscall_cdecl(g, COW_IMG(0x101f7100u), self, 1, t6);
    t9 = g->edx;
    g->edx = t9;
    t10 = rd32(self + 0x54u);
    t11 = cow_thiscall(g, rd32(t7 + 0x24u), t10, 2, t8, t6);
    t12 = g->ecx;
    t13 = g->edx;
    if ((uint8_t)t11 == 0u)
    {
        eax = t11;
        ecx = t12;
        edx = t13;
        goto L_10210a25;
    }
    eax = t11;
    ecx = t12;
    edx = t13;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t14 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t15 = g->edx;
    g->edx = t15;
    return (t14 & 0xffffff00u) | 1u;
L_10210a25: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t16 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t17 = g->edx;
    eax = t16;
    edx = t17;
L_10210a2a: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102109d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102109d0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
