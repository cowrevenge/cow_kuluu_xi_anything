/* f_0x1002aae0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_1002aae0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    wr32(sp0 - 0x10u, 0x206c7462u);
    wr32(sp0 - 0x14u, 0x2bu);
    wr32(sp0 - 0x18u, sp0 + 8u);
    t1 = rd32(sp0 + 8u);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10072290u), rd32(t1), 3, sp0 + 8u, 0x2bu, 0x206c7462u);
    if (rd32(sp0 + 8u) != 0u)
    {
        eax = rd32(sp0 + 8u);
        goto L_1002ab21;
    }
    eax = rd32(sp0 + 8u);
    esi = t1;
    wr32(sp0 - 0x10u, 0x656c6469u);
    wr32(sp0 - 0x14u, 0x2bu);
    wr32(sp0 - 0x18u, sp0 - 4u);
    g->eax = eax;
    g->edx = sp0 - 4u;
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, COW_IMG(0x10072290u), rd32(esi), 3, sp0 - 4u, 0x2bu, 0x656c6469u);
    t3 = g->edx;
    t4 = rd32(t2);
    wr32(sp0 + 8u, t4);
    if (t4 == 0u)
    {
        eax = t4;
        edx = t3;
        goto L_1002ab4b;
    }
    eax = t4;
L_1002ab21: ;
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0x3f800000u);
    wr32(sp0 - 0x20u, arg3);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0x3f800000u);
    wr32(sp0 - 0x2cu, 0x3f800000u);
    wr32(sp0 - 0x30u, eax);
    wr32(sp0 - 0x34u, arg1);
    g->eax = eax;
    g->edx = arg1;
    g->esp = sp0 - 0xcu;
    t5 = cow_thiscall(g, COW_IMG(0x1001a660u), self + 0x24u, 10, arg1, eax, 0x3f800000u, 0x3f800000u, 0u, arg3, 0x3f800000u, 0u, 0u, 0u);
    t6 = g->edx;
    eax = t5;
    edx = t6;
L_1002ab4b: ;
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1002aae0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1002aae0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
