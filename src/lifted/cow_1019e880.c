/* f_0x1019e880 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1019e880(Guest* g)
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
    const uint32_t in_edi = g->edi;

    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x1019dff0u), self + 4u, 0);
    t2 = g->edx;
    if ((int32_t)t1 >= 0)
    {
        eax = t1;
        edx = t2;
        goto L_1019e89a;
    }
    eax = t1;
    edx = t2;
    g->edx = edx;
    return 0xffffffffu;
L_1019e89a: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t3 = cow_thiscall(g, COW_IMG(0x101c4b40u), rd32(COW_IMG(0x10662dccu)), 1, COW_IMG(0x1037a878u));
    t4 = g->edx;
    if ((int32_t)t3 >= 0)
    {
        edi = t3;
        goto L_1019e8b9;
    }
    eax = t3;
    edx = t4;
    g->edx = edx;
    return 0xffffffffu;
L_1019e8b9: ;
    t5 = edi + rd8(self + 0x55u) + rd8(self + 0x56u) + 1u;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x101907a0u), 4, self + 0x2cu, t5, COW_IMG(0x1037a868u), in_edi);
    t6 = edi + rd8(self + 0x55u) + rd8(self + 0x56u) + 1u;
    t7 = rd8(self + 0x55u);
    t8 = rd32(self + 0x2cu);
    wr32(self + 0x30u, t6);
    g->eax = t7;
    g->edx = t6;
    t9 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0xcu;
    t10 = cow_thiscall(g, COW_IMG(0x101c47b0u), t9, 4, COW_IMG(0x1037a878u), t8 + t7, edi, 0u);
    t11 = g->ecx;
    t12 = g->edx;
    if ((int32_t)t10 >= (int32_t)edi)
    {
        eax = t10;
        edx = t12;
        goto L_1019e92d;
    }
    eax = t10;
    ecx = t11;
    t13 = rd32(self + 0x2cu);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t14 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, t13, 1, 1, t13);
    t15 = g->edx;
    wr32(self + 0x30u, 0u);
    wr32(self + 0x2cu, 0u);
    g->edx = t15;
    return 0xffffffffu;
L_1019e92d: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x1019ea00u), self, 0);
    t16 = g->edx;
    g->edx = t16;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019e880(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1019e880(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
