/* f_0x101591d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101591d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_stdcall(g, COW_IMG(0x10158470u), 0);
    t2 = g->edx;
    if ((uint8_t)t1 != 1u)
    {
        edx = t2;
        goto L_10159246;
    }
    edx = t2;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t3 = cow_thiscall(g, COW_IMG(0x101598b0u), self, 0);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 != 0u)
    {
        ecx = t4;
        edx = t5;
        edi = t3;
        goto L_101591ef;
    }
    eax = t3;
    return eax & 0xffffff00u;
L_101591ef: ;
    if ((rd32(self + 0x60u) >> 8u & 2u) == 0u) goto L_10159210;
    eax = rd32(self + 0x60u);
    g->edx = edx;
    g->esp = sp0;
    t6 = cow_call_regs(g, COW_IMG(0x101cc220u), eax, g->ecx, g->edx, 1, 3, edi, in_edi, in_esi);
    t7 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        edx = t7;
        goto L_10159210;
    }
    eax = t6;
    edx = t7;
    g->esp = sp0 - 8u;
    t8 = cow_call_regs(g, COW_IMG(0x101587f0u), eax, self, edx, 0, 1, 5u);
    return t8;
L_10159210: ;
    if ((rd32(self + 0x60u) & rd32(edi + 0x1d0u)) != 0u)
    {
        eax = rd32(self + 0x60u);
        goto L_10159241;
    }
    eax = rd32(self + 0x60u);
    ecx = rd32(edi + 0x1d0u);
    if ((eax & 0x10u) == 0u) goto L_1015922e;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t9 = cow_call_regs(g, COW_IMG(0x101cc220u), eax, g->ecx, g->edx, 1, 3, edi, in_edi, in_esi);
    t10 = g->ecx;
    t11 = g->edx;
    if ((uint8_t)t9 != 0u)
    {
        eax = t9;
        goto L_10159241;
    }
    eax = t9;
    ecx = t10;
    edx = t11;
L_1015922e: ;
    if ((rd8(self + 0x60u) & 4u) == 0u) goto L_10159246;
    g->edx = edx;
    g->esp = sp0;
    t12 = cow_call_regs(g, COW_IMG(0x101cc1d0u), eax, g->ecx, g->edx, 1, 3, edi, in_edi, in_esi);
    t13 = g->edx;
    if ((uint8_t)t12 == 0u)
    {
        edx = t13;
        goto L_10159246;
    }
    eax = t12;
L_10159241: ;
    return (eax & 0xffffff00u) | 1u;
L_10159246: ;
    t14 = ((rd32(self + 0x60u) & 0x200u) | 0x80u) >> 7u;
    g->esp = sp0 - 8u;
    t15 = cow_call_regs(g, COW_IMG(0x101587f0u), t14, self, edx, 0, 1, t14);
    return t15;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101591d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101591d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
