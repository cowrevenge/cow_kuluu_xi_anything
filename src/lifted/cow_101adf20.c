/* f_0x101adf20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101adf20(Guest* g)
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

    t1 = rd32(self + 4u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_call_regs(g, COW_IMG(0x10123a70u), t1, self, g->edx, 1, 4, 0x3fu, t1, 1u, 0xffffffffu);
    t3 = g->edx;
    if ((uint8_t)t2 == 0u) goto L_101adfa7;
    edx = t3;
    t4 = rd32(self + 0x100u);
    g->ecx = t4;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_cdecl(g, COW_IMG(0x101ae010u), 1, t4);
    t6 = g->ecx;
    t7 = g->edx;
    if ((uint8_t)t5 == 0u) goto L_101adfa7;
    ecx = t6;
    edx = t7;
    if (arg1 != 0u)
    {
        g->eax = arg1;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t8 = cow_thiscall_cdecl(g, arg1, ecx, 1, self);
        t9 = g->ecx;
        t10 = g->edx;
        if (t8 == 0xffffffffu) goto L_101adf82;
        eax = t8;
        ecx = t9;
        edx = t10;
        if (eax != 1u) goto L_101adf89;
        t11 = rd8(self + 0x104u);
        t12 = rd8(self + 0x105u);
        wr8(self + 0x104u, (uint8_t)(t11 + 1u));
        if ((int8_t)(t11 + 1u) >= (int8_t)t12) goto L_101adf82;
        eax = (eax & 0xffffff00u) | (uint8_t)(t11 + 1u);
        if ((int8_t)eax < 2) goto L_101adf89;
L_101adf82: ;
        wr8(self + 0x104u, 0u);
    }
L_101adf89: ;
    t13 = self + (uint32_t)(int8_t)rd8(self + 0x104u) * 0x79u + 0xcu;
    g->eax = self + (uint32_t)(int8_t)rd8(self + 0x104u);
    t14 = rd8(self + 0x104u);
    g->esp = sp0 - 4u;
    t15 = cow_thiscall_cdecl(g, rd32(self + 8u), t13, 1, t13);
    return t15;
L_101adfa7: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101adf20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101adf20(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
