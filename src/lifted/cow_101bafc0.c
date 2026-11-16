/* f_0x101bafc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101bafc0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_call_regs(g, COW_IMG(0x101bb9e0u), in_eax, self, g->edx, 1, 0);
    t2 = g->edx;
    wr32(self + 0x204u, 0u);
    eax = t1;
    edx = t2;
    ebp = 0x40u;
    edi = self + 0x22cu;
L_101bafde: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_thiscall(g, COW_IMG(0x101ba5c0u), edi, 0);
    t4 = g->ecx;
    t5 = g->edx;
    if (ebp != 1u)
    {
        eax = t3;
        edx = t5;
        ebp = ebp - 1u;
        edi = edi + 0x1f0u;
        goto L_101bafde;
    }
    ecx = t4;
    wr32(self + 4u, arg1);
    wr32(self + 0x214u, 0xffffffffu);
    wr32(self + 0x218u, 0xffffffffu);
    wr32(self + 0x21cu, 0xffffffffu);
    wr32(self + 0x220u, 0xffffffffu);
    wr32(self + 0xcu, 0u);
    wr8(self, 0u);
    eax = COW_IMG(0x103d3c84u);
L_101bb01f: ;
    t6 = rd8(eax);
    wr8(eax + self - COW_IMG(0x103d3c84u) + 0x30u, (uint8_t)t6);
    if ((uint8_t)t6 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t6;
        goto L_101bb01f;
    }
    wr32(self + 0x208u, 0u);
    wr32(self + 0x20cu, 0u);
    wr32(self + 0x210u, 0u);
    wr32(self + 8u, 0u);
    wr32(self + 0x200u, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101bafc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101bafc0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
