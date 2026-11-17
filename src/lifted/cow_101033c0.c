/* f_0x101033c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101033c0(Guest* g)
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

    t1 = rd32(arg1 + 0x2cu);
    g->eax = t1;
    g->ecx = self;
    g->esp = sp0 - 4u;
    t2 = cow_call_regs(g, COW_IMG(0x100dc270u), g->eax, g->ecx, in_edx, 1, 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 != 1u)
    {
        eax = t2;
        goto L_10103425;
    }
    eax = t2;
    ecx = t3;
    edx = t4;
    if (rd8(arg1 + 0x1cu) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg1 + 0x1cu);
        g->eax = eax;
        g->esp = sp0 - 4u;
        t5 = cow_stdcall(g, COW_IMG(0x100dc420u), 0);
        wr32(arg1 + 0x28u, t5);
    }
    t6 = rd32(arg1 + 0xd0u);
    t7 = rd32(COW_IMG(0x104e0af0u)) + 0x140u;
    t8 = (arg1 + 0x80u & 0xffff0000u) | rd16(arg1 + 0x1eu);
    t9 = rd32(arg1 + 0x28u);
    t10 = rd32(arg1 + 0xcu);
    g->ecx = t10;
    g->edx = t8;
    g->esp = sp0 - 4u;
    t11 = cow_call_regs(g, COW_IMG(0x100f0130u), t9, g->ecx, g->edx, 1, 7, t10, t9, t8, t7, arg1 + 0x30u, arg1 + 0x80u, t6);
    t12 = g->ecx;
    t13 = g->edx;
    if ((uint8_t)t11 != 1u)
    {
        eax = t11;
        goto L_10103425;
    }
    eax = t11;
    ecx = t12;
    edx = t13;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t14 = cow_call_regs(g, COW_IMG(0x100f02a0u), eax, g->ecx, g->edx, 1, 0);
    t15 = g->ecx;
    t16 = g->edx;
    if ((uint8_t)t14 == 1u)
    {
        eax = t14;
        ecx = t15;
        edx = t16;
        goto L_10103429;
    }
    eax = t14;
L_10103425: ;
    return eax & 0xffffff00u;
L_10103429: ;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t17 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
    wr32(rd32(COW_IMG(0x104e0af0u)) + 0x79cu, t17);
    return (t17 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101033c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101033c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
