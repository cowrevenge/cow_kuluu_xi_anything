/* f_0x1022adb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1022adb0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->eax = arg1;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x10229510u), g->eax, self, in_edx, 1, 1, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0xcu;
    t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x5fu);
    t5 = g->ecx;
    t6 = g->edx;
    g->edx = t6;
    g->esp = sp0;
    t7 = cow_cdecl(g, COW_IMG(0x10312031u), 5, self + 0x74u, t4, t1, in_edi, in_esi);
    t8 = g->edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10222600u), self, 6, COW_IMG(0x1022ae00u), 0u, self + 0x74u, 0x1cu, 0x1eu, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022adb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1022adb0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
