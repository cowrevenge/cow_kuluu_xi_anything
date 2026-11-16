/* f_0x10141ba0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10141ba0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;

    eax = in_eax;
    edx = in_edx;
    esi = 0xeff8u;
L_10141ba6: ;
    g->eax = eax;
    g->edx = edx;
    t1 = rd32(COW_IMG(0x10621808u));
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x1015b9e0u), t1, 1, esi);
    t3 = g->ecx;
    t4 = g->edx;
    if (esi + 1u < 0xefffu)
    {
        eax = t2;
        edx = t4;
        esi = esi + 1u;
        goto L_10141ba6;
    }
    eax = t2;
    ecx = t3;
    edx = t4;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_stdcall(g, COW_IMG(0x10141b20u), 0);
    t6 = g->edx;
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x10144d10u), rd32(COW_IMG(0x105782b0u)), 1, 1u);
    t8 = g->edx;
    g->edx = t8;
    t9 = cow_stdcall(g, COW_IMG(0x10143e60u), 0);
    t10 = g->edx;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10371504u), 1u, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10141ba0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10141ba0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
