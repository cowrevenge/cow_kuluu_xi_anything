/* f_0x101d73a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_101d73a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x101d72c0u), self, 1, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u) goto L_101d7488;
    eax = t1;
    ecx = t2;
    edx = t3;
    esi = t1;
    if (rd16(esi + 8u) != (uint16_t)arg2) goto L_101d7488;
    ecx = (ecx & 0xffff0000u) | rd16(esi + 8u);
    if (rd8(esi + 0xbu) != (uint8_t)arg4) goto L_101d7488;
    ecx = (ecx & 0xffffff00u) | rd8(esi + 0xbu);
    wr32(esi + 4u, arg3);
    if ((uint8_t)ecx == 0u) goto L_101d7433;
    t4 = (edx & 0xffffff00u) | rd8(esi + 0xau);
    g->edx = t4;
    g->esp = sp0 - 8u;
    t5 = cow_cdecl(g, COW_IMG(0x100eb490u), 2, 0u, t4);
    t6 = g->edx;
    if (t5 != 0u)
    {
        eax = t5;
        goto L_101d7403;
    }
    eax = t5;
    edx = t6;
    t7 = (eax & 0xffffff00u) | rd8(esi + 0xau);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x101d7600u), self, 1, t7);
    return;
L_101d7403: ;
    t8 = rd32(esi + 4u);
    t9 = rd32(eax + 4u);
    g->ecx = t8;
    g->edx = t9;
    g->esp = sp0 - 8u;
    t10 = cow_call_regs(g, COW_IMG(0x101c9440u), eax, g->ecx, g->edx, 1, 5, t8, 0u, 1u, t9, t8);
    t11 = g->ecx;
    t12 = g->edx;
    g->edx = t12;
    g->esp = sp0 - 0x10u;
    t13 = cow_cdecl(g, COW_IMG(0x10153180u), 6, COW_IMG(0x106631f0u), 0x200u, 0xau, 0x1du, 1u, t10);
    t14 = g->edx;
    eax = t13;
    edx = t14;
L_101d745a: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10129e80u), rd32(COW_IMG(0x10578158u)), 1, COW_IMG(0x106631f0u));
    t20 = g->edx;
    cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x101d7490u), esi, COW_IMG(0x106631f0u), 0u, 0u, 1u, 0u);
L_101d7488: ;
    return;
L_101d7433: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t15 = cow_call_regs(g, COW_IMG(0x101c9440u), arg3, g->ecx, g->edx, 1, 5, arg3, 0u, 1u, arg3, in_edi);
    t16 = g->ecx;
    t17 = g->edx;
    g->edx = t17;
    g->esp = sp0 - 0xcu;
    t18 = cow_cdecl(g, COW_IMG(0x10153180u), 6, COW_IMG(0x106631f0u), 0x200u, 0xau, 0x1cu, 1u, t15);
    t19 = g->edx;
    eax = t18;
    edx = t19;
    goto L_101d745a;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d73a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101d73a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
