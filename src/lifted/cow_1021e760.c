/* f_0x1021e760 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_1021e760(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, arg3 * 4u, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(self + 4u, t1);
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 8u;
    t4 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, arg3, arg3 * 4u, in_edi);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(self + 8u, t4);
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 0xcu;
    t7 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, arg3 * 4u, arg3, arg3 * 4u);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(self + 0xcu, t7);
    g->ecx = t8;
    g->edx = t9;
    g->esp = sp0 - 0x10u;
    t10 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, arg3 * 4u, arg3 * 4u, arg3);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(self + 0x10u, t10);
    g->eax = arg2 * arg3;
    g->ecx = t11;
    g->edx = t12;
    g->esp = sp0 - 0x14u;
    t13 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, arg2 * arg3, arg3 * 4u, arg3 * 4u);
    t14 = g->ecx;
    t15 = g->edx;
    wr32(self + 0x14u, t13);
    g->esp = sp0 - 0x18u;
    t16 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, arg3, arg2 * arg3, arg3 * 4u);
    wr32(self + 0x30u, arg4);
    wr32(self + 0x18u, t16);
    wr32(self + 0x28u, arg1);
    t17 = rd32(self + 0x14u);
    wr32(self + 0x24u, arg3);
    wr32(self + 0x2cu, arg2);
    if ((int32_t)arg3 <= 0) goto L_1021e80b;
    eax = 0u;
    ecx = t17;
L_1021e7d1: ;
    wr32(eax * 4u + rd32(self + 4u), 0u);
    wr8(eax + rd32(self + 8u), 0u);
    wr32(eax * 4u + rd32(self + 0xcu), 0xffffffffu);
    wr32(eax * 4u + rd32(self + 0x10u), 0xffffffffu);
    wr8(eax + rd32(self + 0x18u), 0u);
    wr8(ecx + rd32(self + 0x2cu) - 1u, 0u);
    if ((int32_t)(eax + 1u) < (int32_t)rd32(self + 0x24u))
    {
        eax = eax + 1u;
        ecx = ecx + rd32(self + 0x2cu);
        goto L_1021e7d1;
    }
L_1021e80b: ;
    wr32(self + 0x1cu, 0u);
    wr32(self + 0x20u, 0u);
    wr8(self + 0x34u, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021e760(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1021e760(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
