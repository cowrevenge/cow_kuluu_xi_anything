/* f_0x1019a760 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1019a760(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t t1;
    uint32_t t10;
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

    wr32(self + 0x38u, arg2);
    wr32(self + 0x34u, arg1);
    g->eax = arg1;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x1019a720u), self, 0);
    t2 = g->edx;
    cow_call_regs(g, COW_IMG(0x1019a6e0u), t1, self, g->edx, 1, 0);
    t3 = g->ecx;
    t4 = rd32(self + 0x38u);
    g->edx = t4;
    t5 = cow_cdecl(g, COW_IMG(0x1019a7d0u), 1, t4);
    t6 = g->edx;
    wr32(self + 0x3cu, t5);
    edx = t6;
    ebx = 0u;
    edi = 1u;
L_1019a797: ;
    t7 = rd32(ebx + rd32(self + 0x3cu));
    g->eax = rd32(self + 0x3cu);
    g->edx = edx;
    t8 = rd32(self + 0x3cu);
    g->esp = sp0 - 0xcu;
    t9 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xbu, t7);
    t10 = g->edx;
    if (t9 != 0u)
    {
        eax = t9;
        ecx = rd32(self + 8u);
        edx = t10;
        loc_10 = edi;
        loc_14 = 0xbu;
    }
    else
    {
        eax = t9;
        ecx = rd32(self + 8u);
        edx = t10;
        loc_10 = edi;
        loc_14 = 0xfu;
    }
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10118b60u), ecx, 2, loc_14, loc_10);
    if ((int32_t)edi < 14)
    {
        edx = edi;
        ebx = ebx + 8u;
        edi = edi + 1u;
        goto L_1019a797;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019a760(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1019a760(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
