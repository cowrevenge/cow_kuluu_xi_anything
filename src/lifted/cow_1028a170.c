/* f_0x1028a170 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1028a170(Guest* g)
{
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = (uint32_t)(int8_t)rd8(rd32(sp0 + 4u));
    t2 = rd32(sp0 + 4u);
    g->esp = sp0 - 0x10u;
    t3 = cow_call_regs(g, COW_IMG(0x103145e4u), g->eax, self, in_edx, 1, 1, t1);
    t4 = g->ecx;
    t5 = g->edx;
    t6 = rd8(arg2);
    g->esp = sp0 - 0x14u;
    t7 = cow_call_regs(g, COW_IMG(0x103145e4u), g->eax, t4, t5, 1, 1, (uint32_t)(int8_t)t6);
    t8 = g->ecx;
    t9 = g->edx;
    wr8(sp0 + 4u, (uint8_t)t7);
    if ((uint8_t)t3 != (uint8_t)t7)
    {
        loc_4 = (self & 0xffffff00u) | (uint8_t)t3;
        goto L_1028a1ca;
    }
    ecx = t8;
    edx = t9;
    ebx = (in_ebx & 0xffffff00u) | (uint8_t)t3;
    esi = t2 + 1u;
    edi = arg2 + 1u;
    loc_4 = (self & 0xffffff00u) | (uint8_t)t3;
L_1028a1a1: ;
    if ((uint8_t)ebx == 0u) goto L_1028a1e4;
    t10 = rd8(esi);
    g->esp = sp0 - 0x10u;
    t11 = cow_call_regs(g, COW_IMG(0x103145e4u), g->eax, ecx, edx, 1, 1, (uint32_t)(int8_t)t10);
    t12 = g->ecx;
    t13 = g->edx;
    t14 = rd8(edi);
    g->esp = sp0 - 0x14u;
    t15 = cow_call_regs(g, COW_IMG(0x103145e4u), g->eax, t12, t13, 1, 1, (uint32_t)(int8_t)t14);
    t16 = g->ecx;
    t17 = g->edx;
    wr8(sp0 + 4u, (uint8_t)t15);
    if ((uint8_t)t11 == (uint8_t)t15)
    {
        ecx = t16;
        edx = t17;
        ebx = (ebx & 0xffffff00u) | (uint8_t)t11;
        esi = esi + 1u;
        edi = edi + 1u;
        loc_4 = (loc_4 & 0xffffff00u) | (uint8_t)t11;
        goto L_1028a1a1;
    }
    loc_4 = (loc_4 & 0xffffff00u) | (uint8_t)t11;
L_1028a1ca: ;
    return (uint8_t)loc_4 - (uint8_t)rd32(sp0 + 4u);
L_1028a1e4: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1028a170(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1028a170(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
