/* f_0x10196260 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10196260(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    eax = in_eax;
    ecx = self;
    edx = in_edx;
    edi = 0u;
L_10196267: ;
    if ((uint8_t)arg1 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg1;
        goto L_10196279;
    }
    if (rd32(edi + rd32(self + 4u) + 0xcu) == 6u)
    {
        eax = rd32(self + 4u);
        goto L_101962b0;
    }
    eax = rd32(self + 4u);
L_10196279: ;
    if (rd32(edi + rd32(self + 4u) + 4u) != 0x43u)
    {
        esi = edi + rd32(self + 4u);
        t3 = rd32(esi + 0x20u);
        wr32(esi + 8u, t3);
    }
    else
    {
        esi = edi + rd32(self + 4u);
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t1 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0xabu);
        t2 = g->edx;
        wr32(esi + 8u, t1);
        eax = t1;
        edx = t2;
    }
    if (rd32(esi + 0x24u) == 0u)
    {
        ecx = rd32(esi + 0x24u);
    }
    else
    {
        ecx = rd32(esi + 0x24u);
        t4 = rd32(esi + 8u);
        t5 = rd32(esi + 4u);
        g->eax = t5;
        g->esp = sp0 - 0xcu;
        t6 = cow_fastcall(g, COW_IMG(0x10193bc0u), ecx, t4, 2, t5, t4);
        t7 = g->ecx;
        t8 = g->edx;
        eax = t6;
        ecx = t7;
        edx = t8;
    }
L_101962b0: ;
    if ((int32_t)(edi + 0x2cu) < 9108)
    {
        edi = edi + 0x2cu;
        goto L_10196267;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10196260(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10196260(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
